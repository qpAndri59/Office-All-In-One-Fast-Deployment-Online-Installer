// GPL-2.0-only Andreea Mirela 2026
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <shlobj.h>
#include <shobjidl.h>
#include <shellapi.h>
#include <math.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cwctype>
#include <cctype>
#include <wincodec.h>
#include "resources.h"
#include "translations.h"

#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "shell32.lib")
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "uuid.lib")
#pragma comment(lib, "windowscodecs.lib")

#ifndef RT_RCDATA
#define RT_RCDATA MAKEINTRESOURCE(10)
#endif
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

static const int WIN_W   = 480;
static const int WIN_H   = 450;
static const int HDR_H   = 36;
static const int IMG_X   = 20;
static const int IMG_Y   = HDR_H + 8;
static const int IMG_W   = WIN_W - IMG_X * 2;
static const int IMG_H   = 100;
static const int CTRLS_Y = IMG_Y + IMG_H + 18;

static const COLORREF CLR_HDR = RGB(0, 102, 204);
static IWICImagingFactory* gWicFactory = NULL;

#define ID_CLOSE         100
#define ID_CMB_CHANNEL   200
#define ID_CMB_PRODUCT   201
#define ID_CMB_ARCH      202
#define ID_CMB_LANG      203
#define ID_PATH_EDIT     300
#define ID_BTN_BROWSE    301
#define ID_BTN_INSTALL   400
#define ID_BTN_CLOSE_APP 401
#define ID_BTN_MENU      402
#define ID_BTN_INFO      403
#define ID_BTN_AUTORUN   404
#define ID_BTN_REMOVEKEYS 405
#define WM_INSTALL_DONE  (WM_APP + 1)
#define WM_REMOVE_UPDATE (WM_APP + 2)
#define WM_REMOVE_FINISH (WM_APP + 3)
#define TIMER_SPIN       1

static const UiStrings* gUi = &gUiEn;
static const AboutStrings* gAbout = &gAboutEn;

static const wchar_t* gAboutUrl = L"https://learn.microsoft.com/en-us/microsoft-365-apps/deploy/overview-office-deployment-tool";

enum InfoKind { INFO_NONE, INFO_LOW_SPACE, INFO_MISSING_PACKAGES, INFO_MISSING_ODT };
static InfoKind gInfoKind = INFO_NONE;

struct StartupPreset {
    bool hasChannel = false;
    bool hasProduct = false;
    bool hasArch    = false;
    bool hasLang    = false;
    bool hasPath    = false;

    std::wstring channelId;
    std::wstring productId;
    std::wstring arch;
    std::wstring langCode;
    std::wstring installPath;

    bool complete = false;
    bool spaceOk  = false;
};
static StartupPreset gStartup;

static HWND hLblInfo = NULL;
static HWND hBtnInfo = NULL;
static HWND hAboutWnd = NULL;
static HWND hAboutText = NULL;
static HWND hAboutLink = NULL;
static HWND hAboutLicense = NULL;

static HBITMAP hInfoBmp = NULL;
static HWND hHdrTitle = NULL;

enum AppState { ST_MAIN, ST_LOADING, ST_DONE };
static AppState gState = ST_MAIN;

struct LangInfo { const wchar_t* label; const wchar_t* code; };
struct ProdInfo {
    const wchar_t* id;
    const wchar_t* label;
    int imgRes;
};
struct ChanInfo {
    const wchar_t* id;
    const wchar_t* label;
    int bmpRes;
    const ProdInfo* prods;
    int nProds;
};

static const LangInfo g_langs[] = {
    { L"English (US)",                  L"en-us"      },
    { L"English (UK)",                  L"en-gb"      },
    { L"English (Australia)",           L"en-au"      },
    { L"English (Canada)",              L"en-ca"      },
    { L"English (New Zealand)",         L"en-nz"      },
    { L"Deutsch",                       L"de-de"      },
    { L"Deutsch (Österreich)",          L"de-at"      },
    { L"Deutsch (Schweiz)",             L"de-ch"      },
    { L"Français",                      L"fr-fr"      },
    { L"Français (Belgique)",           L"fr-be"      },
    { L"Français (Canada)",             L"fr-ca"      },
    { L"Français (Suisse)",             L"fr-ch"      },
    { L"Español (España)",              L"es-es"      },
    { L"Español (México)",              L"es-mx"      },
    { L"Italiano",                      L"it-it"      },
    { L"Português (Portugal)",          L"pt-pt"      },
    { L"Português (Brasil)",            L"pt-br"      },
    { L"Română",                        L"ro-ro"      },
    { L"Русский",                       L"ru-ru"      },
    { L"Polski",                        L"pl-pl"      },
    { L"Čeština",                       L"cs-cz"      },
    { L"Slovenčina",                    L"sk-sk"      },
    { L"Magyar",                        L"hu-hu"      },
    { L"Nederlands",                    L"nl-nl"      },
    { L"Nederlands (België)",           L"nl-be"      },
    { L"Svenska",                       L"sv-se"      },
    { L"Dansk",                         L"da-dk"      },
    { L"Norsk bokmål",                  L"nb-no"      },
    { L"Suomi",                         L"fi-fi"      },
    { L"Ελληνικά",                      L"el-gr"      },
    { L"Türkçe",                        L"tr-tr"      },
    { L"日本語",                          L"ja-jp"      },
    { L"中文（简体）",                      L"zh-cn"      },
    { L"中文（繁體）",                      L"zh-tw"      },
    { L"한국어",                           L"ko-kr"      },
    { L"العربية",                        L"ar-sa"      },
    { L"עברית",                          L"he-il"      },
    { L"हिन्दी",                          L"hi-in"      },
    { L"ภาษาไทย",                        L"th-th"      },
    { L"Tiếng Việt",                    L"vi-vn"      },
    { L"Bahasa Indonesia",              L"id-id"      },
    { L"Українська",                    L"uk-ua"      },
    { L"Български",                     L"bg-bg"      },
    { L"Hrvatski",                      L"hr-hr"      },
    { L"Slovenščina",                   L"sl-si"      },
    { L"Lietuvių",                      L"lt-lt"      },
    { L"Latviešu",                      L"lv-lv"      },
    { L"Eesti",                         L"et-ee"      },
    { L"Srpski (latinica)",             L"sr-latn-rs" },
    { L"Српски (ћирилица)",             L"sr-cyrl-rs" },
    { L"Bahasa Melayu",                 L"ms-my"      },
    { L"Filipino",                      L"fil-ph"     },
    { L"Gaeilge",                       L"ga-ie"      },
    { L"English (South Africa)",        L"en-za"      },
};
static const int N_LANGS = (int)(sizeof(g_langs) / sizeof(g_langs[0]));

static const ProdInfo g_prod365[] = {
    { L"O365ProPlusRetail",            L"Microsoft 365 Professional Plus", IDB_IMG_365 },
    { L"O365BusinessRetail",           L"Microsoft 365 Business", IDB_IMG_365 },
    { L"O365HomePremRetail",           L"Microsoft 365 Personal / Family", IDB_IMG_365 },
    { L"O365PersonalRetail",           L"Microsoft 365 Personal", IDB_IMG_365 },
    { L"O365SmallBusinessRetail",      L"Microsoft 365 Small Business Premium", IDB_IMG_365 },
    { L"O365ProPlusEEANoTeamsRetail",  L"Microsoft 365 Professional Plus (no Teams)", IDB_IMG_365 },
    { L"O365BusinessEEANoTeamsRetail", L"Microsoft 365 Business (no Teams)", IDB_IMG_365 },
    { L"O365EduProPlusRetail",         L"Microsoft 365 Education Pro Plus", IDB_IMG_365 },
    { L"O365EduStaffRetail",           L"Microsoft 365 Education Staff", IDB_IMG_365 },
    { L"O365EduStudentRetail",         L"Microsoft 365 Education Student", IDB_IMG_365 },
};
static const ProdInfo g_prod2024[] = {
    { L"ProPlus2024Volume",      L"Office Professional Plus 2024 (Volume)", IDB_IMG_2024 },
    { L"Standard2024Volume",     L"Office Standard 2024 (Volume)", IDB_IMG_2024 },
    { L"Professional2024Retail", L"Office Professional 2024 (Not Recommended)", IDB_IMG_2024 },
    { L"HomeBusiness2024Retail", L"Office Home & Business 2024", IDB_IMG_HOME_BUS },
    { L"Home2024Retail",         L"Office Home & Student 2024", IDB_IMG_HOME_STU },
    { L"ProjectPro2024Volume",   L"Project Professional 2024 (Volume)", IDB_IMG_PROJECT_2024 },
    { L"ProjectStd2024Volume",   L"Project Standard 2024 (Volume)", IDB_IMG_PROJECT_2024 },
    { L"VisioPro2024Volume",     L"Visio Professional 2024 (Volume)", IDB_IMG_VISIO_2024 },
    { L"VisioStd2024Volume",     L"Visio Standard 2024 (Volume)", IDB_IMG_VISIO_2024 },
    { L"Excel2024Volume",        L"Excel 2024 (Volume)", IDB_IMG_EXCEL_2024 },
    { L"Word2024Volume",         L"Word 2024 (Volume)", IDB_IMG_WORD_2024 },
    { L"PowerPoint2024Volume",   L"PowerPoint 2024 (Volume)", IDB_IMG_POWERPOINT_2024 },
    { L"Outlook2024Volume",      L"Outlook 2024 (Volume)", IDB_IMG_OUTLOOK_2024 },
    { L"Access2024Volume",       L"Access 2024 (Volume)", IDB_IMG_ACCESS_2024 },
};
static const ProdInfo g_prod2021[] = {
    { L"ProPlus2021Volume",      L"Office Professional Plus 2021 (Volume)", IDB_IMG_2021 },
    { L"Standard2021Volume",     L"Office Standard 2021 (Volume)", IDB_IMG_2021 },
    { L"Professional2021Retail", L"Office Professional 2021 Retail", IDB_IMG_2021 },
    { L"HomeBusiness2021Retail", L"Office Home & Business 2021", IDB_IMG_HOME_BUS },
    { L"HomeStudent2021Retail",  L"Office Home & Student 2021", IDB_IMG_HOME_STU },
    { L"ProjectPro2021Volume",   L"Project Professional 2021 (Volume)", IDB_IMG_PROJECT_2021 },
    { L"ProjectStd2021Volume",   L"Project Standard 2021 (Volume)", IDB_IMG_PROJECT_2021 },
    { L"VisioPro2021Volume",     L"Visio Professional 2021 (Volume)", IDB_IMG_VISIO_2021 },
    { L"VisioStd2021Volume",     L"Visio Standard 2021 (Volume)", IDB_IMG_VISIO_2021 },
    { L"Excel2021Volume",        L"Excel 2021 (Volume)", IDB_IMG_EXCEL_2021 },
    { L"Word2021Volume",         L"Word 2021 (Volume)", IDB_IMG_WORD_2021 },
    { L"PowerPoint2021Volume",   L"PowerPoint 2021 (Volume)", IDB_IMG_POWERPOINT_2021 },
    { L"Outlook2021Volume",      L"Outlook 2021 (Volume)", IDB_IMG_OUTLOOK_2021 },
    { L"Access2021Volume",       L"Access 2021 (Volume)", IDB_IMG_ACCESS_2021 },
    { L"OneNote2021Volume",      L"OneNote 2021 (Volume)", IDB_IMG_ONENOTE_2021 },
};

static const ProdInfo g_prod2019[] = {
    { L"ProPlus2019Volume",      L"Office Professional Plus 2019 (Volume)", IDB_IMG_2019 },
    { L"Standard2019Volume",     L"Office Standard 2019 (Volume)", IDB_IMG_2019 },
    { L"Professional2019Retail", L"Office Professional 2019 (Retail)", IDB_IMG_2019 },
    { L"HomeBusiness2019Retail", L"Office Home & Business 2019", IDB_IMG_HOME_BUS },
    { L"HomeStudent2019Retail",  L"Office Home & Student 2019", IDB_IMG_HOME_STU },
    { L"Personal2019Retail",     L"Office Personal 2019", IDB_IMG_HOME_STU },
    { L"ProPlus2019Retail",      L"Office Professional Plus 2019 (Retail)", IDB_IMG_2019 },
    { L"ProjectPro2019Volume",   L"Project Professional 2019 (Volume)", IDB_IMG_PROJECT_2021 },
    { L"ProjectStd2019Volume",   L"Project Standard 2019 (Volume)", IDB_IMG_PROJECT_2021 },
    { L"VisioPro2019Volume",     L"Visio Professional 2019 (Volume)", IDB_IMG_VISIO_2021 },
    { L"VisioStd2019Volume",     L"Visio Standard 2019 (Volume)", IDB_IMG_VISIO_2021 },
};

static const ProdInfo g_prod2016[] = {
    { L"PersonalRetail",         L"Office Personal 2016", IDB_IMG_2016 },
    { L"HomeStudentRetail",      L"Office Home & Student 2016", IDB_IMG_HOME_STU },
    { L"HomeBusinessRetail",     L"Office Home & Business 2016", IDB_IMG_HOME_BUS },
    { L"ProPlusVolume",          L"Office Professional Plus 2016 (Volume)", IDB_IMG_2016 },
    { L"StandardVolume",         L"Office Standard 2016 (Volume)", IDB_IMG_2016 },
    { L"ProjectProVolume",       L"Project Professional 2016 (Volume)", IDB_IMG_PROJECT_2021 },
    { L"ProjectStdVolume",       L"Project Standard 2016 (Volume)", IDB_IMG_PROJECT_2021 },
    { L"VisioProVolume",         L"Visio Professional 2016 (Volume)", IDB_IMG_VISIO_2021 },
    { L"VisioStdVolume",         L"Visio Standard 2016 (Volume)", IDB_IMG_VISIO_2021 },
};

static const ChanInfo g_channels[] = {
    { L"PerpetualVL2024",   L"Office 2024", IDB_IMG_2024, g_prod2024, (int)(sizeof(g_prod2024)/sizeof(g_prod2024[0])) },
    { L"PerpetualVL2021",   L"Office 2021", IDB_IMG_2021, g_prod2021, (int)(sizeof(g_prod2021)/sizeof(g_prod2021[0])) },
    { L"PerpetualVL2019",   L"Office 2019", IDB_IMG_2021, g_prod2019, (int)(sizeof(g_prod2019)/sizeof(g_prod2019[0])) },
    { L"PerpetualVL2016",   L"Office 2016", IDB_IMG_2021,  g_prod2016, (int)(sizeof(g_prod2016)/sizeof(g_prod2016[0])) },
    { L"Current",           L"Microsoft 365 Monthly Channel", IDB_IMG_365, g_prod365, (int)(sizeof(g_prod365)/sizeof(g_prod365[0])) },
    { L"MonthlyEnterprise", L"Microsoft 365 Monthly Enterprise Channel", IDB_IMG_365, g_prod365, (int)(sizeof(g_prod365)/sizeof(g_prod365[0])) },
    { L"SemiAnnual",        L"Microsoft 365 Semi-Annual Enterprise Channel", IDB_IMG_365, g_prod365, (int)(sizeof(g_prod365)/sizeof(g_prod365[0])) },
    { L"CurrentPreview",    L"Microsoft 365 Experimental Channel", IDB_IMG_365, g_prod365, (int)(sizeof(g_prod365)/sizeof(g_prod365[0])) },
    { L"SemiAnnualPreview", L"Microsoft 365 Experimental Semi-Annual Enterprise", IDB_IMG_365, g_prod365, (int)(sizeof(g_prod365)/sizeof(g_prod365[0])) },
};
static const int N_CHANNELS = (int)(sizeof(g_channels) / sizeof(g_channels[0]));

HINSTANCE hInst;
HWND hMain;
HWND hStaticImg;
HWND hBtnClose;
HWND hComboChannel, hComboProduct, hComboArch, hComboLang;
HWND hPathEdit, hBtnBrowse, hBtnInstall, hBtnGenerateAutorun, hBtnRemoveKeys;
HWND hLblChannel, hLblProduct, hLblArch, hLblLang, hLblPath;
HWND hLblStatus, hBtnCloseApp, hBtnMenu;

static HWND gMainCtrls[20];
static int  gNMainCtrls = 0;

HBITMAP hCurrentImg = NULL;
HFONT   hFontBody   = NULL;
HFONT   hFontHdr    = NULL;
HFONT   hFontBig    = NULL;
HFONT   hFontSmall  = NULL;
HANDLE  hFontMem    = NULL;
HBRUSH  hHdrBrush   = NULL;
HBRUSH  hBlueBrush  = NULL;

static int  gAnimFrame = 0;
static PROCESS_INFORMATION gPI = {};
static wchar_t gInstallPath[MAX_PATH] = {};

static std::string WideToUtf8(const std::wstring& w) {
    if (w.empty()) return {};
    int n = WideCharToMultiByte(CP_UTF8, 0, w.c_str(), -1, nullptr, 0, nullptr, nullptr);
    if (n <= 0) return {};
    std::string s(n - 1, '\0');
    WideCharToMultiByte(CP_UTF8, 0, w.c_str(), -1, &s[0], n, nullptr, nullptr);
    return s;
}

static void ReplaceAll(std::string& str, const std::string& f, const std::string& t) {
    size_t p = 0;
    while ((p = str.find(f, p)) != std::string::npos) {
        str.replace(p, f.size(), t);
        p += t.size();
    }
}

static void SetFont(HWND h, HFONT font) {
    SendMessage(h, WM_SETFONT, (WPARAM)font, TRUE);
}

static std::wstring TrimW(std::wstring s) {
    size_t a = 0, b = s.size();
    while (a < b && iswspace((wint_t)s[a])) a++;
    while (b > a && iswspace((wint_t)s[b - 1])) b--;
    return s.substr(a, b - a);
}

static std::wstring LowerW(std::wstring s) {
    for (wchar_t& ch : s) ch = (wchar_t)towlower(ch);
    return s;
}

static std::wstring UnquoteW(std::wstring s) {
    s = TrimW(s);
    if (s.size() >= 2) {
        if ((s.front() == L'"' && s.back() == L'"') || (s.front() == L'\'' && s.back() == L'\'')) {
            s = s.substr(1, s.size() - 2);
        }
    }
    return TrimW(s);
}

static std::wstring Utf8OrAnsiToWide(const std::string& s) {
    if (s.empty()) return {};

    int cp = CP_UTF8;
    int n = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, s.c_str(), -1, nullptr, 0);
    if (n <= 0) {
        cp = CP_ACP;
        n = MultiByteToWideChar(CP_ACP, 0, s.c_str(), -1, nullptr, 0);
    }
    if (n <= 0) return {};

    std::wstring w(n - 1, L'\0');
    if (!MultiByteToWideChar(cp, 0, s.c_str(), -1, &w[0], n))
        return {};

    return w;
}

static bool ReadFileText(const std::wstring& path, std::string& out) {
    out.clear();
    HANDLE h = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
        NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (h == INVALID_HANDLE_VALUE) return false;

    LARGE_INTEGER sz{};
    if (!GetFileSizeEx(h, &sz) || sz.QuadPart <= 0 || sz.QuadPart > 32LL * 1024 * 1024) {
        CloseHandle(h);
        return false;
    }

    out.resize((size_t)sz.QuadPart);
    DWORD read = 0;
    BOOL ok = ReadFile(h, out.data(), (DWORD)out.size(), &read, NULL);
    CloseHandle(h);
    if (!ok) return false;
    out.resize(read);

    if (out.size() >= 3 &&
        (unsigned char)out[0] == 0xEF &&
        (unsigned char)out[1] == 0xBB &&
        (unsigned char)out[2] == 0xBF) {
        out.erase(0, 3);
    }
    return true;
}

static bool StartsWithNoCase(const std::wstring& s, const wchar_t* prefix) {
    size_t n = wcslen(prefix);
    if (s.size() < n) return false;
    return LowerW(s.substr(0, n)) == LowerW(prefix);
}

static void ApplyAboutLanguage(const wchar_t* langCode) {
    gAbout = AboutForLangCode(langCode);

    if (hAboutWnd)   SetWindowTextW(hAboutWnd,   gAbout->title);
    if (hAboutText)  SetWindowTextW(hAboutText,  gAbout->body);
    if (hAboutLink)  SetWindowTextW(hAboutLink,  gAbout->link);
}

static HBITMAP LoadBitmapFromFileWic(const std::wstring& filePath) {
    if (!gWicFactory) return NULL;

    IWICBitmapDecoder* decoder = NULL;
    IWICBitmapFrameDecode* frame = NULL;
    IWICFormatConverter* conv = NULL;
    HBITMAP hbmp = NULL;

    do {
        if (FAILED(gWicFactory->CreateDecoderFromFilename(
                filePath.c_str(), NULL, GENERIC_READ, WICDecodeMetadataCacheOnLoad, &decoder)))
            break;

        if (FAILED(decoder->GetFrame(0, &frame)))
            break;

        if (FAILED(gWicFactory->CreateFormatConverter(&conv)))
            break;

        if (FAILED(conv->Initialize(
                frame,
                GUID_WICPixelFormat32bppPBGRA,
                WICBitmapDitherTypeNone,
                NULL,
                0.0,
                WICBitmapPaletteTypeCustom)))
            break;

        UINT w = 0, h = 0;
        if (FAILED(conv->GetSize(&w, &h)) || w == 0 || h == 0)
            break;

        BITMAPINFO bi = {};
        bi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bi.bmiHeader.biWidth = (LONG)w;
        bi.bmiHeader.biHeight = -(LONG)h;
        bi.bmiHeader.biPlanes = 1;
        bi.bmiHeader.biBitCount = 32;
        bi.bmiHeader.biCompression = BI_RGB;

        void* bits = NULL;
        hbmp = CreateDIBSection(NULL, &bi, DIB_RGB_COLORS, &bits, NULL, 0);
        if (!hbmp || !bits) {
            if (hbmp) DeleteObject(hbmp);
            hbmp = NULL;
            break;
        }

        const UINT stride = w * 4;
        const UINT bufSize = stride * h;

        if (FAILED(conv->CopyPixels(NULL, stride, bufSize, (BYTE*)bits))) {
            DeleteObject(hbmp);
            hbmp = NULL;
            break;
        }
    } while (false);

    if (conv) conv->Release();
    if (frame) frame->Release();
    if (decoder) decoder->Release();

    return hbmp;
}

static HBITMAP LoadInfoBitmapFromAssets() {
    wchar_t exePath[MAX_PATH] = {};
    if (!GetModuleFileNameW(NULL, exePath, MAX_PATH) || !exePath[0]) return NULL;

    std::wstring p = exePath;
    size_t pos = p.find_last_of(L"\\/");
    if (pos == std::wstring::npos) return NULL;

    p = p.substr(0, pos) + L"\\assets\\info.png";
    return LoadBitmapFromFileWic(p);
}

static void UpdateInfoText() {
    if (!hLblInfo) return;

    switch (gInfoKind) {
    case INFO_LOW_SPACE:
        SetWindowTextW(hLblInfo, gUi->insufficientSpace);
        ShowWindow(hLblInfo, SW_SHOW);
        break;
    case INFO_MISSING_PACKAGES:
        SetWindowTextW(hLblInfo, gUi->missingPackagesFolder);
        ShowWindow(hLblInfo, SW_SHOW);
        break;
    case INFO_MISSING_ODT:
        SetWindowTextW(hLblInfo, gUi->missingOdt);
        ShowWindow(hLblInfo, SW_SHOW);
        break;
    default:
        SetWindowTextW(hLblInfo, L"");
        ShowWindow(hLblInfo, SW_HIDE);
        break;
    }
}

static void ApplyUiLanguage(const wchar_t* langCode) {
    gUi = UiForLangCode(langCode);

    if (hMain) SetWindowTextW(hMain, gUi->title);
    if (hHdrTitle) SetWindowTextW(hHdrTitle, gUi->title);
    if (hLblChannel) SetWindowTextW(hLblChannel, gUi->channel);
    if (hLblProduct) SetWindowTextW(hLblProduct, gUi->product);
    if (hLblArch) SetWindowTextW(hLblArch, gUi->arch);
    if (hLblLang) SetWindowTextW(hLblLang, gUi->language);
    if (hLblPath) SetWindowTextW(hLblPath, gUi->installTo);
    if (hBtnBrowse) SetWindowTextW(hBtnBrowse, gUi->browse);
    if (hBtnInstall) SetWindowTextW(hBtnInstall, gUi->install);
    if (hBtnGenerateAutorun) SetWindowTextW(hBtnGenerateAutorun, gUi->generateAutorun);
    if (hBtnRemoveKeys) SetWindowTextW(hBtnRemoveKeys, gUi->removeKeys);
    if (hBtnCloseApp) SetWindowTextW(hBtnCloseApp, gUi->closeApp);
    if (hBtnMenu) SetWindowTextW(hBtnMenu, gUi->mainMenu);
    if (hLblStatus && gState == ST_DONE) SetWindowTextW(hLblStatus, gUi->done);
    ApplyAboutLanguage(langCode);
    UpdateInfoText();
}

static bool HasEnoughFreeSpace(const std::wstring& installPath, ULONGLONG minBytes = 5ULL * 1024ULL * 1024ULL * 1024ULL) {
    if (installPath.empty()) return false;

    wchar_t volPath[MAX_PATH] = {};
    if (!GetVolumePathNameW(installPath.c_str(), volPath, MAX_PATH)) {
        if (installPath.size() >= 2 && installPath[1] == L':') {
            volPath[0] = installPath[0];
            volPath[1] = L':';
            volPath[2] = L'\\';
            volPath[3] = 0;
        } else {
            return false;
        }
    }

    ULARGE_INTEGER freeBytes{};
    if (!GetDiskFreeSpaceExW(volPath, &freeBytes, NULL, NULL)) return false;
    return freeBytes.QuadPart >= minBytes;
}

static int FindChannelIndexById(const std::wstring& id) {
    for (int i = 0; i < N_CHANNELS; i++)
        if (_wcsicmp(g_channels[i].id, id.c_str()) == 0)
            return i;
    return -1;
}

static int FindProductIndexById(int chanIdx, const std::wstring& id) {
    if (chanIdx < 0 || chanIdx >= N_CHANNELS) return -1;
    const ChanInfo& ch = g_channels[chanIdx];
    for (int i = 0; i < ch.nProds; i++)
        if (_wcsicmp(ch.prods[i].id, id.c_str()) == 0)
            return i;
    return -1;
}

static int FindChannelByProductId(const std::wstring& productId) {
    for (int c = 0; c < N_CHANNELS; c++) {
        for (int p = 0; p < g_channels[c].nProds; p++) {
            if (_wcsicmp(g_channels[c].prods[p].id, productId.c_str()) == 0)
                return c;
        }
    }
    return -1;
}

static int FindLangIndexByCode(const std::wstring& code) {
    for (int i = 0; i < N_LANGS; i++)
        if (_wcsicmp(g_langs[i].code, code.c_str()) == 0)
            return i;
    return -1;
}

static int ParseArchIndex(const std::wstring& arch) {
    std::wstring a = LowerW(TrimW(arch));
    if (a == L"64" || a == L"64-bit" || a == L"x64" || a == L"amd64" || a == L"64bit") return 0;
    if (a == L"32" || a == L"32-bit" || a == L"x86" || a == L"32bit") return 1;
    return -1;
}

static void LoadStartupPreset() {
    wchar_t cwd[MAX_PATH] = {};
    if (!GetCurrentDirectoryW(MAX_PATH, cwd) || !cwd[0]) return;

    std::wstring autorunPath = std::wstring(cwd) + L"\\autorun.inf";
    std::string text;
    if (!ReadFileText(autorunPath, text)) return;

    std::istringstream iss(text);
    std::string line;
    while (std::getline(iss, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();

        std::string trimmed = line;
        size_t a = 0, b = trimmed.size();
        while (a < b && isspace((unsigned char)trimmed[a])) a++;
        while (b > a && isspace((unsigned char)trimmed[b - 1])) b--;
        trimmed = trimmed.substr(a, b - a);

        if (trimmed.empty() || trimmed[0] == ';' || trimmed[0] == '#') continue;
        if (trimmed[0] == '[') continue;

        size_t eq = trimmed.find('=');
        if (eq == std::string::npos) continue;

        std::string key = trimmed.substr(0, eq);
        std::string val = trimmed.substr(eq + 1);

        a = 0; b = key.size();
        while (a < b && isspace((unsigned char)key[a])) a++;
        while (b > a && isspace((unsigned char)key[b - 1])) b--;
        key = key.substr(a, b - a);

        a = 0; b = val.size();
        while (a < b && isspace((unsigned char)val[a])) a++;
        while (b > a && isspace((unsigned char)val[b - 1])) b--;
        val = val.substr(a, b - a);

        std::wstring wkey = LowerW(Utf8OrAnsiToWide(key));
        std::wstring wval = UnquoteW(Utf8OrAnsiToWide(val));

        if (wkey == L"channel" || wkey == L"channelid") {
            gStartup.channelId = wval;
            gStartup.hasChannel = !gStartup.channelId.empty();
        } else if (wkey == L"product" || wkey == L"productid") {
            gStartup.productId = wval;
            gStartup.hasProduct = !gStartup.productId.empty();
        } else if (wkey == L"arch" || wkey == L"architecture") {
            gStartup.arch = wval;
            gStartup.hasArch = !gStartup.arch.empty();
        } else if (wkey == L"lang" || wkey == L"language") {
            gStartup.langCode = LowerW(wval);
            gStartup.hasLang = !gStartup.langCode.empty();
        } else if (wkey == L"path" || wkey == L"installpath" || wkey == L"installto") {
            gStartup.installPath = wval;
            gStartup.hasPath = !gStartup.installPath.empty();
        }
    }

    gStartup.complete = gStartup.hasChannel && gStartup.hasProduct && gStartup.hasArch && gStartup.hasLang && gStartup.hasPath;
}

static HBITMAP LoadBitmapFromResource(int resId) {
    if (!gWicFactory) return NULL;

    HRSRC hR = FindResourceW(hInst, MAKEINTRESOURCEW(resId), (LPCWSTR)RT_RCDATA);
    if (!hR) return NULL;

    HGLOBAL hG = LoadResource(hInst, hR);
    if (!hG) return NULL;

    DWORD sz = SizeofResource(hInst, hR);
    void* pData = LockResource(hG);
    if (!pData || !sz) return NULL;

    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, sz);
    if (!hMem) return NULL;

    void* pMem = GlobalLock(hMem);
    if (!pMem) {
        GlobalFree(hMem);
        return NULL;
    }
    memcpy(pMem, pData, sz);
    GlobalUnlock(hMem);

    IStream* pStream = NULL;
    HBITMAP hbmp = NULL;

    if (FAILED(CreateStreamOnHGlobal(hMem, TRUE, &pStream))) {
        GlobalFree(hMem);
        return NULL;
    }

    IWICBitmapDecoder* decoder = NULL;
    IWICBitmapFrameDecode* frame = NULL;
    IWICFormatConverter* conv = NULL;

    do {
        if (FAILED(gWicFactory->CreateDecoderFromStream(
                pStream, NULL, WICDecodeMetadataCacheOnLoad, &decoder)))
            break;

        if (FAILED(decoder->GetFrame(0, &frame)))
            break;

        if (FAILED(gWicFactory->CreateFormatConverter(&conv)))
            break;

        if (FAILED(conv->Initialize(
                frame,
                GUID_WICPixelFormat32bppPBGRA,
                WICBitmapDitherTypeNone,
                NULL,
                0.0,
                WICBitmapPaletteTypeCustom)))
            break;

        UINT w = 0, h = 0;
        if (FAILED(conv->GetSize(&w, &h)) || w == 0 || h == 0)
            break;

        BITMAPINFO bi = {};
        bi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bi.bmiHeader.biWidth = (LONG)w;
        bi.bmiHeader.biHeight = -(LONG)h;
        bi.bmiHeader.biPlanes = 1;
        bi.bmiHeader.biBitCount = 32;
        bi.bmiHeader.biCompression = BI_RGB;

        void* bits = NULL;
        hbmp = CreateDIBSection(NULL, &bi, DIB_RGB_COLORS, &bits, NULL, 0);
        if (!hbmp || !bits) {
            if (hbmp) DeleteObject(hbmp);
            hbmp = NULL;
            break;
        }

        const UINT stride = w * 4;
        const UINT bufSize = stride * h;

        if (FAILED(conv->CopyPixels(NULL, stride, bufSize, (BYTE*)bits))) {
            DeleteObject(hbmp);
            hbmp = NULL;
            break;
        }

    } while (false);

    if (conv) conv->Release();
    if (frame) frame->Release();
    if (decoder) decoder->Release();
    if (pStream) pStream->Release();

    return hbmp;
}

static void UpdateImage(int chanIdx, int prodIdx) {
    if (hCurrentImg) {
        DeleteObject(hCurrentImg);
        hCurrentImg = NULL;
    }

    if (hInfoBmp) {
        DeleteObject(hInfoBmp);
        hInfoBmp = NULL;
    }

    int resId = g_channels[chanIdx].bmpRes;
    if (prodIdx >= 0 && prodIdx < g_channels[chanIdx].nProds) {
        int pr = g_channels[chanIdx].prods[prodIdx].imgRes;
        if (pr != 0) resId = pr;
    }

    hCurrentImg = LoadBitmapFromResource(resId);
    SendMessage(hStaticImg, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hCurrentImg);
}

static void UpdateAboutTextsNow() {
    ApplyAboutLanguage(gAbout ? gAbout->title : L"en-us");
}

static void PopulateProducts(int chanIdx, const wchar_t* preferredProductId = NULL) {
    SendMessage(hComboProduct, CB_RESETCONTENT, 0, 0);

    const ChanInfo& ch = g_channels[chanIdx];
    int sel = 0;

    for (int i = 0; i < ch.nProds; i++) {
        SendMessageW(hComboProduct, CB_ADDSTRING, 0, (LPARAM)ch.prods[i].label);
        if (preferredProductId && _wcsicmp(ch.prods[i].id, preferredProductId) == 0)
            sel = i;
    }

    SendMessage(hComboProduct, CB_SETCURSEL, sel, 0);
}

static void ShowMainCtrls(bool show) {
    int cmd = show ? SW_SHOW : SW_HIDE;
    for (int i = 0; i < gNMainCtrls; i++) ShowWindow(gMainCtrls[i], cmd);
}
static void ShowDoneCtrls(bool show) {
    int cmd = show ? SW_SHOW : SW_HIDE;
    ShowWindow(hLblStatus,   cmd);
    ShowWindow(hBtnCloseApp, cmd);
    ShowWindow(hBtnMenu,     cmd);
}

static void ShowAboutWindow();

static LRESULT CALLBACK LicenseWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
    case WM_CREATE: {
        RECT rc;
        GetClientRect(hwnd, &rc);
        HWND hEdit = CreateWindowExW(
            WS_EX_CLIENTEDGE,
            L"EDIT", L"",                          // <-- start empty
            WS_VISIBLE | WS_CHILD | WS_VSCROLL |
            ES_MULTILINE | ES_READONLY | ES_AUTOVSCROLL,
            8, 8, rc.right - 16, rc.bottom - 16,
            hwnd, NULL, hInst, NULL);
        SendMessage(hEdit, WM_SETFONT, (WPARAM)hFontBody, TRUE);

        // Win32 multiline EDIT needs \r\n — raw string literal only has \n
        std::wstring text(license);
        std::wstring crlf;
        crlf.reserve(text.size() + 512);
        for (size_t i = 0; i < text.size(); i++) {
            if (text[i] == L'\n' && (i == 0 || text[i - 1] != L'\r'))
                crlf += L'\r';
            crlf += text[i];
        }
        SetWindowTextW(hEdit, crlf.c_str());
        return 0;
    }
    case WM_SIZE: {
        HWND hEdit = GetWindow(hwnd, GW_CHILD);
        if (hEdit) {
            int w = LOWORD(lParam), h = HIWORD(lParam);
            SetWindowPos(hEdit, NULL, 8, 8, w - 16, h - 16, SWP_NOZORDER);
        }
        return 0;
    }
    case WM_CLOSE:
        DestroyWindow(hwnd);
        return 0;
    }
    return DefWindowProc(hwnd, msg, wParam, lParam);
}

static void ShowLicenseWindow(HWND hParent) {
    // Inregistreaza clasa doar o data
    static bool registered = false;
    if (!registered) {
        WNDCLASSEXW wc = {};
        wc.cbSize        = sizeof(wc);
        wc.lpfnWndProc   = LicenseWndProc;
        wc.hInstance     = hInst;
        wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
        wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
        wc.lpszClassName = L"OfficeLicenseWindow";
        wc.hIcon         = LoadIconW(hInst, MAKEINTRESOURCEW(IDI_APP_ICON));
        wc.hIconSm       = wc.hIcon;
        RegisterClassExW(&wc);
        registered = true;
    }

    int w = 700, h = 540;
    int x = (GetSystemMetrics(SM_CXSCREEN) - w) / 2;
    int y = (GetSystemMetrics(SM_CYSCREEN) - h) / 2;

    HWND hDlg = CreateWindowExW(
        WS_EX_DLGMODALFRAME,
        L"OfficeLicenseWindow",
        L"GNU General Public License v2",
        WS_OVERLAPPEDWINDOW,
        x, y, w, h,
        hParent, NULL, hInst, NULL);

    if (!hDlg) return;
    ShowWindow(hDlg, SW_SHOW);
    UpdateWindow(hDlg);
}

static LRESULT CALLBACK AboutWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
    case WM_CREATE: {
        SetWindowTextW(hwnd, gAbout->title);

        hAboutText = CreateWindowExW(
            WS_EX_CLIENTEDGE,
            L"EDIT",
            gAbout->body,
            WS_VISIBLE | WS_CHILD | ES_MULTILINE | ES_AUTOVSCROLL | ES_READONLY | WS_VSCROLL | ES_LEFT | ES_MULTILINE,
            16, 16, 560, 270,
            hwnd, NULL, hInst, NULL);

            hAboutLink = CreateWindowW(
                L"BUTTON",
                gAbout->link,
                WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
                16, 302, 270, 34,
                hwnd, (HMENU)5001, hInst, NULL);

            hAboutLicense = CreateWindowW(
                L"BUTTON",
                L"License (GPLv2)",
                WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
                292, 302, 170, 34,
                hwnd, (HMENU)5003, hInst, NULL);

                
        SetFont(hAboutText, hFontBody);
        SetFont(hAboutLink, hFontHdr);
        SetFont(hAboutLicense, hFontHdr);

        return 0;
    }

    case WM_COMMAND: {
        WORD id = LOWORD(wParam);
        if (id == 5003) {
            ShowLicenseWindow(hwnd);
        }
        if (id == 5001) {
            ShellExecuteW(hwnd, L"open", gAboutUrl, NULL, NULL, SW_SHOWNORMAL);
        } else if (id == 5002) {
            DestroyWindow(hwnd);
        }
        return 0;
    }

    case WM_CLOSE:
        DestroyWindow(hwnd);
        return 0;

    case WM_DESTROY:
        hAboutWnd = NULL;
        hAboutText = NULL;
        hAboutLink = NULL;
        hAboutLicense = NULL;
        if (IsWindow(hMain)) EnableWindow(hMain, TRUE);
        if (hBlueBrush) DeleteObject(hBlueBrush);
        SetForegroundWindow(hMain);
        return 0;
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

static void ShowAboutWindow() {
    if (hAboutWnd && IsWindow(hAboutWnd)) {
        ShowWindow(hAboutWnd, SW_SHOW);
        SetForegroundWindow(hAboutWnd);
        return;
    }

    RECT rc = { 0, 0, 610, 390 };
    AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX, FALSE);

    int w = rc.right - rc.left;
    int h = rc.bottom - rc.top;
    int x = (GetSystemMetrics(SM_CXSCREEN) - w) / 2;
    int y = (GetSystemMetrics(SM_CYSCREEN) - h) / 2;

    EnableWindow(hMain, FALSE);

    hAboutWnd = CreateWindowExW(
        WS_EX_DLGMODALFRAME,
        L"OfficeInstallerAbout",
        gAbout->title,
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
        x, y, w, h,
        hMain, NULL, hInst, NULL);

    if (!hAboutWnd) {
        EnableWindow(hMain, TRUE);
        return;
    }

    ShowWindow(hAboutWnd, SW_SHOW);
    UpdateWindow(hAboutWnd);
}
static void SetState(AppState s) {
    gState = s;
    ShowMainCtrls(s == ST_MAIN);
    ShowDoneCtrls(s == ST_DONE);
    if (s == ST_LOADING) SetTimer(hMain, TIMER_SPIN, 80, NULL);
    else                 KillTimer(hMain, TIMER_SPIN);
    InvalidateRect(hMain, NULL, TRUE);
    UpdateWindow(hMain);
}

static bool CopyOdtTo(const std::wstring& destPath) {
    wchar_t cwd[MAX_PATH];
    if (!GetCurrentDirectoryW(MAX_PATH, cwd)) return false;
    std::wstring packagesPath = std::wstring(cwd) + L"\\packages";
    DWORD attr = GetFileAttributesW(packagesPath.c_str());
    if (attr == INVALID_FILE_ATTRIBUTES || !(attr & FILE_ATTRIBUTE_DIRECTORY)) {
        gInfoKind = INFO_MISSING_PACKAGES;
        UpdateInfoText();
        return false;
    }

    std::wstring srcOdt = packagesPath + L"\\odt.exe";
    attr = GetFileAttributesW(srcOdt.c_str());
    if (attr == INVALID_FILE_ATTRIBUTES) {
        gInfoKind = INFO_MISSING_ODT;
        UpdateInfoText();
        return false;
    }

    if (!CopyFileW(srcOdt.c_str(), destPath.c_str(), FALSE)) {
        gInfoKind = INFO_NONE; // copy error, no specific info kind for permission
        return false;
    }
    return true;
}

static bool WriteConfig(const std::wstring& path,
    const std::wstring& arch, const std::wstring& channel,
    const std::wstring& product, const std::wstring& lang)
{
    HRSRC hR = FindResourceW(hInst, MAKEINTRESOURCEW(IDR_MY_XML), (LPCWSTR)RT_RCDATA);
    if (!hR) return false;
    HGLOBAL hG = LoadResource(hInst, hR);
    DWORD sz   = SizeofResource(hInst, hR);
    std::string xml((const char*)LockResource(hG), sz);

    ReplaceAll(xml, "{ARCH}",    WideToUtf8(arch));
    ReplaceAll(xml, "{CHANNEL}", WideToUtf8(channel));
    ReplaceAll(xml, "{PRODUCT}",  WideToUtf8(product));
    ReplaceAll(xml, "{LANG}",     WideToUtf8(lang));

    std::ofstream f(path.c_str());
    if (!f) return false;
    f << xml;
    return true;
}

static void BrowseForFolder() {
    IFileOpenDialog* pDlg = NULL;
    if (FAILED(CoCreateInstance(CLSID_FileOpenDialog, NULL,
        CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&pDlg)))) return;
    DWORD opts = 0;
    pDlg->GetOptions(&opts);
    pDlg->SetOptions(opts | FOS_PICKFOLDERS | FOS_PATHMUSTEXIST);
    pDlg->SetTitle(gUi->selectFolderTitle);

    if (SUCCEEDED(pDlg->Show(hMain))) {
        IShellItem* pItem = NULL;
        if (SUCCEEDED(pDlg->GetResult(&pItem))) {
            PWSTR pPath = NULL;
            if (SUCCEEDED(pItem->GetDisplayName(SIGDN_FILESYSPATH, &pPath))) {
                SetWindowTextW(hPathEdit, pPath);
                if (HasEnoughFreeSpace(pPath)) {
                    gInfoKind = INFO_NONE;
                    UpdateInfoText();
                }
                CoTaskMemFree(pPath);
            }
            pItem->Release();
        }
    }
    pDlg->Release();
}

static DWORD WINAPI WaitThread(LPVOID) {
    WaitForSingleObject(gPI.hProcess, INFINITE);
    CloseHandle(gPI.hProcess);
    CloseHandle(gPI.hThread);
    ZeroMemory(&gPI, sizeof(gPI));
    PostMessage(hMain, WM_INSTALL_DONE, 0, 0);
    return 0;
}

static bool DoInstall(bool fromStartup = false) {
    int chanIdx = (int)SendMessage(hComboChannel, CB_GETCURSEL, 0, 0);
    int prodIdx = (int)SendMessage(hComboProduct, CB_GETCURSEL, 0, 0);
    int archIdx = (int)SendMessage(hComboArch,    CB_GETCURSEL, 0, 0);
    int langIdx = (int)SendMessage(hComboLang,    CB_GETCURSEL, 0, 0);

    if (chanIdx < 0 || prodIdx < 0 || archIdx < 0 || langIdx < 0) {
        if (!fromStartup)
            MessageBoxW(hMain, gUi->selectAllOptions, gUi->title, MB_OK | MB_ICONWARNING);
        return false;
    }

    const wchar_t* channelId = g_channels[chanIdx].id;
    const wchar_t* productId = g_channels[chanIdx].prods[prodIdx].id;
    const wchar_t* arch      = (archIdx == 0) ? L"64" : L"32";
    const wchar_t* langCode  = g_langs[langIdx].code;

    GetWindowTextW(hPathEdit, gInstallPath, MAX_PATH);
    if (wcslen(gInstallPath) == 0) {
        if (!fromStartup)
            MessageBoxW(hMain, gUi->specifyInstallPath, gUi->title, MB_OK | MB_ICONWARNING);
        return false;
    }

    if (!HasEnoughFreeSpace(gInstallPath)) {
        gInfoKind = INFO_LOW_SPACE;
        UpdateInfoText();
        if (!fromStartup)
            MessageBoxW(hMain, gUi->insufficientSpace, gUi->title, MB_OK | MB_ICONWARNING);
        return false;
    }

    CreateDirectoryW(gInstallPath, NULL);

    std::wstring installDir(gInstallPath);
    std::wstring odtPath   = installDir + L"\\odt.exe";
    std::wstring xmlPath   = installDir + L"\\config.xml";

    if (!CopyOdtTo(odtPath)) {
        if (!fromStartup)
            MessageBoxW(hMain, gUi->failedCopyOdt, gUi->title, MB_OK | MB_ICONERROR);
        return false;
    }
    if (!WriteConfig(xmlPath, arch, channelId, productId, langCode)) {
        if (!fromStartup)
            MessageBoxW(hMain, gUi->failedWriteXml, gUi->title, MB_OK | MB_ICONERROR);
        return false;
    }

    std::wstring cmd = L"\"" + odtPath + L"\" /configure \"" + xmlPath + L"\"";
    std::vector<wchar_t> cmdBuf(cmd.begin(), cmd.end());
    cmdBuf.push_back(L'\0');

    STARTUPINFOW si = {};
    si.cb = sizeof(si);
    ZeroMemory(&gPI, sizeof(gPI));

    if (!CreateProcessW(NULL, cmdBuf.data(), NULL, NULL, FALSE, 0,
        NULL, gInstallPath, &si, &gPI))
    {
        if (!fromStartup)
            MessageBoxW(hMain, gUi->failedStartInstaller, gUi->title, MB_OK | MB_ICONERROR);
        return false;
    }

    SetState(ST_LOADING);

    HANDLE hThread = CreateThread(NULL, 0, WaitThread, NULL, 0, NULL);
    if (hThread) CloseHandle(hThread);

    return true;
}

static void ApplyStartupPresetToUi() {
    bool hasAny = gStartup.hasChannel || gStartup.hasProduct || gStartup.hasArch || gStartup.hasLang || gStartup.hasPath;
    if (!hasAny) {
        ApplyUiLanguage(L"en-us");
        UpdateImage(0, 0);
        return;
    }

    int chanIdx = -1;
    if (gStartup.hasChannel) {
        chanIdx = FindChannelIndexById(gStartup.channelId);
    }
    if (chanIdx < 0 && gStartup.hasProduct) {
        chanIdx = FindChannelByProductId(gStartup.productId);
    }
    if (chanIdx < 0) chanIdx = 0;

    SendMessage(hComboChannel, CB_SETCURSEL, chanIdx, 0);
    PopulateProducts(chanIdx, gStartup.hasProduct ? gStartup.productId.c_str() : NULL);

    if (gStartup.hasProduct) {
        int p = FindProductIndexById(chanIdx, gStartup.productId);
        if (p >= 0) SendMessage(hComboProduct, CB_SETCURSEL, p, 0);
        else SendMessage(hComboProduct, CB_SETCURSEL, (WPARAM)-1, 0);
    } else {
        SendMessage(hComboProduct, CB_SETCURSEL, (WPARAM)-1, 0);
    }

    if (gStartup.hasArch) {
        int archIdx = ParseArchIndex(gStartup.arch);
        if (archIdx >= 0) SendMessage(hComboArch, CB_SETCURSEL, archIdx, 0);
        else SendMessage(hComboArch, CB_SETCURSEL, (WPARAM)-1, 0);
    } else {
        SendMessage(hComboArch, CB_SETCURSEL, (WPARAM)-1, 0);
    }

    if (gStartup.hasLang) {
        int langIdx = FindLangIndexByCode(gStartup.langCode);
        if (langIdx >= 0) {
            SendMessage(hComboLang, CB_SETCURSEL, langIdx, 0);
            ApplyUiLanguage(g_langs[langIdx].code);
        } else {
            SendMessage(hComboLang, CB_SETCURSEL, (WPARAM)-1, 0);
            ApplyUiLanguage(L"en-us");
        }
    } else {
        SendMessage(hComboLang, CB_SETCURSEL, (WPARAM)-1, 0);
        ApplyUiLanguage(L"en-us");
    }

    if (gStartup.hasPath) {
        SetWindowTextW(hPathEdit, gStartup.installPath.c_str());
    } else {
        SetWindowTextW(hPathEdit, L"");
    }

    UpdateImage(chanIdx, (int)SendMessage(hComboProduct, CB_GETCURSEL, 0, 0));
    UpdateAboutTextsNow();
}

static void DrawSpinner(HDC hdc, int cx, int cy) {
    const int N = 8, R = 28, DR = 5;
    for (int i = 0; i < N; i++) {
        double angle = i * 2.0 * M_PI / N - M_PI / 2.0;
        int x = cx + (int)(R * cos(angle));
        int y = cy + (int)(R * sin(angle));
        int dist = (gAnimFrame - i + N) % N;
        int gray = 50 + dist * 26;
        if (gray > 230) gray = 230;
        HBRUSH br = CreateSolidBrush(RGB(gray, gray, gray));
        HBRUSH old = (HBRUSH)SelectObject(hdc, br);
        SelectObject(hdc, GetStockObject(NULL_PEN));
        Ellipse(hdc, x - DR, y - DR, x + DR, y + DR);
        SelectObject(hdc, old);
        DeleteObject(br);
    }
}

static void GenerateAutorun() {
    int chanIdx = (int)SendMessage(hComboChannel, CB_GETCURSEL, 0, 0);
    int prodIdx = (int)SendMessage(hComboProduct, CB_GETCURSEL, 0, 0);
    int archIdx = (int)SendMessage(hComboArch,    CB_GETCURSEL, 0, 0);
    int langIdx = (int)SendMessage(hComboLang,    CB_GETCURSEL, 0, 0);
    if (chanIdx < 0 || prodIdx < 0 || archIdx < 0 || langIdx < 0) {
        MessageBoxW(hMain, gUi->selectAllOptions, gUi->title, MB_OK | MB_ICONWARNING);
        return;
    }

    wchar_t path[MAX_PATH];
    GetWindowTextW(hPathEdit, path, MAX_PATH);
    if (wcslen(path) == 0) {
        MessageBoxW(hMain, gUi->specifyInstallPath, gUi->title, MB_OK | MB_ICONWARNING);
        return;
    }

    const wchar_t* channelId = g_channels[chanIdx].id;
    const wchar_t* productId = g_channels[chanIdx].prods[prodIdx].id;
    const wchar_t* arch      = (archIdx == 0) ? L"64" : L"32";
    const wchar_t* langCode  = g_langs[langIdx].code;

    wchar_t cwd[MAX_PATH];
    if (!GetCurrentDirectoryW(MAX_PATH, cwd)) return;

    std::wstring autorunPath = std::wstring(cwd) + L"\\autorun.inf";

    std::wofstream f(autorunPath.c_str(), std::ios::out);
    if (!f) {
        MessageBoxW(hMain, gUi->failedWriteAutorun, gUi->title, MB_OK | MB_ICONERROR);
        return;
    }

    f << L"[autorun]\n";
    f << L"label=Microsoft Office Setup\n";
    f << L"icon=Setup.exe,0\n";
    f << L"action=Install Microsoft Office\n";
    f << L"channel=" << channelId << L"\n";
    f << L"product=" << productId << L"\n";
    f << L"arch=" << arch << L"\n";
    f << L"lang=" << langCode << L"\n";
    f << L"path=" << path << L"\n";
    f.close();

    MessageBoxW(hMain, L"autorun.inf generated successfully.", gUi->title, MB_OK | MB_ICONINFORMATION);
}

static bool RunCommandAndCaptureOutput(const std::wstring& cmd, std::string& output) {
    SECURITY_ATTRIBUTES sa = { sizeof(sa), NULL, TRUE };
    HANDLE hReadPipe = NULL, hWritePipe = NULL;
    if (!CreatePipe(&hReadPipe, &hWritePipe, &sa, 0)) return false;

    STARTUPINFOW si = { sizeof(si) };
    si.dwFlags = STARTF_USESTDHANDLES;
    si.hStdOutput = hWritePipe;
    si.hStdError = hWritePipe;
    si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    PROCESS_INFORMATION pi = {};

    std::vector<wchar_t> cmdBuf(cmd.begin(), cmd.end());
    cmdBuf.push_back(L'\0');

    if (!CreateProcessW(NULL, cmdBuf.data(), NULL, NULL, TRUE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi)) {
        CloseHandle(hReadPipe);
        CloseHandle(hWritePipe);
        return false;
    }

    CloseHandle(hWritePipe);
    WaitForSingleObject(pi.hProcess, INFINITE);

    DWORD avail = 0;
    if (PeekNamedPipe(hReadPipe, NULL, 0, NULL, &avail, NULL) && avail > 0) {
        output.resize(avail);
        DWORD read = 0;
        ReadFile(hReadPipe, &output[0], avail, &read, NULL);
        output.resize(read);
    }

    CloseHandle(hReadPipe);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

struct KeyEntry {
    std::wstring path;
    std::wstring key;
};

static std::vector<KeyEntry> gKeysToRemove;
static volatile bool gCancelRemove = false;
static volatile bool gRemoveRunning = false;
static HWND hRemoveWnd = NULL;
static HWND hProgressBar = NULL;
static HWND hRemoveStatus = NULL;
static HWND hRemoveButton = NULL;

static void UpdateRemoveUI(int progress, const wchar_t* status) {
    PostMessage(hRemoveWnd, WM_REMOVE_UPDATE, (WPARAM)progress, (LPARAM)status);
}
static void FinishRemoveUI(int result, int installations, int keysRemoved, const std::wstring& paths) {
    PostMessage(hRemoveWnd, WM_REMOVE_FINISH, (WPARAM)result, (LPARAM)new std::pair<int, int>(installations, keysRemoved));
}

static DWORD WINAPI RemoveKeysThread(LPVOID) {
    gRemoveRunning = true;
    gCancelRemove = false;

    std::vector<std::pair<std::wstring, std::wstring>> toRemove;
    int removed = 0;

    std::vector<std::wstring> foundPaths;
    int total;

    UpdateRemoveUI(0, gUi->calculating);

    std::vector<std::wstring> officePaths = {
        L"C:\\Program Files\\Microsoft Office\\root\\Office16",
        L"C:\\Program Files (x86)\\Microsoft Office\\root\\Office16",
        L"C:\\Program Files\\Microsoft Office\\Office15",
        L"C:\\Program Files (x86)\\Microsoft Office\\Office15",
        L"C:\\Program Files\\Microsoft Office\\Office14",
        L"C:\\Program Files (x86)\\Microsoft Office\\Office14",
        L"C:\\Program Files\\Microsoft Office\\Office12",
        L"C:\\Program Files (x86)\\Microsoft Office\\Office12",
    };

    for (const auto& p : officePaths) {
        if (gCancelRemove) goto cancel;
        DWORD attr = GetFileAttributesW(p.c_str());
        if (attr == INVALID_FILE_ATTRIBUTES || !(attr & FILE_ATTRIBUTE_DIRECTORY))
            continue;

        foundPaths.push_back(p);
        std::wstring ospp = p + L"\\ospp.vbs";
        attr = GetFileAttributesW(ospp.c_str());
        if (attr == INVALID_FILE_ATTRIBUTES)
            continue;

        std::wstring cmd = L"cscript \"" + ospp + L"\" /dstatus";
        std::string output;
        if (!RunCommandAndCaptureOutput(cmd, output))
            continue;

        std::istringstream iss(output);
        std::string line;
        bool inBlock = false;
        std::string lastKey;
        while (std::getline(iss, line)) {
            if (gCancelRemove) goto cancel;
            if (line.find("Last 5 characters of installed product key:") != std::string::npos) {
                size_t pos = line.find(':');
                if (pos != std::string::npos) {
                    std::string key = line.substr(pos + 1);
                    key.erase(0, key.find_first_not_of(" \t\r\n"));
                    key.erase(key.find_last_not_of(" \t\r\n") + 1);
                    if (!key.empty()) {
                        std::wstring wkey = Utf8OrAnsiToWide(key);
                        toRemove.push_back({ p, wkey });
                    }
                }
            }
        }
    }

    total = (int)toRemove.size();

    if (toRemove.empty()) {
        FinishRemoveUI(0, (int)foundPaths.size(), 0, L"");
        gRemoveRunning = false;
        return 0;
    }

    for (size_t i = 0; i < toRemove.size(); ++i) {
        if (gCancelRemove) break;
        const auto& entry = toRemove[i];
        std::wstring ospp = entry.first + L"\\ospp.vbs";
        std::wstring cmd = L"cscript \"" + ospp + L"\" /unpkey:" + entry.second;
        std::string output;
        RunCommandAndCaptureOutput(cmd, output);
        removed++;
        int progress = (int)((double)removed / total * 100);
        wchar_t status[256];
        swprintf(status, 256, gUi->removingKeyStatus, entry.second.c_str());
        UpdateRemoveUI(progress, status);
    }

    if (gCancelRemove) {
cancel:
        FinishRemoveUI(2, (int)foundPaths.size(), removed, L"");
    } else {
        FinishRemoveUI(1, (int)foundPaths.size(), removed, L"");
    }
    gRemoveRunning = false;
    return 0;
}

static void StartRemoveKeys() {
    if (gRemoveRunning) return;
    HANDLE hThread = CreateThread(NULL, 0, RemoveKeysThread, NULL, 0, NULL);
    if (hThread) CloseHandle(hThread);
}

static LRESULT CALLBACK RemoveKeysWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
    case WM_CREATE: {
        SetWindowTextW(hwnd, gUi->removeKeysWindowTitle);

        HFONT hFont = CreateFontW(-12, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
            DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
            CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_SWISS, L"Segoe UI");

        hRemoveStatus = CreateWindowW(L"STATIC", L"", WS_VISIBLE | WS_CHILD | SS_LEFT,
            10, 10, 460, 30, hwnd, NULL, hInst, NULL);
        SetFont(hRemoveStatus, hFont);

        hProgressBar = CreateWindowW(PROGRESS_CLASSW, NULL, WS_VISIBLE | WS_CHILD | PBS_SMOOTH,
            10, 50, 460, 30, hwnd, NULL, hInst, NULL);
        SendMessage(hProgressBar, PBM_SETRANGE, 0, MAKELPARAM(0, 100));

        hRemoveButton = CreateWindowW(L"BUTTON", gUi->cancel, WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
            10, 100, 100, 30, hwnd, (HMENU)1, hInst, NULL);
        SetFont(hRemoveButton, hFont);

        StartRemoveKeys();
        return 0;
    }

    case WM_REMOVE_UPDATE: {
        int progress = (int)wParam;
        const wchar_t* status = (const wchar_t*)lParam;
        SendMessage(hProgressBar, PBM_SETPOS, progress, 0);
        if (status) SetWindowTextW(hRemoveStatus, status);
        return 0;
    }

    case WM_REMOVE_FINISH: {
        int result = (int)wParam;
        auto* data = (std::pair<int, int>*)lParam;
        int installations = data->first;
        int keysRemoved = data->second;
        delete data;

        wchar_t msg[1024];
        if (result == 0) {
            if (installations == 0)
                swprintf(msg, 1024, gUi->noOfficeFoundMsg);
            else
                swprintf(msg, 1024, gUi->noKeysFoundMsg, installations);
        } else if (result == 1) {
            std::wstring pathsStr;
            if (installations > 2) {
                pathsStr = L"\n\nInstallations found:\n";
                // we don't have the list of paths here, but we can store it in a global
            }
            swprintf(msg, 1024, gUi->keysRemovedMsg, keysRemoved, installations, pathsStr.c_str());
        } else {
            swprintf(msg, 1024, L"Operation cancelled. %d keys removed.", keysRemoved);
        }
        MessageBoxW(hwnd, msg, gUi->removeKeysWindowTitle, MB_OK | MB_ICONINFORMATION);
        SetWindowTextW(hRemoveButton, gUi->retry);
        EnableWindow(hRemoveButton, TRUE);
        return 0;
    }

    case WM_COMMAND: {
        WORD id = LOWORD(wParam);
        if (id == 1) {
            if (gRemoveRunning) {
                gCancelRemove = true;
                EnableWindow(hRemoveButton, FALSE);
                SetTimer(hwnd, 2, 2000, NULL);
            } else {
                StartRemoveKeys();
                SetWindowTextW(hRemoveButton, gUi->cancel);
                EnableWindow(hRemoveButton, TRUE);
            }
        }
        return 0;
    }

    case WM_TIMER: {
        if (wParam == 2) {
            KillTimer(hwnd, 2);
            SetWindowTextW(hRemoveButton, gUi->retry);
            EnableWindow(hRemoveButton, TRUE);
        }
        return 0;
    }

    case WM_CLOSE:
        if (gRemoveRunning) {
            if (MessageBoxW(hwnd, L"Operation in progress. Are you sure you want to close?", L"Confirm", MB_YESNO | MB_ICONQUESTION) == IDNO)
                return 0;
            gCancelRemove = true;
        }
        DestroyWindow(hwnd);
        return 0;

    case WM_DESTROY:
        hRemoveWnd = NULL;
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hwnd, msg, wParam, lParam);
}

static void ShowRemoveKeysWindow() {
    if (hRemoveWnd && IsWindow(hRemoveWnd)) {
        SetForegroundWindow(hRemoveWnd);
        return;
    }

    HINSTANCE hInstSave = hInst;
    WNDCLASSEXW wc = {};
    wc.cbSize = sizeof(wc);
    wc.lpfnWndProc = RemoveKeysWndProc;
    wc.hInstance = hInstSave;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wc.lpszClassName = L"OfficeRemoveKeysWindow";
    RegisterClassExW(&wc);

    int x = (GetSystemMetrics(SM_CXSCREEN) - 500) / 2;
    int y = (GetSystemMetrics(SM_CYSCREEN) - 200) / 2;
    hRemoveWnd = CreateWindowW(L"OfficeRemoveKeysWindow", gUi->removeKeysWindowTitle,
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
        x, y, 500, 180, NULL, NULL, hInstSave, NULL);
    if (hRemoveWnd) {
        ShowWindow(hRemoveWnd, SW_SHOW);
        UpdateWindow(hRemoveWnd);
    }
}

static void ConfirmRemoveKeys() {
    int resp = MessageBoxW(hMain, gUi->confirmRemoveKeysMsg, gUi->confirmRemoveKeysTitle, MB_YESNO | MB_ICONWARNING);
    if (resp == IDYES) {
        SHELLEXECUTEINFOW sei = { sizeof(sei) };
        wchar_t exePath[MAX_PATH];
        GetModuleFileNameW(NULL, exePath, MAX_PATH);
        sei.lpVerb = L"runas";
        sei.lpFile = exePath;
        sei.lpParameters = L"/removekeys";
        sei.nShow = SW_SHOWNORMAL;
        if (!ShellExecuteExW(&sei)) {
            MessageBoxW(hMain, L"Failed to elevate. Make sure you have administrator privileges.", gUi->title, MB_OK | MB_ICONERROR);
        }
    }
}

static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
#define TRACK(h) gMainCtrls[gNMainCtrls++] = (h)
#define LBL(txt, y) CreateWindowW(L"STATIC", txt, \
    WS_VISIBLE|WS_CHILD|SS_LEFT, 15, (y)+2, 115, 18, hwnd, NULL, hInst, NULL)
#define CMB(id, y, w) CreateWindowW(L"COMBOBOX", L"", \
    WS_VISIBLE|WS_CHILD|CBS_DROPDOWNLIST|WS_VSCROLL, \
    135, (y), (w), 220, hwnd, (HMENU)(id), hInst, NULL)

    switch (msg) {
    case WM_CREATE: {
        hMain     = hwnd;
        hHdrBrush = CreateSolidBrush(CLR_HDR);
        hBlueBrush = CreateSolidBrush(RGB(0, 102, 204));

        HICON hIco = LoadIconW(hInst, MAKEINTRESOURCEW(IDI_APP_ICON));
        if (hIco) {
            SendMessageW(hwnd, WM_SETICON, ICON_BIG,   (LPARAM)hIco);
            SendMessageW(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)hIco);
        }

        if (!gWicFactory) {
            CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
                IID_PPV_ARGS(&gWicFactory));
        }

        {
            HRSRC hR = FindResourceW(hInst, MAKEINTRESOURCEW(IDR_FONT_SEGOE), (LPCWSTR)RT_RCDATA);
            if (hR) {
                HGLOBAL hG = LoadResource(hInst, hR);
                DWORD nF = 0;
                hFontMem = AddFontMemResourceEx(LockResource(hG),
                    SizeofResource(hInst, hR), NULL, &nF);
            }
        }

        auto MakeFont = [](int size, int weight, const wchar_t* face) -> HFONT {
            HFONT f = CreateFontW(-size, 0, 0, 0, weight, 0, 0, 0,
                DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
                CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_SWISS, face);
            return f ? f : (HFONT)GetStockObject(DEFAULT_GUI_FONT);
        };
        hFontBody = MakeFont(13, FW_LIGHT,    L"Segoe UI Light");
        hFontHdr  = MakeFont(14, FW_NORMAL,   L"Segoe UI");
        hFontBig  = MakeFont(17, FW_SEMIBOLD, L"Segoe UI");
        hFontSmall = MakeFont(11, FW_NORMAL, L"Segoe UI");

        hBtnClose = CreateWindowW(L"STATIC", L"✕",
            WS_VISIBLE|WS_CHILD|SS_CENTER|SS_NOTIFY,
            WIN_W - 34, 9, 22, 20, hwnd, (HMENU)ID_CLOSE, hInst, NULL);
        SetFont(hBtnClose, hFontHdr);

        hBtnInfo = CreateWindowW(L"BUTTON", L"",
            WS_VISIBLE | WS_CHILD | BS_BITMAP | BS_FLAT,
            WIN_W - 86, 9, 22, 20, hwnd, (HMENU)ID_BTN_INFO, hInst, NULL);
        hInfoBmp = LoadBitmapFromResource(IDB_IMG_INFO);
        if (hInfoBmp) SendMessageW(hBtnInfo, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hInfoBmp);

        hHdrTitle = CreateWindowW(L"STATIC", L"Microsoft Office Installer",
            WS_VISIBLE|WS_CHILD|SS_LEFT,
            14, 10, 340, 18, hwnd, NULL, hInst, NULL);
        SetFont(hHdrTitle, hFontHdr);

        hStaticImg = CreateWindowW(L"STATIC", L"",
            WS_VISIBLE|WS_CHILD|SS_BITMAP,
            IMG_X, IMG_Y, IMG_W, IMG_H, hwnd, NULL, hInst, NULL);
        UpdateImage(0, 0);

        int y = CTRLS_Y;
        hLblChannel = LBL(L"Channel:", y);
        hComboChannel = CMB(ID_CMB_CHANNEL, y, WIN_W - 135 - 15);
        SetFont(hLblChannel, hFontBody);
        SetFont(hComboChannel, hFontBody);
        for (int i = 0; i < N_CHANNELS; i++)
            SendMessageW(hComboChannel, CB_ADDSTRING, 0, (LPARAM)g_channels[i].label);
        SendMessage(hComboChannel, CB_SETCURSEL, 0, 0);
        TRACK(hLblChannel); TRACK(hComboChannel);

        y += 33;
        hLblProduct = LBL(L"Product:", y);
        hComboProduct = CMB(ID_CMB_PRODUCT, y, WIN_W - 135 - 15);
        SetFont(hLblProduct, hFontBody);
        SetFont(hComboProduct, hFontBody);
        PopulateProducts(0);
        TRACK(hLblProduct); TRACK(hComboProduct);

        y += 33;
        hLblArch = LBL(L"Architecture:", y);
        hComboArch = CMB(ID_CMB_ARCH, y, 130);
        SetFont(hLblArch, hFontBody);
        SetFont(hComboArch, hFontBody);
        SendMessageW(hComboArch, CB_ADDSTRING, 0, (LPARAM)L"64-bit (recommended)");
        SendMessageW(hComboArch, CB_ADDSTRING, 0, (LPARAM)L"32-bit");
        SendMessage(hComboArch, CB_SETCURSEL, 0, 0);
        TRACK(hLblArch); TRACK(hComboArch);

        y += 33;
        hLblLang = LBL(L"Language:", y);
        hComboLang = CMB(ID_CMB_LANG, y, WIN_W - 135 - 15);
        SetFont(hLblLang, hFontBody);
        SetFont(hComboLang, hFontBody);
        for (int i = 0; i < N_LANGS; i++)
            SendMessageW(hComboLang, CB_ADDSTRING, 0, (LPARAM)g_langs[i].label);
        SendMessage(hComboLang, CB_SETCURSEL, 0, 0);
        TRACK(hLblLang); TRACK(hComboLang);

        y += 33;
        hLblPath = LBL(L"Install to:", y);
        hPathEdit = CreateWindowW(L"EDIT", L"C:\\Temp",
            WS_VISIBLE|WS_CHILD|WS_BORDER|ES_AUTOHSCROLL,
            135, y, WIN_W - 135 - 70, 24, hwnd, (HMENU)ID_PATH_EDIT, hInst, NULL);
        hBtnBrowse = CreateWindowW(L"BUTTON", L"Browse",
            WS_VISIBLE|WS_CHILD|BS_PUSHBUTTON,
            WIN_W - 60, y, 50, 24, hwnd, (HMENU)ID_BTN_BROWSE, hInst, NULL);
        SetFont(hLblPath, hFontBody);
        SetFont(hPathEdit, hFontBody);
        SetFont(hBtnBrowse, hFontBody);
        TRACK(hLblPath); TRACK(hPathEdit); TRACK(hBtnBrowse);

        hLblInfo = CreateWindowW(L"STATIC", L"",
            WS_CHILD | SS_LEFT,
            135, y + 30, WIN_W - 150, 30, hwnd, NULL, hInst, NULL);
        SetFont(hLblInfo, hFontBody);
        TRACK(hLblInfo);

        y += 66;
        hBtnInstall = CreateWindowW(L"BUTTON", L"Install",
            WS_VISIBLE|WS_CHILD|BS_OWNERDRAW,
            WIN_W - 165, WIN_H - 68, 155, 56, hwnd, (HMENU)ID_BTN_INSTALL, hInst, NULL);
        SetFont(hBtnInstall, hFontBig);
        TRACK(hBtnInstall);

        hBtnGenerateAutorun = CreateWindowW(L"BUTTON", L"Generate autorun.inf",
            WS_VISIBLE|WS_CHILD|BS_PUSHBUTTON,
            20, WIN_H - 100, 220, 28, hwnd, (HMENU)ID_BTN_AUTORUN, hInst, NULL);
        SetFont(hBtnGenerateAutorun, hFontSmall);
        TRACK(hBtnGenerateAutorun);

        y += 50;
        hBtnRemoveKeys = CreateWindowW(L"BUTTON", L"Remove all Office keys",
            WS_VISIBLE|WS_CHILD|BS_PUSHBUTTON,
            20, WIN_H - 60, 220, 28, hwnd, (HMENU)ID_BTN_REMOVEKEYS, hInst, NULL);
        SetFont(hBtnRemoveKeys, hFontSmall);
        TRACK(hBtnRemoveKeys);

        int dy = IMG_Y + IMG_H + 30;
        hLblStatus = CreateWindowW(L"STATIC",
            L"Microsoft installer finished successfully.",
            WS_CHILD|SS_CENTER|SS_CENTERIMAGE,
            20, dy, WIN_W - 40, 70, hwnd, NULL, hInst, NULL);
        SetFont(hLblStatus, hFontBig);

        hBtnCloseApp = CreateWindowW(L"BUTTON", L"Close app",
            WS_CHILD|BS_DEFPUSHBUTTON,
            WIN_W / 2 - 140, dy + 80, 125, 38, hwnd, (HMENU)ID_BTN_CLOSE_APP, hInst, NULL);
        hBtnMenu = CreateWindowW(L"BUTTON", L"Main Menu",
            WS_CHILD|BS_PUSHBUTTON,
            WIN_W / 2 + 15, dy + 80, 125, 38, hwnd, (HMENU)ID_BTN_MENU, hInst, NULL);
        SetFont(hBtnCloseApp, hFontHdr);
        SetFont(hBtnMenu,     hFontHdr);

        break;
    }

    case WM_NCHITTEST: {
        LRESULT hit = DefWindowProc(hwnd, msg, wParam, lParam);
        if (hit == HTCLIENT) {
            POINT pt = { GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam) };
            ScreenToClient(hwnd, &pt);
            if (pt.y < IMG_Y + IMG_H + 10) return HTCAPTION;
        }
        return hit;
    }

    case WM_CTLCOLORSTATIC: {
        HDC hdc  = (HDC)wParam;
        HWND hCtrl = (HWND)lParam;
        SetBkMode(hdc, TRANSPARENT);

        if (hCtrl == hBtnClose) {
            SetTextColor(hdc, RGB(255, 255, 255));
            return (INT_PTR)hHdrBrush;
        }

        RECT r; GetWindowRect(hCtrl, &r);
        POINT p = { r.left, r.top };
        ScreenToClient(hwnd, &p);
        if (p.y < HDR_H) {
            SetTextColor(hdc, RGB(255, 255, 255));
            return (INT_PTR)hHdrBrush;
        }

        if (hCtrl == hLblStatus) {
            SetTextColor(hdc, RGB(25, 25, 25));
            return (INT_PTR)GetStockObject(WHITE_BRUSH);
        }

        if (hCtrl == hLblInfo) {
            SetTextColor(hdc, RGB(180, 0, 0));
            return (INT_PTR)GetStockObject(WHITE_BRUSH);
        }

        SetTextColor(hdc, RGB(25, 25, 25));
        return (INT_PTR)GetStockObject(WHITE_BRUSH);
    }

    case WM_CTLCOLOREDIT: {
        HDC hdc = (HDC)wParam;
        SetBkColor(hdc, RGB(255, 255, 255));
        return (INT_PTR)GetStockObject(WHITE_BRUSH);
    }

    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        RECT rHdr = { 0, 0, WIN_W, HDR_H };
        FillRect(hdc, &rHdr, hHdrBrush);

        RECT rBody = { 0, HDR_H, WIN_W, WIN_H };
        FillRect(hdc, &rBody, (HBRUSH)GetStockObject(WHITE_BRUSH));

        HPEN hPen = CreatePen(PS_SOLID, 1, RGB(0, 80, 170));
        SelectObject(hdc, hPen);
        MoveToEx(hdc, 0, HDR_H, NULL);
        LineTo(hdc, WIN_W, HDR_H);
        DeleteObject(hPen);

        if (gState == ST_LOADING) {
            SetBkMode(hdc, TRANSPARENT);
            SetTextColor(hdc, RGB(80, 80, 80));
            SelectObject(hdc, hFontHdr);
            RECT rTxt = { 0, IMG_Y + IMG_H + 25, WIN_W, IMG_Y + IMG_H + 60 };
            DrawTextW(hdc, gUi->installing, -1, &rTxt,
                DT_CENTER | DT_SINGLELINE | DT_VCENTER);
            DrawSpinner(hdc, WIN_W / 2, IMG_Y + IMG_H + 100);
        }

        EndPaint(hwnd, &ps);
        return 0;
    }

    case WM_TIMER:
        if (wParam == TIMER_SPIN) {
            gAnimFrame = (gAnimFrame + 1) % 8;
            RECT rSpin = { WIN_W / 2 - 45, IMG_Y + IMG_H + 15,
                           WIN_W / 2 + 45, IMG_Y + IMG_H + 145 };
            InvalidateRect(hwnd, &rSpin, TRUE);
        }
        break;

    case WM_INSTALL_DONE:
        ShellExecuteW(NULL, L"explore", gInstallPath, NULL, NULL, SW_SHOW);
        SetWindowTextW(hLblStatus, gUi->done);
        SetState(ST_DONE);
        break;

    case WM_SETCURSOR:
        if ((HWND)wParam == hBtnClose || (HWND)wParam == hBtnInfo) {
            SetCursor(LoadCursor(NULL, IDC_HAND));
            return TRUE;
        }
        break;

    case WM_COMMAND: {
        WORD id  = LOWORD(wParam);
        WORD evt = HIWORD(wParam);

        if (id == ID_CLOSE) DestroyWindow(hwnd);

        if (id == ID_CMB_CHANNEL && evt == CBN_SELCHANGE) {
            int idx = (int)SendMessage(hComboChannel, CB_GETCURSEL, 0, 0);
            if (idx >= 0) {
                PopulateProducts(idx);
                UpdateImage(idx, 0);
            }
        }

        if (id == ID_CMB_PRODUCT && evt == CBN_SELCHANGE) {
            int chanIdx = (int)SendMessage(hComboChannel, CB_GETCURSEL, 0, 0);
            int prodIdx = (int)SendMessage(hComboProduct, CB_GETCURSEL, 0, 0);
            if (chanIdx >= 0 && prodIdx >= 0) {
                UpdateImage(chanIdx, prodIdx);
            }
        }

        if (id == ID_CMB_LANG && evt == CBN_SELCHANGE) {
            int langIdx = (int)SendMessage(hComboLang, CB_GETCURSEL, 0, 0);
            if (langIdx >= 0) {
                ApplyUiLanguage(g_langs[langIdx].code);
            }
        }

        if (id == ID_BTN_BROWSE) BrowseForFolder();
        if (id == ID_BTN_INFO) ShowAboutWindow();
        if (id == ID_BTN_INSTALL) DoInstall();
        if (id == ID_BTN_AUTORUN) GenerateAutorun();
        if (id == ID_BTN_REMOVEKEYS) ConfirmRemoveKeys();
        if (id == ID_BTN_CLOSE_APP) DestroyWindow(hwnd);
        if (id == ID_BTN_MENU) SetState(ST_MAIN);

        break;
    }

    case WM_DRAWITEM: {
        DRAWITEMSTRUCT* dis = (DRAWITEMSTRUCT*)lParam;
        if (dis->CtlID == ID_BTN_INSTALL) {
            HDC hdc   = dis->hDC;
            RECT rc   = dis->rcItem;
            bool pressed = (dis->itemState & ODS_SELECTED) != 0;
            COLORREF bg = pressed ? RGB(0, 90, 175) : RGB(0, 120, 215);
            HBRUSH hBr = CreateSolidBrush(bg);
            FillRect(hdc, &rc, hBr);
            DeleteObject(hBr);
            SetTextColor(hdc, RGB(255, 255, 255));
            SetBkMode(hdc, TRANSPARENT);
            HFONT hOld = (HFONT)SelectObject(hdc, hFontBig);
            wchar_t txt[256] = {};
            GetWindowTextW(dis->hwndItem, txt, 256);
            DrawTextW(hdc, txt, -1, &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
            SelectObject(hdc, hOld);
            if (dis->itemState & ODS_FOCUS) {
                InflateRect(&rc, -4, -4);
                DrawFocusRect(hdc, &rc);
            }
            return TRUE;
        }
        break;
    }

    case WM_DESTROY:
        // inchidem fortat odt.exe daca procesul nostru este on destory
        if (gPI.hProcess) {
            TerminateProcess(gPI.hProcess, 0);
            CloseHandle(gPI.hProcess);
            CloseHandle(gPI.hThread);
            ZeroMemory(&gPI, sizeof(gPI));
        }
        // si dupa facem cleanup as usual
        if (hFontBody != (HFONT)GetStockObject(DEFAULT_GUI_FONT)) DeleteObject(hFontBody);
        if (hFontHdr  != hFontBody) DeleteObject(hFontHdr);
        if (hFontBig  != hFontBody) DeleteObject(hFontBig);
        if (hHdrBrush) DeleteObject(hHdrBrush);
        if (hCurrentImg) DeleteObject(hCurrentImg);
        if (hInfoBmp) DeleteObject(hInfoBmp);
        if (hFontMem) RemoveFontMemResourceEx(hFontMem);
        if (gWicFactory) {
            gWicFactory->Release();
            gWicFactory = NULL;
        }
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
#undef TRACK
#undef LBL
#undef CMB
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR lpCmdLine, int) {
    hInst = hInstance;
    CoInitialize(NULL);
    InitCommonControls();

    LoadStartupPreset();

    CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
        IID_PPV_ARGS(&gWicFactory));

    WNDCLASSEXW wc = {};
    wc.cbSize        = sizeof(wc);
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInstance;
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wc.lpszClassName = L"OfficeInstaller";
    wc.hIcon         = LoadIconW(hInstance, MAKEINTRESOURCEW(IDI_APP_ICON));
    wc.hIconSm       = wc.hIcon;
    RegisterClassExW(&wc);

    WNDCLASSEXW wca = {};
    wca.cbSize        = sizeof(wca);
    wca.lpfnWndProc   = AboutWndProc;
    wca.hInstance     = hInstance;
    wca.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wca.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wca.lpszClassName = L"OfficeInstallerAbout";
    wca.hIcon         = LoadIconW(hInstance, MAKEINTRESOURCEW(IDI_APP_ICON));
    wca.hIconSm       = wca.hIcon;
    RegisterClassExW(&wca);

    wchar_t* wCmdLine = GetCommandLineW();
    if (wCmdLine && wcsstr(wCmdLine, L"/removekeys")) {
        CoInitialize(NULL);
        InitCommonControls();
        ShowRemoveKeysWindow();
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        CoUninitialize();
        return 0;
    }

    if (wCmdLine) {
        const wchar_t* args = wCmdLine;
        if (args[0] == L'"') {
            args = wcschr(args + 1, L'"');
            if (args) args++;
        } else {
            args = wcschr(args, L' ');
        }
        if (args && wcsstr(args, L"show")) {
            ShowLicenseWindow(NULL);
            CoUninitialize();
            return 0;
        }
    }

    int sx = GetSystemMetrics(SM_CXSCREEN);
    int sy = GetSystemMetrics(SM_CYSCREEN);
    int wx = (sx - WIN_W) / 2;
    int wy = (sy - WIN_H) / 2;

    hMain = CreateWindowW(L"OfficeInstaller", L"Office Installer",
        WS_POPUP,
        wx, wy, WIN_W, WIN_H, NULL, NULL, hInstance, NULL);

    ApplyStartupPresetToUi();

    if (gStartup.hasPath) {
        wchar_t pathBuf[MAX_PATH] = {};
        GetWindowTextW(hPathEdit, pathBuf, MAX_PATH);
        gStartup.spaceOk = HasEnoughFreeSpace(pathBuf);
        if (!gStartup.spaceOk) {
            gInfoKind = INFO_LOW_SPACE;
            UpdateInfoText();
        } else {
            gInfoKind = INFO_NONE;
            UpdateInfoText();
        }
    } else {
        gInfoKind = INFO_NONE;
        UpdateInfoText();
    }

    if (gStartup.complete && gStartup.spaceOk) {
        DoInstall(true);
    } else {
        ShowWindow(hMain, SW_SHOW);
        UpdateWindow(hMain);
    }

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    CoUninitialize();
    return 0;
}