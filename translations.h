// translations.h
#pragma once

#include <windows.h>
#include <string>
#include <cwctype>

static const wchar_t* license = LR"(Copyright (C) 2026 Cristea Andreea Mirela, Bucharest, Romania
Email: andreeamirela63@yahoo.com

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

---

                     GNU GENERAL PUBLIC LICENSE
                        Version 2, June 1991

 Copyright (C) 1989, 1991 Free Software Foundation, Inc.,
 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

                            Preamble

  The licenses for most software are designed to take away your
freedom to share and change it.  By contrast, the GNU General Public
License is intended to guarantee your freedom to share and change free
software--to make sure the software is free for all its users.  This
General Public License applies to most of the Free Software
Foundation's software and to any other program whose authors commit to
using it.  (Some other Free Software Foundation software is covered by
the GNU Lesser General Public License instead.)  You can apply it to
your programs, too.

  When we speak of free software, we are referring to freedom, not
price.  Our General Public Licenses are designed to make sure that you
have the freedom to distribute copies of free software (and charge for
this service if you wish), that you receive source code or can get it
if you want it, that you can change the software or use pieces of it
in new free programs; and that you know you can do these things.

  To protect your rights, we need to make restrictions that forbid
anyone to deny you these rights or to ask you to surrender the rights.
These restrictions translate to certain responsibilities for you if you
distribute copies of the software, or if you modify it.

  For example, if you distribute copies of such a program, whether
gratis or for a fee, you must give the recipients all the rights that
you have.  You must make sure that they, too, receive or can get the
source code.  And you must show them these terms so they know their
rights.

  We protect your rights with two steps: (1) copyright the software, and
(2) offer you this license which gives you legal permission to copy,
distribute and/or modify the software.

  Also, for each author's protection and ours, we want to make certain
that everyone understands that there is no warranty for this free
software.  If the software is modified by someone else and passed on, we
want its recipients to know that what they have is not the original, so
that any problems introduced by others will not reflect on the original
authors' reputations.

  Finally, any free program is threatened constantly by software
patents.  We wish to avoid the danger that redistributors of a free
program will individually obtain patent licenses, in effect making the
program proprietary.  To prevent this, we have made it clear that any
patent must be licensed for everyone's free use or not licensed at all.

  The precise terms and conditions for copying, distribution and
modification follow.

                    GNU GENERAL PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. This License applies to any program or other work which contains
a notice placed by the copyright holder saying it may be distributed
under the terms of this General Public License.  The "Program", below,
refers to any such program or work, and a "work based on the Program"
means either the Program or any derivative work under copyright law:
that is to say, a work containing the Program or a portion of it,
either verbatim or with modifications and/or translated into another
language.  (Hereinafter, translation is included without limitation in
the term "modification".)  Each licensee is addressed as "you".

Activities other than copying, distribution and modification are not
covered by this License; they are outside its scope.  The act of
running the Program is not restricted, and the output from the Program
is covered only if its contents constitute a work based on the
Program (independent of having been made by running the Program).
Whether that is true depends on what the Program does.

  1. You may copy and distribute verbatim copies of the Program's
source code as you receive it, in any medium, provided that you
conspicuously and appropriately publish on each copy an appropriate
copyright notice and disclaimer of warranty; keep intact all the
notices that refer to this License and to the absence of any warranty;
and give any other recipients of the Program a copy of this License
along with the Program.

You may charge a fee for the physical act of transferring a copy, and
you may at your option offer warranty protection in exchange for a fee.

  2. You may modify your copy or copies of the Program or any portion
of it, thus forming a work based on the Program, and copy and
distribute such modifications or work under the terms of Section 1
above, provided that you also meet all of these conditions:

    a) You must cause the modified files to carry prominent notices
    stating that you changed the files and the date of any change.

    b) You must cause any work that you distribute or publish, that in
    whole or in part contains or is derived from the Program or any
    part thereof, to be licensed as a whole at no charge to all third
    parties under the terms of this License.

    c) If the modified program normally reads commands interactively
    when run, you must cause it, when started running for such
    interactive use in the most ordinary way, to print or display an
    announcement including an appropriate copyright notice and a
    notice that there is no warranty (or else, saying that you provide
    a warranty) and that users may redistribute the program under
    these conditions, and telling the user how to view a copy of this
    License.  (Exception: if the Program itself is interactive but
    does not normally print such an announcement, your work based on
    the Program is not required to print an announcement.)

These requirements apply to the modified work as a whole.  If
identifiable sections of that work are not derived from the Program,
and can be reasonably considered independent and separate works in
themselves, then this License, and its terms, do not apply to those
sections when you distribute them as separate works.  But when you
distribute the same sections as part of a whole which is a work based
on the Program, the distribution of the whole must be on the terms of
this License, whose permissions for other licensees extend to the
entire whole, and thus to each and every part regardless of who wrote it.

Thus, it is not the intent of this section to claim rights or contest
your rights to work written entirely by you; rather, the intent is to
exercise the right to control the distribution of derivative or
collective works based on the Program.

In addition, mere aggregation of another work not based on the Program
with the Program (or with a work based on the Program) on a volume of
a storage or distribution medium does not bring the other work under
the scope of this License.

  3. You may copy and distribute the Program (or a work based on it,
under Section 2) in object code or executable form under the terms of
Sections 1 and 2 above provided that you also do one of the following:

    a) Accompany it with the complete corresponding machine-readable
    source code, which must be distributed under the terms of Sections
    1 and 2 above on a medium customarily used for software interchange; or,

    b) Accompany it with a written offer, valid for at least three
    years, to give any third party, for a charge no more than your
    cost of physically performing source distribution, a complete
    machine-readable copy of the corresponding source code, to be
    distributed under the terms of Sections 1 and 2 above on a medium
    customarily used for software interchange; or,

    c) Accompany it with the information you received as to the offer
    to distribute corresponding source code.  (This alternative is
    allowed only for noncommercial distribution and only if you
    received the program in object code or executable form with such
    an offer, in accord with Subsection b above.)

The source code for a work means the preferred form of the work for
making modifications to it.  For an executable work, complete source
code means all the source code for all modules it contains, plus any
associated interface definition files, plus the scripts used to
control compilation and installation of the executable.  However, as a
special exception, the source code distributed need not include
anything that is normally distributed (in either source or binary
form) with the major components (compiler, kernel, and so on) of the
operating system on which the executable runs, unless that component
itself accompanies the executable.

If distribution of executable or object code is made by offering
access to copy from a designated place, then offering equivalent
access to copy the source code from the same place counts as
distribution of the source code, even though third parties are not
compelled to copy the source along with the object code.

  4. You may not copy, modify, sublicense, or distribute the Program
except as expressly provided under this License.  Any attempt
otherwise to copy, modify, sublicense or distribute the Program is
void, and will automatically terminate your rights under this License.
However, parties who have received copies, or rights, from you under
this License will not have their licenses terminated so long as such
parties remain in full compliance.

  5. You are not required to accept this License, since you have not
signed it.  However, nothing else grants you permission to modify or
distribute the Program or its derivative works.  These actions are
prohibited by law if you do not accept this License.  Therefore, by
modifying or distributing the Program (or any work based on the
Program), you indicate your acceptance of this License to do so, and
all its terms and conditions for copying, distributing or modifying
the Program or works based on it.

  6. Each time you redistribute the Program (or any work based on the
Program), the recipient automatically receives a license from the
original licensor to copy, distribute or modify the Program subject to
these terms and conditions.  You may not impose any further
restrictions on the recipients' exercise of the rights granted herein.
You are not responsible for enforcing compliance by third parties to
this License.

  7. If, as a consequence of a court judgment or allegation of patent
infringement or for any other reason (not limited to patent issues),
conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot
distribute so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you
may not distribute the Program at all.  For example, if a patent
license would not permit royalty-free redistribution of the Program by
all those who receive copies directly or indirectly through you, then
the only way you could satisfy both it and this License would be to
refrain entirely from distribution of the Program.

If any portion of this section is held invalid or unenforceable under
any particular circumstance, the balance of the section is intended to
apply and the section as a whole is intended to apply in other
circumstances.

It is not the purpose of this section to induce you to infringe any
patents or other property right claims or to contest validity of any
such claims; this section has the sole purpose of protecting the
integrity of the free software distribution system, which is
implemented by public license practices.  Many people have made
generous contributions to the wide range of software distributed
through that system in reliance on consistent application of that
system; it is up to the author/donor to decide if he or she is willing
to distribute software through any other system and a licensee cannot
impose that choice.

This section is intended to make thoroughly clear what is believed to
be a consequence of the rest of this License.

  8. If the distribution and/or use of the Program is restricted in
certain countries either by patents or by copyrighted interfaces, the
original copyright holder who places the Program under this License
may add an explicit geographical distribution limitation excluding
those countries, so that distribution is permitted only in or among
countries not thus excluded.  In such case, this License incorporates
the limitation as if written in the body of this License.

  9. The Free Software Foundation may publish revised and/or new versions
of the General Public License from time to time.  Such new versions will
be similar in spirit to the present version, but may differ in detail to
address new problems or concerns.

Each version is given a distinguishing version number.  If the Program
specifies a version number of this License which applies to it and "any
later version", you have the option of following the terms and conditions
either of that version or of any later version published by the Free
Software Foundation.  If the Program does not specify a version number of
this License, you may choose any version ever published by the Free Software
Foundation.

  10. If you wish to incorporate parts of the Program into other free
programs whose distribution conditions are different, write to the author
to ask for permission.  For software which is copyrighted by the Free
Software Foundation, write to the Free Software Foundation; we sometimes
make exceptions for this.  Our decision will be guided by the two goals
of preserving the free status of all derivatives of our free software and
of promoting the sharing and reuse of software generally.

                            NO WARRANTY

  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY
FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN
OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES
PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED
OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS
TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE
PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,
REPAIR OR CORRECTION.

  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR
REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,
INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING
OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED
TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY
YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER
PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE
POSSIBILITY OF SUCH DAMAGES.

                     END OF TERMS AND CONDITIONS

            How to Apply These Terms to Your New Programs

  If you develop a new program, and you want it to be of the greatest
possible use to the public, the best way to achieve this is to make it
free software which everyone can redistribute and change under these terms.

  To do so, attach the following notices to the program.  It is safest
to attach them to the start of each source file to most effectively
convey the exclusion of warranty; and each file should have at least
the 'copyright' line and a pointer to where the full notice is found.

    Office All-In-One Fast Deployment Online Installer
    Copyright (C) 2026 Cristea Andreea Mirela

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; only version 2 of the License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

Also add information on how to contact you by electronic and paper mail.

If the program is interactive, make it output a short notice like this
when it starts in an interactive mode:

    Gnomovision version 69, Copyright (C) year name of author
    Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.

The hypothetical commands 'show w' and `show c` should show the appropriate
parts of the General Public License.  Of course, the commands you use may
be called something other than 'show w' and 'show c'; they could even be
mouse-clicks or menu items--whatever suits your program.

You should also get your employer (if you work as a programmer) or your
school, if any, to sign a 'copyright disclaimer' for the program, if
necessary. Here is a sample; alter the names:

  Yoyodyne, Inc., hereby disclaims all copyright interest in the program
  'Gnomovision' (which makes passes at compilers) written by James Hacker.

  <signature of Ty Coon>, 1 April 1989
  Ty Coon, President of Vice

This General Public License does not permit incorporating your program into
proprietary programs.  If your program is a subroutine library, you may
consider it more useful to permit linking proprietary applications with the
library.  If this is what you want to do, use the GNU Lesser General
Public License instead of this License.)";

// ----------------------------------------------------------------------
// Structuri pentru string-urile UI și About
// ----------------------------------------------------------------------
struct UiStrings {
    const wchar_t* title;
    const wchar_t* channel;
    const wchar_t* product;
    const wchar_t* arch;
    const wchar_t* language;
    const wchar_t* installTo;
    const wchar_t* browse;
    const wchar_t* install;
    const wchar_t* closeApp;
    const wchar_t* mainMenu;
    const wchar_t* installing;
    const wchar_t* done;
    const wchar_t* selectAllOptions;
    const wchar_t* specifyInstallPath;
    const wchar_t* failedCopyOdt;
    const wchar_t* failedWriteXml;
    const wchar_t* failedStartInstaller;
    const wchar_t* insufficientSpace;
    const wchar_t* selectFolderTitle;
    const wchar_t* generateAutorun;
    const wchar_t* failedWriteAutorun;
    const wchar_t* removeKeys;
    const wchar_t* confirmRemoveKeysTitle;
    const wchar_t* confirmRemoveKeysMsg;
    const wchar_t* noKeysFoundMsg;
    const wchar_t* noOfficeFoundMsg;
    const wchar_t* keysRemovedMsg;
    const wchar_t* calculating;
    const wchar_t* cancel;
    const wchar_t* retry;
    const wchar_t* removeKeysWindowTitle;
    const wchar_t* removingKeyStatus;
    const wchar_t* missingOdt;
    const wchar_t* missingPackagesFolder;
};

struct AboutStrings {
    const wchar_t* title;
    const wchar_t* body;
    const wchar_t* link;
    const wchar_t* close;
};

// ----------------------------------------------------------------------
// Datele pentru fiecare limbă (UI)
// ----------------------------------------------------------------------
static const UiStrings gUiEn = {
    L"Microsoft Office Installer",
    L"Channel:",
    L"Product:",
    L"Architecture:",
    L"Language:",
    L"Install to:",
    L"Browse",
    L"Install",
    L"Close app",
    L"Main Menu",
    L"Installing, please wait...",
    L"Microsoft installer finished successfully.",
    L"Please select all options.",
    L"Please specify an installation path.",
    L"Failed to copy odt.exe.",
    L"Failed to write config.xml.",
    L"Failed to start the Office installer.",
    L"Not enough free space in the selected location.",
    L"Select installation folder",
    L"Generate autorun.inf",
    L"Failed to write autorun.inf.",
    L"Remove all Office keys",
    L"Warning: Destructive action",
    L"This action will delete ALL Office activation keys from ALL installed Office versions on this computer. It requires administrator privileges. Are you sure you want to proceed?",
    L"No keys were found in {0} installation(s).",
    L"No Office installations were found.",
    L"Successfully removed {0} key(s) from {1} installation(s).{2}",
    L"Calculating...",
    L"Cancel",
    L"Retry",
    L"Remove Office Keys",
    L"Removing key %s...",
    L"odt.exe not found in packages folder.",
    L"Packages folder not found."
};

static const UiStrings gUiZhCN = {
    L"Microsoft Office 安装程序",
    L"通道：",
    L"产品：",
    L"架构：",
    L"语言：",
    L"安装到：",
    L"浏览",
    L"安装",
    L"关闭程序",
    L"主菜单",
    L"正在安装，请稍候...",
    L"Microsoft 安装已成功完成。",
    L"请选择所有选项。",
    L"请指定安装路径。",
    L"无法复制 odt.exe。",
    L"无法写入 config.xml。",
    L"无法启动 Office 安装程序。",
    L"所选位置可用空间不足。",
    L"选择安装文件夹",
    L"生成 autorun.inf",
    L"无法写入 autorun.inf。",
    L"删除所有 Office 密钥",
    L"警告：破坏性操作",
    L"此操作将从此计算机上所有已安装的 Office 版本中删除所有激活密钥。需要管理员权限。您确定要继续吗？",
    L"在 {0} 个安装中未找到密钥。",
    L"未找到任何 Office 安装。",
    L"已成功从 {1} 个安装中删除 {0} 个密钥。{2}",
    L"正在计算...",
    L"取消",
    L"重试",
    L"删除 Office 密钥",
    L"正在删除密钥 %s...",
    L"在 packages 文件夹中未找到 odt.exe。",
    L"未找到 packages 文件夹。"
};

static const UiStrings gUiZhTW = {
    L"Microsoft Office 安裝程式",
    L"通道：",
    L"產品：",
    L"架構：",
    L"語言：",
    L"安裝至：",
    L"瀏覽",
    L"安裝",
    L"關閉程式",
    L"主選單",
    L"正在安裝，請稍候...",
    L"Microsoft 安裝已成功完成。",
    L"請選擇所有選項。",
    L"請指定安裝路徑。",
    L"無法複製 odt.exe。",
    L"無法寫入 config.xml。",
    L"無法啟動 Office 安裝程式。",
    L"所選位置可用空間不足。",
    L"選擇安裝資料夾",
    L"產生 autorun.inf",
    L"無法寫入 autorun.inf。",
    L"移除所有 Office 金鑰",
    L"警告：破壞性操作",
    L"此操作將從此電腦上所有已安裝的 Office 版本中移除所有啟用金鑰。需要系統管理員權限。您確定要繼續嗎？",
    L"在 {0} 個安裝中未找到金鑰。",
    L"未找到任何 Office 安裝。",
    L"已成功從 {1} 個安裝中移除 {0} 個金鑰。{2}",
    L"正在計算...",
    L"取消",
    L"重試",
    L"移除 Office 金鑰",
    L"正在移除金鑰 %s...",
    L"在 packages 資料夾中未找到 odt.exe。",
    L"未找到 packages 資料夾。"
};

static const UiStrings gUiRo = {
    L"Instalator Microsoft Office",
    L"Canal:",
    L"Produs:",
    L"Arhitectură:",
    L"Limbă:",
    L"Instalează în:",
    L"Răsfoire",
    L"Instalează",
    L"Închide aplicația",
    L"Meniu principal",
    L"Se instalează, te rugăm să aștepți...",
    L"Instalarea s-a finalizat cu succes.",
    L"Te rugăm să selectezi toate opțiunile.",
    L"Te rugăm să specifici o locație de instalare.",
    L"Nu s-a putut copia odt.exe.",
    L"Nu s-a putut scrie config.xml.",
    L"Nu s-a putut porni instalatorul Office.",
    L"Nu este suficient spațiu în locația selectată",
    L"Selectează folderul de instalare",
    L"Generează autorun.inf",
    L"Nu s-a putut scrie autorun.inf.",
    L"Șterge toate cheile Office",
    L"Atenție: Acțiune distructivă",
    L"Această acțiune va șterge TOATE cheile de activare Office din TOATE versiunile Office instalate pe acest computer. Necesită privilegii de administrator. Ești sigur că vrei să continui?",
    L"Nu au fost găsite chei în {0} instalare(i).",
    L"Nu s-a găsit nicio instalare Office.",
    L"S-au eliminat cu succes {0} cheie(i) din {1} instalare(i).{2}",
    L"Se calculează...",
    L"Anulează",
    L"Reîncearcă",
    L"Elimină cheile Office",
    L"Se elimină cheia %s...",
    L"odt.exe nu a fost găsit în folderul packages.",
    L"Folderul packages nu a fost găsit."
};

static const UiStrings gUiBg = {
    L"Инсталатор на Microsoft Office",
    L"Канал:",
    L"Продукт:",
    L"Архитектура:",
    L"Език:",
    L"Инсталирай в:",
    L"Преглед",
    L"Инсталирай",
    L"Затвори приложението",
    L"Основно меню",
    L"Инсталиране, моля изчакайте...",
    L"Инсталацията на Microsoft приключи успешно.",
    L"Моля, изберете всички опции.",
    L"Моля, посочете път за инсталация.",
    L"Неуспешно копиране на odt.exe.",
    L"Неуспешно записване на config.xml.",
    L"Неуспешно стартиране на инсталатора на Office.",
    L"Няма достатъчно свободно място в избраната локация.",
    L"Изберете папка за инсталация",
    L"Генериране на autorun.inf",
    L"Неуспешно записване на autorun.inf.",
    L"Премахване на всички Office ключове",
    L"Предупреждение: Разрушително действие",
    L"Това действие ще изтрие ВСИЧКИ ключове за активация на Office от ВСИЧКИ инсталирани версии на Office на този компютър. Изисква администраторски права. Сигурни ли сте, че искате да продължите?",
    L"Не са намерени ключове в {0} инсталация(и).",
    L"Не са намерени инсталации на Office.",
    L"Успешно премахнати {0} ключ(а) от {1} инсталация(и).{2}",
    L"Изчисляване...",
    L"Отказ",
    L"Опит отново",
    L"Премахване на Office ключове",
    L"Премахване на ключ %s...",
    L"odt.exe не е намерен в папката packages.",
    L"Папката packages не е намерена."
};

static const UiStrings gUiHu = {
    L"Microsoft Office telepítő",
    L"Csatorna:",
    L"Termék:",
    L"Architektúra:",
    L"Nyelv:",
    L"Telepítés ide:",
    L"Böngészés",
    L"Telepítés",
    L"Alkalmazás bezárása",
    L"Főmenü",
    L"Telepítés folyamatban, kérjük várjon...",
    L"A Microsoft telepítő sikeresen befejeződött.",
    L"Kérjük, válassza ki az összes opciót.",
    L"Kérjük, adja meg a telepítési útvonalat.",
    L"Az odt.exe másolása sikertelen.",
    L"A config.xml mentése sikertelen.",
    L"Az Office telepítő indítása sikertelen.",
    L"Nincs elég szabad hely a kiválasztott helyen.",
    L"Telepítési mappa kiválasztása",
    L"autorun.inf generálása",
    L"Az autorun.inf írása sikertelen.",
    L"Összes Office kulcs eltávolítása",
    L"Figyelmeztetés: Romboló művelet",
    L"Ez a művelet TÖRLI az ÖSSZES Office aktiválási kulcsot a számítógépre telepített ÖSSZES Office verzióból. Rendszergazdai jogosultság szükséges. Biztosan folytatja?",
    L"Nem található kulcs {0} telepítésben.",
    L"Nem található Office telepítés.",
    L"Sikeresen eltávolítva {0} kulcs {1} telepítésből.{2}",
    L"Számítás...",
    L"Mégse",
    L"Újra",
    L"Office kulcsok eltávolítása",
    L"%s kulcs eltávolítása...",
    L"Az odt.exe nem található a packages mappában.",
    L"A packages mappa nem található."
};

static const UiStrings gUiEl = {
    L"Εγκαταστάτης Microsoft Office",
    L"Κανάλι:",
    L"Προϊόν:",
    L"Αρχιτεκτονική:",
    L"Γλώσσα:",
    L"Εγκατάσταση σε:",
    L"Αναζήτηση",
    L"Εγκατάσταση",
    L"Κλείσιμο εφαρμογής",
    L"Κύριο μενού",
    L"Γίνεται εγκατάσταση, παρακαλώ περιμένετε...",
    L"Η εγκατάσταση της Microsoft ολοκληρώθηκε με επιτυχία.",
    L"Παρακαλώ επιλέξτε όλες τις επιλογές.",
    L"Παρακαλώ ορίστε διαδρομή εγκατάστασης.",
    L"Αποτυχία αντιγραφής odt.exe.",
    L"Αποτυχία εγγραφής του config.xml.",
    L"Αποτυχία εκκίνησης του εγκαταστάτη του Office.",
    L"Δεν υπάρχει αρκετός ελεύθερος χώρος στην επιλεγμένη τοποθεσία.",
    L"Επιλέξτε φάκελο εγκατάστασης",
    L"Δημιουργία autorun.inf",
    L"Αποτυχία εγγραφής autorun.inf.",
    L"Κατάργηση όλων των κλειδιών Office",
    L"Προειδοποίηση: Καταστροφική ενέργεια",
    L"Αυτή η ενέργεια θα ΔΙΑΓΡΑΨΕΙ ΟΛΑ τα κλειδιά ενεργοποίησης Office από ΟΛΕΣ τις εγκατεστημένες εκδόσεις Office σε αυτόν τον υπολογιστή. Απαιτεί δικαιώματα διαχειριστή. Είστε βέβαιοι ότι θέλετε να συνεχίσετε;",
    L"Δεν βρέθηκαν κλειδιά σε {0} εγκατάσταση(εις).",
    L"Δεν βρέθηκαν εγκαταστάσεις Office.",
    L"Επιτυχής κατάργηση {0} κλειδιού(ών) από {1} εγκατάσταση(εις).{2}",
    L"Υπολογισμός...",
    L"Ακύρωση",
    L"Επανάληψη",
    L"Κατάργηση κλειδιών Office",
    L"Κατάργηση κλειδιού %s...",
    L"Το odt.exe δεν βρέθηκε στο φάκελο packages.",
    L"Ο φάκελος packages δεν βρέθηκε."
};

static const UiStrings gUiTr = {
    L"Microsoft Office Yükleyicisi",
    L"Kanal:",
    L"Ürün:",
    L"Mimari:",
    L"Dil:",
    L"Yükleme konumu:",
    L"Gözat",
    L"Yükle",
    L"Uygulamayı kapat",
    L"Ana menü",
    L"Yükleniyor, lütfen bekleyin...",
    L"Microsoft yükleyicisi başarıyla tamamlandı.",
    L"Lütfen tüm seçenekleri seçin.",
    L"Lütfen bir yükleme yolu belirtin.",
    L"odt.exe kopyalanamadı.",
    L"config.xml yazılamadı.",
    L"Office yükleyicisi başlatılamadı.",
    L"Seçilen konumda yeterli boş alan yok.",
    L"Yükleme klasörü seçin",
    L"autorun.inf oluştur",
    L"autorun.inf yazılamadı.",
    L"Tüm Office anahtarlarını kaldır",
    L"Uyarı: Yıkıcı işlem",
    L"Bu işlem, bu bilgisayardaki TÜM Office sürümlerinden TÜM Office etkinleştirme anahtarlarını SİLECEKTİR. Yönetici ayrıcalıkları gerektirir. Devam etmek istediğinizden emin misiniz?",
    L"{0} kurulumda anahtar bulunamadı.",
    L"Office kurulumu bulunamadı.",
    L"{0} anahtar, {1} kurulumdan başarıyla kaldırıldı.{2}",
    L"Hesaplanıyor...",
    L"İptal",
    L"Yeniden dene",
    L"Office Anahtarlarını Kaldır",
    L"%s anahtarı kaldırılıyor...",
    L"odt.exe packages klasöründe bulunamadı.",
    L"Packages klasörü bulunamadı."
};

static const UiStrings gUiJa = {
    L"Microsoft Office インストーラー",
    L"チャネル:",
    L"製品:",
    L"アーキテクチャ:",
    L"言語:",
    L"インストール先:",
    L"参照",
    L"インストール",
    L"アプリを閉じる",
    L"メインメニュー",
    L"インストール中です。しばらくお待ちください...",
    L"Microsoft インストーラーが正常に完了しました。",
    L"すべてのオプションを選択してください。",
    L"インストール先を指定してください。",
    L"odt.exe のコピーに失敗しました。",
    L"config.xml の書き込みに失敗しました。",
    L"Office インストーラーの起動に失敗しました。",
    L"選択した場所の空き容量が不足しています。",
    L"インストール先フォルダーを選択",
    L"autorun.inf を生成",
    L"autorun.inf の書き込みに失敗しました。",
    L"すべての Office キーを削除",
    L"警告: 破壊的操作",
    L"この操作は、このコンピューターにインストールされているすべての Office バージョンから、すべての Office ライセンス認証キーを削除します。管理者権限が必要です。続行しますか？",
    L"{0} 個のインストールでキーが見つかりませんでした。",
    L"Office のインストールが見つかりませんでした。",
    L"{0} 個のキーを {1} 個のインストールから正常に削除しました。{2}",
    L"計算中...",
    L"キャンセル",
    L"再試行",
    L"Office キーの削除",
    L"キー %s を削除中...",
    L"odt.exe が packages フォルダーに見つかりません。",
    L"packages フォルダーが見つかりません。"
};

static const UiStrings gUiEs = {
    L"Instalador de Microsoft Office",
    L"Canal:",
    L"Producto:",
    L"Arquitectura:",
    L"Idioma:",
    L"Instalar en:",
    L"Examinar",
    L"Instalar",
    L"Cerrar aplicación",
    L"Menú principal",
    L"Instalando, por favor espera...",
    L"La instalación de Microsoft se completó correctamente.",
    L"Por favor, selecciona todas las opciones.",
    L"Por favor, especifica una ruta de instalación.",
    L"No se pudo copiar odt.exe.",
    L"No se pudo escribir config.xml.",
    L"No se pudo iniciar el instalador de Office.",
    L"No hay suficiente espacio libre en la ubicación seleccionada.",
    L"Selecciona la carpeta de instalación",
    L"Generar autorun.inf",
    L"No se pudo escribir autorun.inf.",
    L"Eliminar todas las claves de Office",
    L"Advertencia: Acción destructiva",
    L"Esta acción ELIMINARÁ TODAS las claves de activación de Office de TODAS las versiones de Office instaladas en este equipo. Requiere privilegios de administrador. ¿Estás seguro de que quieres continuar?",
    L"No se encontraron claves en {0} instalación(es).",
    L"No se encontraron instalaciones de Office.",
    L"Se eliminaron correctamente {0} clave(s) de {1} instalación(es).{2}",
    L"Calculando...",
    L"Cancelar",
    L"Reintentar",
    L"Eliminar claves de Office",
    L"Eliminando clave %s...",
    L"No se encontró odt.exe en la carpeta packages.",
    L"No se encontró la carpeta packages."
};

static const UiStrings gUiFr = {
    L"Installateur Microsoft Office",
    L"Canal:",
    L"Produit:",
    L"Architecture:",
    L"Langue:",
    L"Installer dans :",
    L"Parcourir",
    L"Installer",
    L"Fermer l'application",
    L"Menu principal",
    L"Installation en cours, veuillez patienter...",
    L"L'installation Microsoft s'est terminée avec succès.",
    L"Veuillez sélectionner toutes les options.",
    L"Veuillez spécifier un chemin d'installation.",
    L"Échec de la copie de odt.exe.",
    L"Échec de l'écriture de config.xml.",
    L"Échec du lancement du programme d'installation Office.",
    L"Pas assez d'espace libre à l'emplacement sélectionné.",
    L"Sélectionner le dossier d'installation",
    L"Générer autorun.inf",
    L"Échec de l'écriture de autorun.inf.",
    L"Supprimer toutes les clés Office",
    L"Avertissement : Action destructrice",
    L"Cette action SUPPRIMERA TOUTES les clés d'activation Office de TOUTES les versions d'Office installées sur cet ordinateur. Nécessite des privilèges d'administrateur. Êtes-vous sûr de vouloir continuer ?",
    L"Aucune clé trouvée dans {0} installation(s).",
    L"Aucune installation Office trouvée.",
    L"{0} clé(s) supprimée(s) avec succès de {1} installation(s).{2}",
    L"Calcul...",
    L"Annuler",
    L"Réessayer",
    L"Supprimer les clés Office",
    L"Suppression de la clé %s...",
    L"odt.exe introuvable dans le dossier packages.",
    L"Dossier packages introuvable."
};

static const UiStrings gUiSk = {
    L"Inštalátor Microsoft Office",
    L"Kanál:",
    L"Produkt:",
    L"Architektúra:",
    L"Jazyk:",
    L"Inštalovať do:",
    L"Prehľadávať",
    L"Inštalovať",
    L"Zavrieť aplikáciu",
    L"Hlavné menu",
    L"Inštaluje sa, počkajte prosím...",
    L"Inštalácia Microsoft bola úspešne dokončená.",
    L"Vyberte všetky možnosti.",
    L"Zadajte cestu inštalácie.",
    L"Nepodarilo sa skopírovať odt.exe.",
    L"Nepodarilo sa zapísať config.xml.",
    L"Nepodarilo sa spustiť inštalátor Office.",
    L"V zvolenom umiestnení nie je dostatok voľného miesta.",
    L"Vyberte priečinok na inštaláciu",
    L"Generovať autorun.inf",
    L"Nepodarilo sa zapísať autorun.inf.",
    L"Odstrániť všetky kľúče Office",
    L"Upozornenie: Deštruktívna akcia",
    L"Táto akcia ODSTRÁNI VŠETKY aktivačné kľúče Office zo VŠETKÝCH nainštalovaných verzií Office v tomto počítači. Vyžaduje administrátorské oprávnenia. Ste si istý, že chcete pokračovať?",
    L"Nenašli sa žiadne kľúče v {0} inštaláciách.",
    L"Nenašli sa žiadne inštalácie Office.",
    L"Úspešne odstránených {0} kľúčov z {1} inštalácií.{2}",
    L"Výpočet...",
    L"Zrušiť",
    L"Skúsiť znova",
    L"Odstrániť kľúče Office",
    L"Odstraňuje sa kľúč %s...",
    L"odt.exe sa nenašiel v priečinku packages.",
    L"Priečinok packages nebol nájdený."
};

static const UiStrings gUiCs = {
    L"Instalátor Microsoft Office",
    L"Kanál:",
    L"Produkt:",
    L"Architektura:",
    L"Jazyk:",
    L"Nainstalovat do:",
    L"Procházet",
    L"Nainstalovat",
    L"Zavřít aplikaci",
    L"Hlavní nabídka",
    L"Instaluje se, čekejte prosím...",
    L"Instalace Microsoft byla úspěšně dokončena.",
    L"Vyberte prosím všechny možnosti.",
    L"Zadejte prosím instalační cestu.",
    L"Nepodařilo se zkopírovat odt.exe.",
    L"Nepodařilo se zapsat config.xml.",
    L"Nepodařilo se spustit instalátor Office.",
    L"Na zvoleném umístění není dostatek volného místa.",
    L"Vyberte složku pro instalaci",
    L"Generovat autorun.inf",
    L"Nepodařilo se zapsat autorun.inf.",
    L"Odstranit všechny klíče Office",
    L"Varování: Destruktivní akce",
    L"Tato akce ODSTRANÍ VŠECHNY aktivační klíče Office ze VŠECH nainstalovaných verzí Office v tomto počítači. Vyžaduje oprávnění správce. Opravdu chcete pokračovat?",
    L"Nebyly nalezeny žádné klíče v {0} instalacích.",
    L"Nebyly nalezeny žádné instalace Office.",
    L"Úspěšně odstraněno {0} klíčů z {1} instalací.{2}",
    L"Výpočet...",
    L"Zrušit",
    L"Zkusit znovu",
    L"Odstranit klíče Office",
    L"Odstraňuje se klíč %s...",
    L"odt.exe nebyl nalezen ve složce packages.",
    L"Složka packages nebyla nalezena."
};

static const UiStrings gUiUk = {
    L"Інсталятор Microsoft Office",
    L"Канал:",
    L"Продукт:",
    L"Архітектура:",
    L"Мова:",
    L"Встановити в:",
    L"Огляд",
    L"Встановити",
    L"Закрити програму",
    L"Головне меню",
    L"Виконується встановлення, зачекайте...",
    L"Встановлення Microsoft успішно завершено.",
    L"Будь ласка, виберіть усі параметри.",
    L"Будь ласка, вкажіть шлях встановлення.",
    L"Не вдалося скопіювати odt.exe.",
    L"Не вдалося записати config.xml.",
    L"Не вдалося запустити інсталятор Office.",
    L"Недостатньо вільного місця у вибраному розташуванні.",
    L"Виберіть папку для встановлення",
    L"Згенерувати autorun.inf",
    L"Не вдалося записати autorun.inf.",
    L"Видалити всі ключі Office",
    L"Попередження: Руйнівна дія",
    L"Ця дія ВИДАЛИТЬ ВСІ ключі активації Office з УСІХ встановлених версій Office на цьому комп'ютері. Потрібні права адміністратора. Ви впевнені, що хочете продовжити?",
    L"Не знайдено ключів у {0} інсталяції(ях).",
    L"Не знайдено жодної інсталяції Office.",
    L"Успішно видалено {0} ключ(ів) з {1} інсталяції(й).{2}",
    L"Обчислення...",
    L"Скасувати",
    L"Повторити",
    L"Видалення ключів Office",
    L"Видалення ключа %s...",
    L"odt.exe не знайдено в папці packages.",
    L"Папку packages не знайдено."
};

static const UiStrings gUiDe = {
    L"Microsoft Office-Installationsprogramm",
    L"Kanal:",
    L"Produkt:",
    L"Architektur:",
    L"Sprache:",
    L"Installieren nach:",
    L"Durchsuchen",
    L"Installieren",
    L"App schließen",
    L"Hauptmenü",
    L"Installation läuft, bitte warten...",
    L"Die Microsoft-Installation wurde erfolgreich abgeschlossen.",
    L"Bitte wählen Sie alle Optionen aus.",
    L"Bitte geben Sie einen Installationspfad an.",
    L"Fehler beim Kopieren von odt.exe.",
    L"Fehler beim Schreiben von config.xml.",
    L"Fehler beim Starten des Office-Installers.",
    L"Im ausgewählten Speicherort ist nicht genügend freier Speicherplatz vorhanden.",
    L"Installationsordner auswählen",
    L"autorun.inf generieren",
    L"Fehler beim Schreiben von autorun.inf.",
    L"Alle Office-Schlüssel entfernen",
    L"Warnung: Destruktive Aktion",
    L"Diese Aktion löscht ALLE Office-Aktivierungsschlüssel von ALLEN installierten Office-Versionen auf diesem Computer. Erfordert Administratorrechte. Sind Sie sicher, dass Sie fortfahren möchten?",
    L"Keine Schlüssel in {0} Installation(en) gefunden.",
    L"Keine Office-Installationen gefunden.",
    L"Erfolgreich {0} Schlüssel aus {1} Installation(en) entfernt.{2}",
    L"Berechne...",
    L"Abbrechen",
    L"Wiederholen",
    L"Office-Schlüssel entfernen",
    L"Entferne Schlüssel %s...",
    L"odt.exe wurde im packages-Ordner nicht gefunden.",
    L"Packages-Ordner nicht gefunden."
};

// ----------------------------------------------------------------------
// English variants
// ----------------------------------------------------------------------
static const UiStrings gUiEnUs = {
    L"Microsoft Office Installer",
    L"Channel:",
    L"Product:",
    L"Architecture:",
    L"Language:",
    L"Install to:",
    L"Browse",
    L"Install",
    L"Close app",
    L"Main Menu",
    L"Installing, please wait...",
    L"Microsoft installer finished successfully.",
    L"Please select all options.",
    L"Please specify an installation path.",
    L"Failed to copy odt.exe.",
    L"Failed to write config.xml.",
    L"Failed to start the Office installer.",
    L"Not enough free space in the selected location.",
    L"Select installation folder",
    L"Generate autorun.inf",
    L"Failed to write autorun.inf.",
    L"Remove all Office keys",
    L"Warning: Destructive action",
    L"This action will delete ALL Office activation keys from ALL installed Office versions on this computer. It requires administrator privileges. Are you sure you want to proceed?",
    L"No keys were found in {0} installation(s).",
    L"No Office installations were found.",
    L"Successfully removed {0} key(s) from {1} installation(s).{2}",
    L"Calculating...",
    L"Cancel",
    L"Retry",
    L"Remove Office Keys",
    L"Removing key %s...",
    L"odt.exe not found in packages folder.",
    L"Packages folder not found."
};

static const UiStrings gUiEnGb = gUiEnUs;      // same as US English
static const UiStrings gUiEnAu = gUiEnUs;
static const UiStrings gUiEnCa = gUiEnUs;
static const UiStrings gUiEnNz = gUiEnUs;
static const UiStrings gUiEnZa = gUiEnUs;

// ----------------------------------------------------------------------
// German variants
// ----------------------------------------------------------------------
static const UiStrings gUiDeAt = gUiDe;        // same as de-de
static const UiStrings gUiDeCh = gUiDe;

// ----------------------------------------------------------------------
// French variants
// ----------------------------------------------------------------------
static const UiStrings gUiFrBe = gUiFr;        // same as fr-fr
static const UiStrings gUiFrCa = gUiFr;
static const UiStrings gUiFrCh = gUiFr;

// ----------------------------------------------------------------------
// Spanish variant
// ----------------------------------------------------------------------
static const UiStrings gUiEsMx = gUiEs;        // same as es-es

// ----------------------------------------------------------------------
// Italian
// ----------------------------------------------------------------------
static const UiStrings gUiIt = {
    L"Programma di installazione di Microsoft Office",
    L"Canale:",
    L"Prodotto:",
    L"Architettura:",
    L"Lingua:",
    L"Installa in:",
    L"Sfoglia",
    L"Installa",
    L"Chiudi app",
    L"Menu principale",
    L"Installazione in corso, attendere...",
    L"L'installazione di Microsoft è stata completata con successo.",
    L"Selezionare tutte le opzioni.",
    L"Specificare un percorso di installazione.",
    L"Impossibile copiare odt.exe.",
    L"Impossibile scrivere config.xml.",
    L"Impossibile avviare il programma di installazione di Office.",
    L"Spazio libero insufficiente nella posizione selezionata.",
    L"Seleziona la cartella di installazione",
    L"Genera autorun.inf",
    L"Impossibile scrivere autorun.inf.",
    L"Rimuovi tutte le chiavi di Office",
    L"Avvertenza: Azione distruttiva",
    L"Questa azione ELIMINERÀ TUTTE le chiavi di attivazione di Office da TUTTE le versioni di Office installate su questo computer. Richiede privilegi di amministratore. Continuare?",
    L"Nessuna chiave trovata in {0} installazione(i).",
    L"Nessuna installazione di Office trovata.",
    L"Rimosse con successo {0} chiave(i) da {1} installazione(i).{2}",
    L"Calcolo in corso...",
    L"Annulla",
    L"Riprova",
    L"Rimuovi chiavi Office",
    L"Rimozione chiave %s...",
    L"odt.exe non trovato nella cartella packages.",
    L"Cartella packages non trovata."
};

// ----------------------------------------------------------------------
// Portuguese (Portugal)
// ----------------------------------------------------------------------
static const UiStrings gUiPtPt = {
    L"Instalador do Microsoft Office",
    L"Canal:",
    L"Produto:",
    L"Arquitetura:",
    L"Idioma:",
    L"Instalar em:",
    L"Procurar",
    L"Instalar",
    L"Fechar aplicação",
    L"Menu principal",
    L"A instalar, aguarde...",
    L"A instalação da Microsoft foi concluída com êxito.",
    L"Selecione todas as opções.",
    L"Especifique um caminho de instalação.",
    L"Falha ao copiar odt.exe.",
    L"Falha ao escrever config.xml.",
    L"Falha ao iniciar o instalador do Office.",
    L"Espaço livre insuficiente na localização selecionada.",
    L"Selecione a pasta de instalação",
    L"Gerar autorun.inf",
    L"Falha ao escrever autorun.inf.",
    L"Remover todas as chaves do Office",
    L"Aviso: Ação destrutiva",
    L"Esta ação ELIMINARÁ TODAS as chaves de ativação do Office de TODAS as versões do Office instaladas neste computador. Requer privilégios de administrador. Tem a certeza de que pretende continuar?",
    L"Não foram encontradas chaves em {0} instalação(ões).",
    L"Não foram encontradas instalações do Office.",
    L"Removidas com êxito {0} chave(s) de {1} instalação(ões).{2}",
    L"A calcular...",
    L"Cancelar",
    L"Tentar novamente",
    L"Remover chaves do Office",
    L"A remover chave %s...",
    L"odt.exe não encontrado na pasta packages.",
    L"Pasta packages não encontrada."
};

// ----------------------------------------------------------------------
// Portuguese (Brazil)
// ----------------------------------------------------------------------
static const UiStrings gUiPtBr = {
    L"Instalador do Microsoft Office",
    L"Canal:",
    L"Produto:",
    L"Arquitetura:",
    L"Idioma:",
    L"Instalar em:",
    L"Procurar",
    L"Instalar",
    L"Fechar aplicativo",
    L"Menu principal",
    L"Instalando, aguarde...",
    L"A instalação da Microsoft foi concluída com sucesso.",
    L"Selecione todas as opções.",
    L"Especifique um caminho de instalação.",
    L"Falha ao copiar odt.exe.",
    L"Falha ao gravar config.xml.",
    L"Falha ao iniciar o instalador do Office.",
    L"Espaço livre insuficiente no local selecionado.",
    L"Selecione a pasta de instalação",
    L"Gerar autorun.inf",
    L"Falha ao gravar autorun.inf.",
    L"Remover todas as chaves do Office",
    L"Aviso: Ação destrutiva",
    L"Esta ação EXCLUIRÁ TODAS as chaves de ativação do Office de TODAS as versões do Office instaladas neste computador. Requer privilégios de administrador. Tem certeza de que deseja continuar?",
    L"Nenhuma chave encontrada em {0} instalação(ões).",
    L"Nenhuma instalação do Office encontrada.",
    L"{0} chave(s) removida(s) com sucesso de {1} instalação(ões).{2}",
    L"Calculando...",
    L"Cancelar",
    L"Tentar novamente",
    L"Remover chaves do Office",
    L"Removendo chave %s...",
    L"odt.exe não encontrado na pasta packages.",
    L"Pasta packages não encontrada."
};

// ----------------------------------------------------------------------
// Russian
// ----------------------------------------------------------------------
static const UiStrings gUiRu = {
    L"Установщик Microsoft Office",
    L"Канал:",
    L"Продукт:",
    L"Архитектура:",
    L"Язык:",
    L"Установить в:",
    L"Обзор",
    L"Установить",
    L"Закрыть приложение",
    L"Главное меню",
    L"Установка, пожалуйста, подождите...",
    L"Установка Microsoft успешно завершена.",
    L"Пожалуйста, выберите все параметры.",
    L"Пожалуйста, укажите путь установки.",
    L"Не удалось скопировать odt.exe.",
    L"Не удалось записать config.xml.",
    L"Не удалось запустить установщик Office.",
    L"Недостаточно свободного места в выбранном месте.",
    L"Выберите папку установки",
    L"Создать autorun.inf",
    L"Не удалось записать autorun.inf.",
    L"Удалить все ключи Office",
    L"Предупреждение: Разрушительное действие",
    L"Это действие УДАЛИТ ВСЕ ключи активации Office из ВСЕХ установленных версий Office на этом компьютере. Требуются права администратора. Вы уверены, что хотите продолжить?",
    L"Ключи не найдены в {0} установке(ах).",
    L"Установки Office не найдены.",
    L"Успешно удалено {0} ключей из {1} установки(ок).{2}",
    L"Вычисление...",
    L"Отмена",
    L"Повторить",
    L"Удаление ключей Office",
    L"Удаление ключа %s...",
    L"odt.exe не найден в папке packages.",
    L"Папка packages не найдена."
};

// ----------------------------------------------------------------------
// Polish
// ----------------------------------------------------------------------
static const UiStrings gUiPl = {
    L"Instalator Microsoft Office",
    L"Kanał:",
    L"Produkt:",
    L"Architektura:",
    L"Język:",
    L"Zainstaluj w:",
    L"Przeglądaj",
    L"Zainstaluj",
    L"Zamknij aplikację",
    L"Menu główne",
    L"Instalowanie, proszę czekać...",
    L"Instalacja Microsoft zakończona pomyślnie.",
    L"Proszę wybrać wszystkie opcje.",
    L"Proszę określić ścieżkę instalacji.",
    L"Nie udało się skopiować odt.exe.",
    L"Nie udało się zapisać config.xml.",
    L"Nie udało się uruchomić instalatora pakietu Office.",
    L"Za mało wolnego miejsca w wybranej lokalizacji.",
    L"Wybierz folder instalacji",
    L"Generuj autorun.inf",
    L"Nie udało się zapisać autorun.inf.",
    L"Usuń wszystkie klucze pakietu Office",
    L"Ostrzeżenie: Działanie destrukcyjne",
    L"To działanie USUNIE WSZYSTKIE klucze aktywacji pakietu Office ze WSZYSTKICH zainstalowanych wersji pakietu Office na tym komputerze. Wymaga uprawnień administratora. Czy na pewno chcesz kontynuować?",
    L"Nie znaleziono kluczy w {0} instalacji(ach).",
    L"Nie znaleziono instalacji pakietu Office.",
    L"Pomyślnie usunięto {0} klucz(y) z {1} instalacji(ach).{2}",
    L"Obliczanie...",
    L"Anuluj",
    L"Ponów",
    L"Usuń klucze pakietu Office",
    L"Usuwanie klucza %s...",
    L"Nie znaleziono odt.exe w folderze packages.",
    L"Nie znaleziono folderu packages."
};

// ----------------------------------------------------------------------
// Dutch (Netherlands)
// ----------------------------------------------------------------------
static const UiStrings gUiNlNl = {
    L"Microsoft Office-installatieprogramma",
    L"Kanaal:",
    L"Product:",
    L"Architectuur:",
    L"Taal:",
    L"Installeren naar:",
    L"Bladeren",
    L"Installeren",
    L"App sluiten",
    L"Hoofdmenu",
    L"Installeren, even geduld...",
    L"Microsoft-installatie is voltooid.",
    L"Selecteer alle opties.",
    L"Geef een installatiepad op.",
    L"Kan odt.exe niet kopiëren.",
    L"Kan config.xml niet schrijven.",
    L"Kan Office-installatieprogramma niet starten.",
    L"Niet genoeg vrije ruimte op de geselecteerde locatie.",
    L"Selecteer installatiemap",
    L"Genereer autorun.inf",
    L"Kan autorun.inf niet schrijven.",
    L"Alle Office-sleutels verwijderen",
    L"Waarschuwing: Destructieve actie",
    L"Deze actie verwijdert ALLE Office-activeringssleutels van ALLE geïnstalleerde Office-versies op deze computer. Hiervoor zijn beheerdersrechten vereist. Weet u zeker dat u wilt doorgaan?",
    L"Geen sleutels gevonden in {0} installatie(s).",
    L"Geen Office-installaties gevonden.",
    L"Succesvol {0} sleutel(s) verwijderd uit {1} installatie(s).{2}",
    L"Bezig met berekenen...",
    L"Annuleren",
    L"Opnieuw",
    L"Office-sleutels verwijderen",
    L"Sleutel %s wordt verwijderd...",
    L"odt.exe niet gevonden in de map packages.",
    L"Map packages niet gevonden."
};

static const UiStrings gUiNlBe = gUiNlNl;      // same as Netherlands Dutch

// ----------------------------------------------------------------------
// Swedish
// ----------------------------------------------------------------------
static const UiStrings gUiSv = {
    L"Microsoft Office-installationsprogram",
    L"Kanal:",
    L"Produkt:",
    L"Arkitektur:",
    L"Språk:",
    L"Installera till:",
    L"Bläddra",
    L"Installera",
    L"Stäng app",
    L"Huvudmeny",
    L"Installerar, vänligen vänta...",
    L"Microsoft-installationen slutfördes.",
    L"Välj alla alternativ.",
    L"Ange en installationssökväg.",
    L"Kunde inte kopiera odt.exe.",
    L"Kunde inte skriva config.xml.",
    L"Kunde inte starta Office-installationsprogrammet.",
    L"Inte tillräckligt med ledigt utrymme på den valda platsen.",
    L"Välj installationsmapp",
    L"Generera autorun.inf",
    L"Kunde inte skriva autorun.inf.",
    L"Ta bort alla Office-nycklar",
    L"Varning: Destruktiv åtgärd",
    L"Den här åtgärden raderar ALLA Office-aktiveringsnycklar från ALLA installerade Office-versioner på den här datorn. Kräver administratörsbehörighet. Är du säker på att du vill fortsätta?",
    L"Inga nycklar hittades i {0} installation(er).",
    L"Inga Office-installationer hittades.",
    L"Tog bort {0} nyckel(ar) från {1} installation(er).{2}",
    L"Beräknar...",
    L"Avbryt",
    L"Försök igen",
    L"Ta bort Office-nycklar",
    L"Tar bort nyckel %s...",
    L"odt.exe hittades inte i mappen packages.",
    L"Mappen packages hittades inte."
};

// ----------------------------------------------------------------------
// Danish
// ----------------------------------------------------------------------
static const UiStrings gUiDa = {
    L"Microsoft Office-installationsprogram",
    L"Kanal:",
    L"Produkt:",
    L"Arkitektur:",
    L"Sprog:",
    L"Installer til:",
    L"Gennemse",
    L"Installer",
    L"Luk app",
    L"Hovedmenu",
    L"Installerer, vent venligst...",
    L"Microsoft-installationen blev gennemført.",
    L"Vælg alle indstillinger.",
    L"Angiv en installationssti.",
    L"Kunne ikke kopiere odt.exe.",
    L"Kunne ikke skrive config.xml.",
    L"Kunne ikke starte Office-installationsprogrammet.",
    L"Ikke nok ledig plads på den valgte placering.",
    L"Vælg installationsmappe",
    L"Generer autorun.inf",
    L"Kunne ikke skrive autorun.inf.",
    L"Fjern alle Office-nøgler",
    L"Advarsel: Destruktiv handling",
    L"Denne handling sletter ALLE Office-aktiveringsnøgler fra ALLE installerede Office-versioner på denne computer. Kræver administratorrettigheder. Er du sikker på, at du vil fortsætte?",
    L"Ingen nøgler fundet i {0} installation(er).",
    L"Ingen Office-installationer fundet.",
    L"Fjernede {0} nøgle(r) fra {1} installation(er).{2}",
    L"Beregner...",
    L"Annuller",
    L"Prøv igen",
    L"Fjern Office-nøgler",
    L"Fjerner nøgle %s...",
    L"odt.exe blev ikke fundet i mappen packages.",
    L"Mappen packages blev ikke fundet."
};

// ----------------------------------------------------------------------
// Norwegian (Bokmål)
// ----------------------------------------------------------------------
static const UiStrings gUiNb = {
    L"Microsoft Office-installasjonsprogram",
    L"Kanal:",
    L"Produkt:",
    L"Arkitektur:",
    L"Språk:",
    L"Installer til:",
    L"Bla gjennom",
    L"Installer",
    L"Lukk app",
    L"Hovedmeny",
    L"Installerer, vennligst vent...",
    L"Microsoft-installasjonen ble fullført.",
    L"Velg alle alternativer.",
    L"Angi en installasjonsbane.",
    L"Kunne ikke kopiere odt.exe.",
    L"Kunne ikke skrive config.xml.",
    L"Kunne ikke starte Office-installasjonsprogrammet.",
    L"Ikke nok ledig plass på den valgte plasseringen.",
    L"Velg installasjonsmappe",
    L"Generer autorun.inf",
    L"Kunne ikke skrive autorun.inf.",
    L"Fjern alle Office-nøkler",
    L"Advarsel: Destruktiv handling",
    L"Denne handlingen sletter ALLE Office-aktiveringsnøkler fra ALLE installerte Office-versjoner på denne datamaskinen. Krever administratorrettigheter. Er du sikker på at du vil fortsette?",
    L"Ingen nøkler funnet i {0} installasjon(er).",
    L"Ingen Office-installasjoner funnet.",
    L"Fjernet {0} nøkkel(er) fra {1} installasjon(er).{2}",
    L"Beregner...",
    L"Avbryt",
    L"Prøv igjen",
    L"Fjern Office-nøkler",
    L"Fjerner nøkkel %s...",
    L"odt.exe ble ikke funnet i packages-mappen.",
    L"Packages-mappen ble ikke funnet."
};

// ----------------------------------------------------------------------
// Finnish
// ----------------------------------------------------------------------
static const UiStrings gUiFi = {
    L"Microsoft Office -asennusohjelma",
    L"Kanava:",
    L"Tuote:",
    L"Arkkitehtuuri:",
    L"Kieli:",
    L"Asenna kohteeseen:",
    L"Selaa",
    L"Asenna",
    L"Sulje sovellus",
    L"Päävalikko",
    L"Asennetaan, odota...",
    L"Microsoft-asennus onnistui.",
    L"Valitse kaikki vaihtoehdot.",
    L"Määritä asennuspolku.",
    L"odt.exe-tiedoston kopiointi epäonnistui.",
    L"config.xml-tiedoston kirjoitus epäonnistui.",
    L"Office-asennusohjelman käynnistys epäonnistui.",
    L"Valitussa sijainnissa ei ole tarpeeksi vapaata tilaa.",
    L"Valitse asennuskansio",
    L"Luo autorun.inf",
    L"autorun.inf-tiedoston kirjoitus epäonnistui.",
    L"Poista kaikki Office-avaimet",
    L"Varoitus: Tuhoisa toimenpide",
    L"Tämä toimenpide POISTAA KAIKKI Office-aktivointiavaimet KAIKISTA tietokoneeseen asennetuista Office-versioista. Vaatii järjestelmänvalvojan oikeudet. Haluatko varmasti jatkaa?",
    L"Avaimia ei löytynyt {0} asennuksesta.",
    L"Office-asennuksia ei löytynyt.",
    L"Poistettiin {0} avainta {1} asennuksesta.{2}",
    L"Lasketaan...",
    L"Peruuta",
    L"Yritä uudelleen",
    L"Poista Office-avaimet",
    L"Poistetaan avainta %s...",
    L"odt.exe ei löytynyt packages-kansiosta.",
    L"Packages-kansiota ei löytynyt."
};

// ----------------------------------------------------------------------
// Korean
// ----------------------------------------------------------------------
static const UiStrings gUiKo = {
    L"Microsoft Office 설치 프로그램",
    L"채널:",
    L"제품:",
    L"아키텍처:",
    L"언어:",
    L"설치 위치:",
    L"찾아보기",
    L"설치",
    L"앱 닫기",
    L"주 메뉴",
    L"설치 중입니다. 잠시 기다려 주십시오...",
    L"Microsoft 설치가 성공적으로 완료되었습니다.",
    L"모든 옵션을 선택하십시오.",
    L"설치 경로를 지정하십시오.",
    L"odt.exe 복사에 실패했습니다.",
    L"config.xml 쓰기에 실패했습니다.",
    L"Office 설치 프로그램을 시작하지 못했습니다.",
    L"선택한 위치에 사용 가능한 공간이 부족합니다.",
    L"설치 폴더 선택",
    L"autorun.inf 생성",
    L"autorun.inf 쓰기에 실패했습니다.",
    L"모든 Office 키 제거",
    L"경고: 파괴적 작업",
    L"이 작업은 이 컴퓨터에 설치된 모든 Office 버전에서 모든 Office 정품 인증 키를 삭제합니다. 관리자 권한이 필요합니다. 계속하시겠습니까?",
    L"{0}개 설치에서 키를 찾을 수 없습니다.",
    L"Office 설치를 찾을 수 없습니다.",
    L"{1}개 설치에서 {0}개 키를 성공적으로 제거했습니다.{2}",
    L"계산 중...",
    L"취소",
    L"다시 시도",
    L"Office 키 제거",
    L"%s 키 제거 중...",
    L"packages 폴더에서 odt.exe를 찾을 수 없습니다.",
    L"packages 폴더를 찾을 수 없습니다."
};

// ----------------------------------------------------------------------
// Arabic
// ----------------------------------------------------------------------
static const UiStrings gUiAr = {
    L"مثبت Microsoft Office",
    L"القناة:",
    L"المنتج:",
    L"الهندسة المعمارية:",
    L"اللغة:",
    L"التثبيت إلى:",
    L"استعراض",
    L"تثبيت",
    L"إغلاق التطبيق",
    L"القائمة الرئيسية",
    L"جاري التثبيت، الرجاء الانتظار...",
    L"اكتمل تثبيت Microsoft بنجاح.",
    L"الرجاء تحديد جميع الخيارات.",
    L"الرجاء تحديد مسار التثبيت.",
    L"فشل نسخ odt.exe.",
    L"فشل كتابة config.xml.",
    L"فشل بدء مثبت Office.",
    L"لا توجد مساحة خالية كافية في الموقع المحدد.",
    L"تحديد مجلد التثبيت",
    L"إنشاء autorun.inf",
    L"فشل كتابة autorun.inf.",
    L"إزالة جميع مفاتيح Office",
    L"تحذير: إجراء مدمر",
    L"سيؤدي هذا الإجراء إلى حذف جميع مفاتيح تنشيط Office من جميع إصدارات Office المثبتة على هذا الكمبيوتر. يتطلب امتيازات المسؤول. هل أنت متأكد أنك تريد المتابعة؟",
    L"لم يتم العثور على مفاتيح في {0} تثبيت(ات).",
    L"لم يتم العثور على تثبيتات Office.",
    L"تمت إزالة {0} مفتاح(مفاتيح) بنجاح من {1} تثبيت(ات).{2}",
    L"جاري الحساب...",
    L"إلغاء",
    L"إعادة المحاولة",
    L"إزالة مفاتيح Office",
    L"جاري إزالة المفتاح %s...",
    L"لم يتم العثور على odt.exe في مجلد packages.",
    L"لم يتم العثور على مجلد packages."
};

// ----------------------------------------------------------------------
// Hebrew
// ----------------------------------------------------------------------
static const UiStrings gUiHe = {
    L"מתקין Microsoft Office",
    L"ערוץ:",
    L"מוצר:",
    L"ארכיטקטורה:",
    L"שפה:",
    L"התקן אל:",
    L"עיון",
    L"התקן",
    L"סגור אפליקציה",
    L"תפריט ראשי",
    L"מתקין, אנא המתן...",
    L"ההתקנה של Microsoft הושלמה בהצלחה.",
    L"אנא בחר את כל האפשרויות.",
    L"אנא ציין נתיב התקנה.",
    L"העתקת odt.exe נכשלה.",
    L"כתיבת config.xml נכשלה.",
    L"הפעלת מתקין Office נכשלה.",
    L"אין מספיק שטח פנוי במיקום הנבחר.",
    L"בחר תיקיית התקנה",
    L"צור autorun.inf",
    L"כתיבת autorun.inf נכשלה.",
    L"הסר את כל מפתחות Office",
    L"אזהרה: פעולה הרסנית",
    L"פעולה זו תמחק את כל מפתחות ההפעלה של Office מכל גרסאות Office המותקנות במחשב זה. דורשת הרשאות מנהל מערכת. האם אתה בטוח שברצונך להמשיך?",
    L"לא נמצאו מפתחות ב-{0} התקנה(ות).",
    L"לא נמצאו התקנות Office.",
    L"הוסרו בהצלחה {0} מפתח(ות) מ-{1} התקנה(ות).{2}",
    L"מחשב...",
    L"ביטול",
    L"נסה שוב",
    L"הסר מפתחות Office",
    L"מסיר מפתח %s...",
    L"odt.exe לא נמצא בתיקיית packages.",
    L"תיקיית packages לא נמצאה."
};

// ----------------------------------------------------------------------
// Hindi
// ----------------------------------------------------------------------
static const UiStrings gUiHi = {
    L"Microsoft Office इंस्टॉलर",
    L"चैनल:",
    L"उत्पाद:",
    L"आर्किटेक्चर:",
    L"भाषा:",
    L"इंस्टॉल करें:",
    L"ब्राउज़ करें",
    L"इंस्टॉल करें",
    L"ऐप बंद करें",
    L"मुख्य मेनू",
    L"इंस्टॉल हो रहा है, कृपया प्रतीक्षा करें...",
    L"Microsoft इंस्टॉलर सफलतापूर्वक पूरा हुआ।",
    L"कृपया सभी विकल्प चुनें।",
    L"कृपया एक इंस्टॉलेशन पथ निर्दिष्ट करें।",
    L"odt.exe कॉपी करने में विफल।",
    L"config.xml लिखने में विफल।",
    L"Office इंस्टॉलर शुरू करने में विफल।",
    L"चयनित स्थान में पर्याप्त खाली स्थान नहीं है।",
    L"इंस्टॉलेशन फ़ोल्डर चुनें",
    L"autorun.inf जेनरेट करें",
    L"autorun.inf लिखने में विफल।",
    L"सभी Office कुंजियाँ हटाएँ",
    L"चेतावनी: विनाशकारी क्रिया",
    L"यह क्रिया इस कंप्यूटर पर सभी स्थापित Office संस्करणों से सभी Office सक्रियण कुंजियाँ हटा देगी। इसके लिए व्यवस्थापक विशेषाधिकारों की आवश्यकता है। क्या आप वाकई आगे बढ़ना चाहते हैं?",
    L"{0} इंस्टॉलेशन में कोई कुंजी नहीं मिली।",
    L"कोई Office इंस्टॉलेशन नहीं मिला।",
    L"{1} इंस्टॉलेशन से {0} कुंजी(याँ) सफलतापूर्वक हटा दी गईं।{2}",
    L"गणना कर रहा है...",
    L"रद्द करें",
    L"पुनः प्रयास करें",
    L"Office कुंजियाँ हटाएँ",
    L"%s कुंजी हटाई जा रही है...",
    L"packages फ़ोल्डर में odt.exe नहीं मिला।",
    L"packages फ़ोल्डर नहीं मिला।"
};

// ----------------------------------------------------------------------
// Thai
// ----------------------------------------------------------------------
static const UiStrings gUiTh = {
    L"ตัวติดตั้ง Microsoft Office",
    L"ช่องทาง:",
    L"ผลิตภัณฑ์:",
    L"สถาปัตยกรรม:",
    L"ภาษา:",
    L"ติดตั้งไปที่:",
    L"เรียกดู",
    L"ติดตั้ง",
    L"ปิดแอป",
    L"เมนูหลัก",
    L"กำลังติดตั้ง โปรดรอสักครู่...",
    L"การติดตั้ง Microsoft เสร็จสมบูรณ์แล้ว",
    L"โปรดเลือกตัวเลือกทั้งหมด",
    L"โปรดระบุเส้นทางการติดตั้ง",
    L"ไม่สามารถคัดลอก odt.exe ได้",
    L"ไม่สามารถเขียน config.xml ได้",
    L"ไม่สามารถเริ่มตัวติดตั้ง Office ได้",
    L"พื้นที่ว่างไม่เพียงพอในตำแหน่งที่เลือก",
    L"เลือกโฟลเดอร์การติดตั้ง",
    L"สร้าง autorun.inf",
    L"ไม่สามารถเขียน autorun.inf ได้",
    L"ลบคีย์ Office ทั้งหมด",
    L"คำเตือน: การกระทำที่ทำลายล้าง",
    L"การกระทำนี้จะลบคีย์การเปิดใช้งาน Office ทั้งหมดจาก Office ทุกเวอร์ชันที่ติดตั้งบนคอมพิวเตอร์เครื่องนี้ ต้องใช้สิทธิ์ผู้ดูแลระบบ คุณแน่ใจหรือไม่ว่าต้องการดำเนินการต่อ",
    L"ไม่พบคีย์ในการติดตั้ง {0} รายการ",
    L"ไม่พบการติดตั้ง Office",
    L"ลบ {0} คีย์ออกจาก {1} การติดตั้งสำเร็จแล้ว{2}",
    L"กำลังคำนวณ...",
    L"ยกเลิก",
    L"ลองอีกครั้ง",
    L"ลบคีย์ Office",
    L"กำลังลบคีย์ %s...",
    L"ไม่พบ odt.exe ในโฟลเดอร์ packages",
    L"ไม่พบโฟลเดอร์ packages"
};

// ----------------------------------------------------------------------
// Vietnamese
// ----------------------------------------------------------------------
static const UiStrings gUiVi = {
    L"Trình cài đặt Microsoft Office",
    L"Kênh:",
    L"Sản phẩm:",
    L"Kiến trúc:",
    L"Ngôn ngữ:",
    L"Cài đặt vào:",
    L"Duyệt",
    L"Cài đặt",
    L"Đóng ứng dụng",
    L"Menu chính",
    L"Đang cài đặt, vui lòng chờ...",
    L"Trình cài đặt Microsoft đã hoàn tất thành công.",
    L"Vui lòng chọn tất cả các tùy chọn.",
    L"Vui lòng chỉ định đường dẫn cài đặt.",
    L"Sao chép odt.exe thất bại.",
    L"Ghi config.xml thất bại.",
    L"Không thể khởi động trình cài đặt Office.",
    L"Không đủ dung lượng trống tại vị trí đã chọn.",
    L"Chọn thư mục cài đặt",
    L"Tạo autorun.inf",
    L"Ghi autorun.inf thất bại.",
    L"Xóa tất cả khóa Office",
    L"Cảnh báo: Hành động phá hủy",
    L"Hành động này sẽ xóa TẤT CẢ khóa kích hoạt Office khỏi TẤT CẢ phiên bản Office đã cài đặt trên máy tính này. Yêu cầu đặc quyền quản trị viên. Bạn có chắc chắn muốn tiếp tục?",
    L"Không tìm thấy khóa nào trong {0} (các) bản cài đặt.",
    L"Không tìm thấy bản cài đặt Office nào.",
    L"Đã xóa thành công {0} khóa khỏi {1} (các) bản cài đặt.{2}",
    L"Đang tính toán...",
    L"Hủy",
    L"Thử lại",
    L"Xóa khóa Office",
    L"Đang xóa khóa %s...",
    L"Không tìm thấy odt.exe trong thư mục packages.",
    L"Không tìm thấy thư mục packages."
};

// ----------------------------------------------------------------------
// Indonesian
// ----------------------------------------------------------------------
static const UiStrings gUiId = {
    L"Penginstal Microsoft Office",
    L"Saluran:",
    L"Produk:",
    L"Arsitektur:",
    L"Bahasa:",
    L"Instal ke:",
    L"Jelajahi",
    L"Instal",
    L"Tutup aplikasi",
    L"Menu Utama",
    L"Sedang menginstal, harap tunggu...",
    L"Penginstal Microsoft selesai dengan sukses.",
    L"Harap pilih semua opsi.",
    L"Harap tentukan jalur instalasi.",
    L"Gagal menyalin odt.exe.",
    L"Gagal menulis config.xml.",
    L"Gagal memulai penginstal Office.",
    L"Ruang kosong tidak mencukupi di lokasi yang dipilih.",
    L"Pilih folder instalasi",
    L"Hasilkan autorun.inf",
    L"Gagal menulis autorun.inf.",
    L"Hapus semua kunci Office",
    L"Peringatan: Tindakan destruktif",
    L"Tindakan ini akan MENGHAPUS SEMUA kunci aktivasi Office dari SEMUA versi Office yang terinstal di komputer ini. Membutuhkan hak istimewa administrator. Apakah Anda yakin ingin melanjutkan?",
    L"Tidak ada kunci yang ditemukan dalam {0} instalasi.",
    L"Tidak ada instalasi Office yang ditemukan.",
    L"Berhasil menghapus {0} kunci dari {1} instalasi.{2}",
    L"Menghitung...",
    L"Batal",
    L"Coba Lagi",
    L"Hapus Kunci Office",
    L"Menghapus kunci %s...",
    L"odt.exe tidak ditemukan di folder packages.",
    L"Folder packages tidak ditemukan."
};

// ----------------------------------------------------------------------
// Croatian
// ----------------------------------------------------------------------
static const UiStrings gUiHr = {
    L"Microsoft Office instalacijski program",
    L"Kanal:",
    L"Proizvod:",
    L"Arhitektura:",
    L"Jezik:",
    L"Instaliraj u:",
    L"Pregledaj",
    L"Instaliraj",
    L"Zatvori aplikaciju",
    L"Glavni izbornik",
    L"Instalacija u tijeku, molimo pričekajte...",
    L"Microsoft instalacija uspješno je završena.",
    L"Odaberite sve opcije.",
    L"Navedite put instalacije.",
    L"Kopiranje odt.exe nije uspjelo.",
    L"Pisanje config.xml nije uspjelo.",
    L"Pokretanje Office instalacijskog programa nije uspjelo.",
    L"Nema dovoljno slobodnog prostora na odabranoj lokaciji.",
    L"Odaberite mapu za instalaciju",
    L"Generiraj autorun.inf",
    L"Pisanje autorun.inf nije uspjelo.",
    L"Ukloni sve Office ključeve",
    L"Upozorenje: Destruktivna radnja",
    L"Ova radnja će IZBRISATI SVE Office aktivacijske ključeve iz SVIH instaliranih Office verzija na ovom računalu. Zahtijeva administratorske privilegije. Jeste li sigurni da želite nastaviti?",
    L"Nisu pronađeni ključevi u {0} instalaciji(ama).",
    L"Nisu pronađene Office instalacije.",
    L"Uspješno uklonjeno {0} ključ(eva) iz {1} instalacije(a).{2}",
    L"Računanje...",
    L"Odustani",
    L"Pokušaj ponovno",
    L"Ukloni Office ključeve",
    L"Uklanjanje ključa %s...",
    L"odt.exe nije pronađen u mapi packages.",
    L"Mapa packages nije pronađena."
};

// ----------------------------------------------------------------------
// Slovenian
// ----------------------------------------------------------------------
static const UiStrings gUiSl = {
    L"Namestitveni program Microsoft Office",
    L"Kanal:",
    L"Izdelek:",
    L"Arhitektura:",
    L"Jezik:",
    L"Namesti v:",
    L"Prebrskaj",
    L"Namesti",
    L"Zapri aplikacijo",
    L"Glavni meni",
    L"Nameščanje, prosimo počakajte...",
    L"Microsoftova namestitev je uspešno zaključena.",
    L"Izberite vse možnosti.",
    L"Določite pot namestitve.",
    L"Kopiranje odt.exe ni uspelo.",
    L"Pisanje config.xml ni uspelo.",
    L"Zagon namestitvenega programa Office ni uspel.",
    L"Na izbrani lokaciji ni dovolj prostega prostora.",
    L"Izberite mapo za namestitev",
    L"Ustvari autorun.inf",
    L"Pisanje autorun.inf ni uspelo.",
    L"Odstrani vse Office ključe",
    L"Opozorilo: Uničujoče dejanje",
    L"To dejanje bo IZBRISALO VSE Office aktivacijske ključe iz VSEH nameščenih različic Officea v tem računalniku. Zahteva skrbniške privilegije. Ali ste prepričani, da želite nadaljevati?",
    L"V {0} namestitvah ni bilo najdenih ključev.",
    L"Najdenih ni bilo nobenih namestitev Officea.",
    L"Uspešno odstranjenih {0} ključ(ev) iz {1} namestitve(tev).{2}",
    L"Izračunavanje...",
    L"Prekliči",
    L"Poskusi znova",
    L"Odstrani Office ključe",
    L"Odstranjevanje ključa %s...",
    L"odt.exe ni bil najden v mapi packages.",
    L"Mape packages ni bilo mogoče najti."
};

// ----------------------------------------------------------------------
// Lithuanian
// ----------------------------------------------------------------------
static const UiStrings gUiLt = {
    L"„Microsoft Office“ diegimo programa",
    L"Kanalas:",
    L"Produktas:",
    L"Architektūra:",
    L"Kalba:",
    L"Įdiegti į:",
    L"Naršyti",
    L"Įdiegti",
    L"Uždaryti programą",
    L"Pagrindinis meniu",
    L"Diegiama, palaukite...",
    L"„Microsoft“ diegimas sėkmingai baigtas.",
    L"Pasirinkite visas parinktis.",
    L"Nurodykite diegimo kelią.",
    L"Nepavyko nukopijuoti odt.exe.",
    L"Nepavyko įrašyti config.xml.",
    L"Nepavyko paleisti „Office“ diegimo programos.",
    L"Pasirinktoje vietoje nepakanka laisvos vietos.",
    L"Pasirinkite diegimo aplanką",
    L"Generuoti autorun.inf",
    L"Nepavyko įrašyti autorun.inf.",
    L"Pašalinti visus „Office“ raktus",
    L"Įspėjimas: Destruktyvus veiksmas",
    L"Šis veiksmas ištrins VISUS „Office“ aktyvinimo raktus iš VISŲ šiame kompiuteryje įdiegtų „Office“ versijų. Reikia administratoriaus teisių. Ar tikrai norite tęsti?",
    L"Raktų nerasta {0} diegime(se).",
    L"„Office“ diegimų nerasta.",
    L"Sėkmingai pašalinta {0} raktas(ai) iš {1} diegimo(ų).{2}",
    L"Skaičiuojama...",
    L"Atšaukti",
    L"Bandyti dar kartą",
    L"Pašalinti „Office“ raktus",
    L"Šalinamas raktas %s...",
    L"odt.exe nerastas aplanke packages.",
    L"Aplankas packages nerastas."
};

// ----------------------------------------------------------------------
// Latvian
// ----------------------------------------------------------------------
static const UiStrings gUiLv = {
    L"Microsoft Office instalētājs",
    L"Kanāls:",
    L"Produkts:",
    L"Arhitektūra:",
    L"Valoda:",
    L"Instalēt uz:",
    L"Pārlūkot",
    L"Instalēt",
    L"Aizvērt lietotni",
    L"Galvenā izvēlne",
    L"Notiek instalēšana, lūdzu, uzgaidiet...",
    L"Microsoft instalēšana ir veiksmīgi pabeigta.",
    L"Lūdzu, atlasiet visas opcijas.",
    L"Lūdzu, norādiet instalēšanas ceļu.",
    L"Neizdevās kopēt odt.exe.",
    L"Neizdevās ierakstīt config.xml.",
    L"Neizdevās palaist Office instalētāju.",
    L"Atlasītajā vietā nav pietiekami daudz brīvas vietas.",
    L"Atlasiet instalēšanas mapi",
    L"Ģenerēt autorun.inf",
    L"Neizdevās ierakstīt autorun.inf.",
    L"Noņemt visas Office atslēgas",
    L"Brīdinājums: Destruktīva darbība",
    L"Šī darbība IZDZĒS VISAS Office aktivizācijas atslēgas no VISĀM šajā datorā instalētajām Office versijām. Nepieciešamas administratora privilēģijas. Vai tiešām vēlaties turpināt?",
    L"Atslēgas netika atrastas {0} instalācijā(s).",
    L"Netika atrastas neviena Office instalācija.",
    L"Veiksmīgi noņemtas {0} atslēga(as) no {1} instalācijas(ām).{2}",
    L"Aprēķina...",
    L"Atcelt",
    L"Mēģināt vēlreiz",
    L"Noņemt Office atslēgas",
    L"Tiek noņemta atslēga %s...",
    L"odt.exe nav atrasts mapē packages.",
    L"Mape packages nav atrasta."
};

// ----------------------------------------------------------------------
// Estonian
// ----------------------------------------------------------------------
static const UiStrings gUiEt = {
    L"Microsoft Office'i installija",
    L"Kanal:",
    L"Toode:",
    L"Arhitektuur:",
    L"Keel:",
    L"Installimise asukoht:",
    L"Sirvi",
    L"Installi",
    L"Sulge rakendus",
    L"Peamenüü",
    L"Installimine, palun oodake...",
    L"Microsofti installimine lõppes edukalt.",
    L"Palun valige kõik valikud.",
    L"Palun määrake installimise tee.",
    L"odt.exe kopeerimine ebaõnnestus.",
    L"config.xml kirjutamine ebaõnnestus.",
    L"Office'i installija käivitamine ebaõnnestus.",
    L"Valitud asukohas pole piisavalt vaba ruumi.",
    L"Valige installimise kaust",
    L"Loo autorun.inf",
    L"autorun.inf kirjutamine ebaõnnestus.",
    L"Eemalda kõik Office'i võtmed",
    L"Hoiatus: Hävitav tegevus",
    L"See tegevus KUSTUTAB kõik Office'i aktiveerimisvõtmed kõigist selles arvutis olevatest Office'i versioonidest. Nõuab administraatori õigusi. Kas olete kindel, et soovite jätkata?",
    L"Võtmeid ei leitud {0} installimise(st).",
    L"Office'i installimisi ei leitud.",
    L"Edukalt eemaldati {0} võtit {1} installimisest.{2}",
    L"Arvutamine...",
    L"Loobu",
    L"Proovi uuesti",
    L"Eemalda Office'i võtmed",
    L"Võtme %s eemaldamine...",
    L"odt.exe ei leitud kaustast packages.",
    L"Kausta packages ei leitud."
};

// ----------------------------------------------------------------------
// Serbian (Latin)
// ----------------------------------------------------------------------
static const UiStrings gUiSrLatn = {
    L"Microsoft Office instalater",
    L"Kanal:",
    L"Proizvod:",
    L"Arhitektura:",
    L"Jezik:",
    L"Instaliraj u:",
    L"Pretraži",
    L"Instaliraj",
    L"Zatvori aplikaciju",
    L"Glavni meni",
    L"Instalacija u toku, sačekajte...",
    L"Microsoft instalacija je uspešno završena.",
    L"Molimo izaberite sve opcije.",
    L"Molimo navedite putanju za instalaciju.",
    L"Kopiranje odt.exe nije uspelo.",
    L"Pisanje config.xml nije uspelo.",
    L"Pokretanje Office instalatera nije uspelo.",
    L"Nema dovoljno slobodnog prostora na izabranoj lokaciji.",
    L"Izaberite fasciklu za instalaciju",
    L"Generiši autorun.inf",
    L"Pisanje autorun.inf nije uspelo.",
    L"Ukloni sve Office ključeve",
    L"Upozorenje: Destruktivna radnja",
    L"Ova radnja će IZBRISATI SVE Office aktivacione ključeve iz SVIH instaliranih Office verzija na ovom računaru. Zahteva administratorske privilegije. Da li ste sigurni da želite da nastavite?",
    L"Nisu pronađeni ključevi u {0} instalaciji(ama).",
    L"Nisu pronađene Office instalacije.",
    L"Uspešno uklonjeno {0} ključ(eva) iz {1} instalacije(a).{2}",
    L"Izračunavanje...",
    L"Otkaži",
    L"Pokušaj ponovo",
    L"Ukloni Office ključeve",
    L"Uklanjanje ključa %s...",
    L"odt.exe nije pronađen u fascikli packages.",
    L"Fascikla packages nije pronađena."
};

// ----------------------------------------------------------------------
// Serbian (Cyrillic)
// ----------------------------------------------------------------------
static const UiStrings gUiSrCyrl = {
    L"Microsoft Office инсталатер",
    L"Канал:",
    L"Производ:",
    L"Архитектура:",
    L"Језик:",
    L"Инсталирај у:",
    L"Претражи",
    L"Инсталирај",
    L"Затвори апликацију",
    L"Главни мени",
    L"Инсталација у току, сачекајте...",
    L"Microsoft инсталација је успешно завршена.",
    L"Молимо изаберите све опције.",
    L"Молимо наведите путању за инсталацију.",
    L"Копирање odt.exe није успело.",
    L"Писање config.xml није успело.",
    L"Покретање Office инсталатера није успело.",
    L"Нема довољно слободног простора на изабраној локацији.",
    L"Изаберите фасциклу за инсталацију",
    L"Генериши autorun.inf",
    L"Писање autorun.inf није успело.",
    L"Уклони све Office кључеве",
    L"Упозорење: Деструктивна радња",
    L"Ова радња ће ИЗБРИСАТИ СВЕ Office активационе кључеве из СВИХ инсталираних Office верзија на овом рачунару. Захтева администраторске привилегије. Да ли сте сигурни да желите да наставите?",
    L"Нису пронађени кључеви у {0} инсталацији(ама).",
    L"Нису пронађене Office инсталације.",
    L"Успешно уклоњено {0} кључ(ева) из {1} инсталације(а).{2}",
    L"Израчунавање...",
    L"Откажи",
    L"Покушај поново",
    L"Уклони Office кључеве",
    L"Уклањање кључа %s...",
    L"odt.exe није пронађен у фасцикли packages.",
    L"Фасцикла packages није пронађена."
};

// ----------------------------------------------------------------------
// Malay
// ----------------------------------------------------------------------
static const UiStrings gUiMs = {
    L"Pemasang Microsoft Office",
    L"Saluran:",
    L"Produk:",
    L"Seni bina:",
    L"Bahasa:",
    L"Pasang ke:",
    L"Layar",
    L"Pasang",
    L"Tutup aplikasi",
    L"Menu Utama",
    L"Sedang memasang, sila tunggu...",
    L"Pemasangan Microsoft berjaya diselesaikan.",
    L"Sila pilih semua pilihan.",
    L"Sila nyatakan laluan pemasangan.",
    L"Gagal menyalin odt.exe.",
    L"Gagal menulis config.xml.",
    L"Gagal memulakan pemasang Office.",
    L"Ruang kosong tidak mencukupi di lokasi yang dipilih.",
    L"Pilih folder pemasangan",
    L"Hasilkan autorun.inf",
    L"Gagal menulis autorun.inf.",
    L"Buang semua kunci Office",
    L"Amaran: Tindakan merosakkan",
    L"Tindakan ini akan MEMADAM SEMUA kunci pengaktifan Office dari SEMUA versi Office yang dipasang pada komputer ini. Memerlukan keistimewaan pentadbir. Adakah anda pasti mahu meneruskan?",
    L"Tiada kunci ditemui dalam {0} pemasangan.",
    L"Tiada pemasangan Office ditemui.",
    L"Berjaya membuang {0} kunci daripada {1} pemasangan.{2}",
    L"Mengira...",
    L"Batal",
    L"Cuba Semula",
    L"Buang Kunci Office",
    L"Membuang kunci %s...",
    L"odt.exe tidak dijumpai dalam folder packages.",
    L"Folder packages tidak dijumpai."
};

// ----------------------------------------------------------------------
// Filipino
// ----------------------------------------------------------------------
static const UiStrings gUiFil = {
    L"Tagapag-install ng Microsoft Office",
    L"Channel:",
    L"Produkto:",
    L"Arkitektura:",
    L"Wika:",
    L"I-install sa:",
    L"Mag-browse",
    L"I-install",
    L"Isara ang app",
    L"Pangunahing Menu",
    L"Nag-i-install, mangyaring maghintay...",
    L"Matagumpay na natapos ang pag-install ng Microsoft.",
    L"Mangyaring piliin ang lahat ng opsyon.",
    L"Mangyaring tukuyin ang path ng pag-install.",
    L"Nabigong kopyahin ang odt.exe.",
    L"Nabigong isulat ang config.xml.",
    L"Nabigong simulan ang tagapag-install ng Office.",
    L"Walang sapat na libreng espasyo sa napiling lokasyon.",
    L"Piliin ang folder ng pag-install",
    L"Bumuo ng autorun.inf",
    L"Nabigong isulat ang autorun.inf.",
    L"Alisin ang lahat ng Office key",
    L"Babala: Mapanirang aksyon",
    L"Ang aksyon na ito ay BUBURAHIN ang LAHAT ng Office activation key mula sa LAHAT ng naka-install na bersyon ng Office sa computer na ito. Nangangailangan ito ng mga pribilehiyo ng administrator. Sigurado ka bang nais mong magpatuloy?",
    L"Walang nakitang key sa {0} (mga) pag-install.",
    L"Walang nakitang pag-install ng Office.",
    L"Matagumpay na naalis ang {0} (mga) key mula sa {1} (mga) pag-install.{2}",
    L"Kinakalkula...",
    L"Kanselahin",
    L"Subukang muli",
    L"Alisin ang mga Office Key",
    L"Inaalis ang key %s...",
    L"Hindi natagpuan ang odt.exe sa folder ng packages.",
    L"Hindi natagpuan ang folder ng packages."
};

// ----------------------------------------------------------------------
// Irish
// ----------------------------------------------------------------------
static const UiStrings gUiGa = {
    L"Suiteálaí Microsoft Office",
    L"Cainéal:",
    L"Táirge:",
    L"Ailtireacht:",
    L"Teanga:",
    L"Suiteáil go:",
    L"Brabhsáil",
    L"Suiteáil",
    L"Dún an aip",
    L"Príomhroghchlár",
    L"Ag suiteáil, fan le do thoil...",
    L"Chríochnaigh suiteálaí Microsoft go rathúil.",
    L"Roghnaigh na roghanna go léir le do thoil.",
    L"Sonraigh cosán suiteála le do thoil.",
    L"Theip ar odt.exe a chóipeáil.",
    L"Theip ar config.xml a scríobh.",
    L"Theip ar thosú ar shuiteálaí Office.",
    L"Níl go leor spáis saor in aisce sa suíomh roghnaithe.",
    L"Roghnaigh fillteán suiteála",
    L"Gin autorun.inf",
    L"Theip ar autorun.inf a scríobh.",
    L"Bain gach eochair Office",
    L"Rabhadh: Gníomh millteach",
    L"Scriosfaidh an ghníomh seo GACH eochair ghníomhachtaithe Office ó GACH leagan de Office atá suiteáilte ar an ríomhaire seo. Teastaíonn pribhléidí riarthóra. An bhfuil tú cinnte gur mhaith leat leanúint ar aghaidh?",
    L"Níor aimsíodh aon eochracha i {0} shuiteáil.",
    L"Níor aimsíodh aon shuiteáil Office.",
    L"D'éirigh le {0} eochair(ocha) a bhaint as {1} shuiteáil(í).{2}",
    L"Á ríomh...",
    L"Cealaigh",
    L"Bain triail eile as",
    L"Bain Eochracha Office",
    L"Ag baint eochair %s...",
    L"Níor aimsíodh odt.exe san fhillteán packages.",
    L"Níor aimsíodh an fillteán packages."
};

// ----------------------------------------------------------------------
// Datele pentru About (fiecare limbă)
// ----------------------------------------------------------------------
static const AboutStrings gAboutEn = {
    L"About application",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Developed, published and electronically signed with a 2026 timestamp for Microsoft Windows by Andreea Mirela Cristea - InnovationX SRL, a citizen of the European Union, in Romania.\r\n\r\n"
    L"This application was created for educational purposes, using publicly available information and based on Microsoft Office Deployment Tool. The program copies the Microsoft Deployment Tool (odt.exe) from the packages folder located in the current directory (./packages/odt.exe) to the location selected by the user and starts it with the parameters required to install the chosen Microsoft Office edition. Microsoft Deployment Tool then downloads the required files, approximately 5 GB, into the same location and completes the installation automatically.\r\n\r\n"
    L"The program is designed to work with Microsoft Deployment Tool version 16.0.17531.20046. Other versions may not be compatible. The user can test other versions by placing the appropriate odt.exe in the packages folder.\r\n\r\n"
    L"Additional features:\r\n"
    L"• Generate autorun.inf with the currently selected settings.\r\n"
    L"• Remove all activation keys from any installed Office version (requires elevation).\r\n\r\n"
    L"This application does not accept the EULA automatically; acceptance remains the user's responsibility in the Microsoft Deployment Tool window after it starts. Microsoft Deployment Tool is also not run silently: the graphical interface is shown every time.",
    L"Open Microsoft Learn",
    L"Close"
};

static const AboutStrings gAboutZhCN = {
    L"关于",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL。本软件由欧盟公民 Andreea Mira Cristea 于 2026 年在罗马尼亚开发、发布并进行了带时间戳的电子签名，适用于 Microsoft Windows。\r\n\r\n"
    L"本程序出于教育目的，基于公开信息和 Microsoft Office Deployment Tool 创建。程序将 Microsoft Deployment Tool (odt.exe) 从当前目录中的 packages 文件夹（./packages/odt.exe）复制到用户选择的位置，并使用所需参数启动它以安装所选版本的 Microsoft Office。随后，Microsoft Deployment Tool 会在同一位置下载约 5 GB 的所需文件并自动完成安装。\r\n\r\n"
    L"本程序设计为与 Microsoft Deployment Tool 版本 16.0.17531.20046 配合使用。其他版本可能不兼容。用户可以通过将相应的 odt.exe 放置在 packages 文件夹中来测试其他版本。\r\n\r\n"
    L"附加功能：\r\n"
    L"• 使用当前选择的设置生成 autorun.inf。\r\n"
    L"• 从任何已安装的 Office 版本中删除所有激活密钥（需要管理员权限）。\r\n\r\n"
    L"本程序不会自动接受 EULA；用户需在 Microsoft Deployment Tool 启动后的窗口中自行接受。Microsoft Deployment Tool 也不会以静默方式运行：图形界面将强制显示。",
    L"打开 Microsoft Learn",
    L"关闭"
};

static const AboutStrings gAboutZhTW = {
    L"關於",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL。本軟體由歐盟公民 Andreea Mira Cristea 於 2026 年在羅馬尼亞開發、發布並進行了帶時間戳的電子簽名，適用於 Microsoft Windows。\r\n\r\n"
    L"本程式出於教育目的，基於公開資訊和 Microsoft Office Deployment Tool 建立。程式將 Microsoft Deployment Tool (odt.exe) 從目前目錄中的 packages 資料夾（./packages/odt.exe）複製到使用者選擇的位置，並使用所需參數啟動它以安裝所選版本的 Microsoft Office。隨後，Microsoft Deployment Tool 會在同一位置下載約 5 GB 的所需檔案並自動完成安裝。\r\n\r\n"
    L"本程式設計為與 Microsoft Deployment Tool 版本 16.0.17531.20046 搭配使用。其他版本可能不相容。使用者可以透過將對應的 odt.exe 放置在 packages 資料夾中來測試其他版本。\r\n\r\n"
    L"附加功能：\r\n"
    L"• 使用目前選擇的設定產生 autorun.inf。\r\n"
    L"• 從任何已安裝的 Office 版本中移除所有啟用金鑰（需要系統管理員權限）。\r\n\r\n"
    L"本程式不會自動接受 EULA；使用者需在 Microsoft Deployment Tool 啟動後的視窗中自行接受。Microsoft Deployment Tool 也不會以無訊息模式執行：圖形介面將強制顯示。",
    L"開啟 Microsoft Learn",
    L"關閉"
};

static const AboutStrings gAboutRo = {
    L"Despre aplicație",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Dezvoltată, publicată și semnată electronic cu timestamp în 2026 pentru Microsoft Windows de către Andreea Mirela Cristea - InnovationX SRL, cetățean al Uniunii Europene, în România.\r\n\r\n"
    L"Această aplicație a fost creată în scop educațional, folosind informații disponibile public și bazată pe Microsoft Office Deployment Tool. Programul copiază utilitarul Microsoft Deployment Tool (odt.exe) din folderul packages aflat în directorul curent (./packages/odt.exe) în locația aleasă de utilizator și îl pornește cu parametrii necesari pentru a instala ediția de Microsoft Office selectată. Ulterior, Microsoft Deployment Tool descarcă fișierele necesare, aproximativ 5 GB, în aceeași locație și finalizează automat instalarea.\r\n\r\n"
    L"Programul este conceput să funcționeze cu Microsoft Deployment Tool versiunea 16.0.17531.20046. Alte versiuni pot să nu fie compatibile. Utilizatorul poate testa alte versiuni plasând odt.exe corespunzător în folderul packages.\r\n\r\n"
    L"Funcționalități suplimentare:\r\n"
    L"• Generare autorun.inf cu setările selectate curent.\r\n"
    L"• Eliminarea tuturor cheilor de activare din orice versiune Office instalată (necesită drepturi de administrator).\r\n\r\n"
    L"Aplicația nu acceptă automat EULA; acceptarea rămâne în responsabilitatea utilizatorului în fereastra Microsoft Deployment Tool după pornire. De asemenea, Microsoft Deployment Tool nu este rulat în mod silențios: interfața grafică este afișată obligatoriu.",
    L"Deschide Microsoft Learn",
    L"Închide"
};

static const AboutStrings gAboutBg = {
    L"За приложението",
    L"(GPL-2.0-only) 2026 Андрея Мирела Кръстеа. Разработено, публикувано и електронно подписано с времеви печат за 2026 г. за Microsoft Windows от Андрея Мирела Кръстеа, гражданин на Европейския съюз, в Румъния.\r\n\r\n"
    L"Това приложение е създадено за образователни цели, използвайки публично достъпна информация и базирано на Microsoft Office Deployment Tool. Програмата копира Microsoft Deployment Tool (odt.exe) от папката packages, намираща се в текущата директория (./packages/odt.exe) в избраната от потребителя локация и го стартира с необходимите параметри за инсталиране на избраното издание на Microsoft Office. След това Microsoft Deployment Tool изтегля необходимите файлове, приблизително 5 GB, в същата локация и завършва автоматично инсталацията.\r\n\r\n"
    L"Програмата е предназначена да работи с Microsoft Deployment Tool версия 16.0.17531.20046. Други версии може да не са съвместими. Потребителят може да тества други версии, като постави съответния odt.exe в папката packages.\r\n\r\n"
    L"Допълнителни функции:\r\n"
    L"• Генериране на autorun.inf с текущо избраните настройки.\r\n"
    L"• Премахване на всички активационни ключове от всяка инсталирана версия на Office (изисква администраторски права).\r\n\r\n"
    L"Приложението не приема автоматично EULA; приемането остава изцяло отговорност на потребителя в прозореца на Microsoft Deployment Tool след стартиране. Microsoft Deployment Tool също не се стартира без интерфейс: графичният прозорец се показва задължително.",
    L"Отвори Microsoft Learn",
    L"Затвори"
};

static const AboutStrings gAboutHu = {
    L"Az alkalmazásról",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. 2026-os időbélyeggel, a Microsoft Windows rendszerhez fejlesztve, közzétéve és elektronikus aláírással ellátva Andreea Mirela Cristea - InnovationX SRL által, az Európai Unió állampolgáraként, Romániában.\r\n\r\n"
    L"Ez az alkalmazás oktatási célból készült, nyilvánosan elérhető információk felhasználásával, a Microsoft Office Deployment Tool alapjaira építve. A program a felhasználó által kiválasztott helyre másolja a Microsoft Deployment Tool-t (odt.exe) az aktuális könyvtárban lévő packages mappából (./packages/odt.exe), majd az Office kiválasztott kiadásának telepítéséhez szükséges paraméterekkel indítja el. Ezt követően a Microsoft Deployment Tool a szükséges fájlokat nagyjából 5 GB-ot ugyanabba a mappába tölti le, és automatikusan befejezi a telepítést.\r\n\r\n"
    L"A program a Microsoft Deployment Tool 16.0.17531.20046 verziójával való használatra lett tervezve. Más verziók nem feltétlenül kompatibilisek. A felhasználó más verziókat is tesztelhet, ha a megfelelő odt.exe-t a packages mappába helyezi.\r\n\r\n"
    L"További funkciók:\r\n"
    L"• autorun.inf generálása az aktuálisan kiválasztott beállításokkal.\r\n"
    L"• Az összes aktivációs kulcs eltávolítása bármely telepített Office verzióból (rendszergazdai jogosultság szükséges).\r\n\r\n"
    L"Az alkalmazás nem fogadja el automatikusan az EULA-t; annak elfogadása a felhasználó felelőssége a Microsoft Deployment Tool ablakában az indítás után. A Microsoft Deployment Tool nem csendes módban fut: a grafikus felület minden esetben megjelenik.",
    L"Microsoft Learn megnyitása",
    L"Bezárás"
};

static const AboutStrings gAboutEl = {
    L"Σχετικά με την εφαρμογή",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Αναπτύχθηκε, δημοσιεύτηκε και υπογράφηκε ηλεκτρονικά με χρονική σήμανση για το 2026 για Microsoft Windows από την Andreea Mirela Cristea - InnovationX SRL, πολίτη της Ευρωπαϊκής Ένωσης, στη Ρουμανία.\r\n\r\n"
    L"Αυτή η εφαρμογή δημιουργήθηκε για εκπαιδευτικούς σκοπούς, χρησιμοποιώντας δημόσια διαθέσιμες πληροφορίες και βασισμένη στο Microsoft Office Deployment Tool. Το πρόγραμμα αντιγράφει το Microsoft Deployment Tool (odt.exe) από το φάκελο packages που βρίσκεται στον τρέχοντα κατάλογο (./packages/odt.exe) στη θέση που επιλέγει ο χρήστης και το εκκινεί με τις παραμέτρους που απαιτούνται για την εγκατάσταση της επιλεγμένης έκδοσης του Microsoft Office. Στη συνέχεια, το Microsoft Deployment Tool κατεβάζει τα απαραίτητα αρχεία περίπου 5 GB στην ίδια θέση και ολοκληρώνει αυτόματα την εγκατάσταση.\r\n\r\n"
    L"Το πρόγραμμα έχει σχεδιαστεί για να λειτουργεί με την έκδοση 16.0.17531.20046 του Microsoft Deployment Tool. Άλλες εκδόσεις μπορεί να μην είναι συμβατές. Ο χρήστης μπορεί να δοκιμάσει άλλες εκδόσεις τοποθετώντας το κατάλληλο odt.exe στο φάκελο packages.\r\n\r\n"
    L"Πρόσθετες λειτουργίες:\r\n"
    L"• Δημιουργία autorun.inf με τις τρέχουσες επιλεγμένες ρυθμίσεις.\r\n"
    L"• Κατάργηση όλων των κλειδιών ενεργοποίησης από οποιαδήποτε εγκατεστημένη έκδοση Office (απαιτεί δικαιώματα διαχειριστή).\r\n\r\n"
    L"Η εφαρμογή δεν αποδέχεται αυτόματα το EULA· η αποδοχή παραμένει ευθύνη του χρήστη στο παράθυρο του Microsoft Deployment Tool μετά την εκκίνησή του. Επίσης, το Microsoft Deployment Tool δεν εκτελείται αθόρυβα: η γραφική διεπαφή εμφανίζεται υποχρεωτικά.",
    L"Άνοιγμα Microsoft Learn",
    L"Κλείσιμο"
};

static const AboutStrings gAboutTr = {
    L"Uygulama hakkında",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. 2026 zaman damgasıyla Microsoft Windows için geliştirilmiş, yayımlanmış ve elektronik olarak imzalanmıştır; geliştirici Andreea Mirela Cristea - InnovationX SRL, Avrupa Birliği vatandaşıdır ve Romanya'dadır.\r\n\r\n"
    L"Bu uygulama, kamuya açık bilgiler kullanılarak ve Microsoft Office Deployment Tool temel alınarak eğitim amaçlı geliştirilmiştir. Program, kullanıcı tarafından seçilen konuma, geçerli dizindeki packages klasöründen (./packages/odt.exe) Microsoft Deployment Tool'u (odt.exe) kopyalar ve seçilen Microsoft Office sürümünü yüklemek için gerekli parametrelerle çalıştırır. Ardından Microsoft Deployment Tool gerekli dosyaları yaklaşık 5 GB aynı konuma indirir ve kurulumu otomatik olarak tamamlar.\r\n\r\n"
    L"Program, Microsoft Deployment Tool sürüm 16.0.17531.20046 ile çalışacak şekilde tasarlanmıştır. Diğer sürümler uyumlu olmayabilir. Kullanıcı, uygun odt.exe'yi packages klasörüne yerleştirerek diğer sürümleri test edebilir.\r\n\r\n"
    L"Ek özellikler:\r\n"
    L"• Şu anda seçili ayarlarla autorun.inf oluşturma.\r\n"
    L"• Yüklü herhangi bir Office sürümünden tüm etkinleştirme anahtarlarını kaldırma (yönetici ayrıcalığı gerektirir).\r\n\r\n"
    L"Uygulama EULA'yı otomatik olarak kabul etmez; kabul işlemi başlatıldıktan sonra Microsoft Deployment Tool penceresinde kullanıcıya aittir. Ayrıca Microsoft Deployment Tool sessiz modda çalıştırılmaz: grafik arayüz her seferinde zorunlu olarak gösterilir.",
    L"Microsoft Learn'i aç",
    L"Kapat"
};

static const AboutStrings gAboutJa = {
    L"アプリについて",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL。2026年のタイムスタンプ付きで、Microsoft Windows 向けに開発・公開・電子署名されたものです。開発者は欧州連合市民である Andreea Mirela Cristea - InnovationX SRL です。制作地はルーマニアです。\r\n\r\n"
    L"このアプリは、公開されている情報をもとに、教育目的で Microsoft Office Deployment Tool を基盤として作成されています。ユーザーが選択した場所に、カレントディレクトリの packages フォルダー (./packages/odt.exe) から Microsoft Deployment Tool (odt.exe) をコピーし、選択した Microsoft Office エディションをインストールするために必要なパラメーター付きで起動します。その後、Microsoft Deployment Tool は必要なファイル（約 5 GB）を同じ場所にダウンロードし、インストールを自動で完了します。\r\n\r\n"
    L"このプログラムは Microsoft Deployment Tool バージョン 16.0.17531.20046 で動作するように設計されています。他のバージョンは互換性がない可能性があります。ユーザーは、適切な odt.exe を packages フォルダーに配置することで、他のバージョンをテストできます。\r\n\r\n"
    L"追加機能:\r\n"
    L"• 現在選択されている設定で autorun.inf を生成します。\r\n"
    L"• インストールされている任意の Office バージョンからすべてのライセンス認証キーを削除します（管理者権限が必要です）。\r\n\r\n"
    L"EULA は自動承諾されず、起動後の Microsoft Deployment Tool ウィンドウでユーザーが承諾する必要があります。また、Microsoft Deployment Tool はサイレント実行されず、毎回 GUI が表示されます。",
    L"Microsoft Learn を開く",
    L"閉じる"
};

static const AboutStrings gAboutEs = {
    L"Acerca de la aplicación",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Desarrollada, publicada y firmada electrónicamente con marca temporal de 2026 para Microsoft Windows por Andreea Mirela Cristea - InnovationX SRL, ciudadana de la Unión Europea, en Rumanía.\r\n\r\n"
    L"Esta aplicación fue creada con fines educativos, utilizando información disponible públicamente y basada en Microsoft Office Deployment Tool. El programa copia Microsoft Deployment Tool (odt.exe) desde la carpeta packages ubicada en el directorio actual (./packages/odt.exe) en la ubicación seleccionada por el usuario y lo inicia con los parámetros necesarios para instalar la edición elegida de Microsoft Office. Después, Microsoft Deployment Tool descarga los archivos necesarios aproximadamente 5 GB en la misma ubicación y completa la instalación automáticamente.\r\n\r\n"
    L"El programa está diseñado para funcionar con Microsoft Deployment Tool versión 16.0.17531.20046. Es posible que otras versiones no sean compatibles. El usuario puede probar otras versiones colocando el odt.exe correspondiente en la carpeta packages.\r\n\r\n"
    L"Características adicionales:\r\n"
    L"• Generar autorun.inf con la configuración actual seleccionada.\r\n"
    L"• Eliminar todas las claves de activación de cualquier versión de Office instalada (requiere privilegios de administrador).\r\n\r\n"
    L"La aplicación no acepta la EULA automáticamente; la aceptación queda a cargo del usuario en la ventana de Microsoft Deployment Tool una vez iniciada. Además, Microsoft Deployment Tool no se ejecuta en modo silencioso: la interfaz gráfica se muestra obligatoriamente.",
    L"Abrir Microsoft Learn",
    L"Cerrar"
};

static const AboutStrings gAboutFr = {
    L"À propos de l'application",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Développée, publiée et signée électroniquement avec un horodatage 2026 pour Microsoft Windows par Andreea Mirela Cristea - InnovationX SRL, citoyenne de l'Union européenne, en Roumanie.\r\n\r\n"
    L"Cette application a été créée à des fins éducatives, à partir d'informations publiques et basée sur Microsoft Office Deployment Tool. Le programme copie Microsoft Deployment Tool (odt.exe) depuis le dossier packages situé dans le répertoire courant (./packages/odt.exe) vers l'emplacement choisi par l'utilisateur et le lance avec les paramètres nécessaires pour installer l'édition Microsoft Office souhaitée. Microsoft Deployment Tool télécharge ensuite les fichiers requis environ 5 Go dans le même emplacement et termine l'installation automatiquement.\r\n\r\n"
    L"Le programme est conçu pour fonctionner avec Microsoft Deployment Tool version 16.0.17531.20046. D'autres versions peuvent ne pas être compatibles. L'utilisateur peut tester d'autres versions en plaçant le odt.exe approprié dans le dossier packages.\r\n\r\n"
    L"Fonctionnalités supplémentaires :\r\n"
    L"• Générer autorun.inf avec les paramètres actuellement sélectionnés.\r\n"
    L"• Supprimer toutes les clés d'activation de toute version d'Office installée (nécessite des privilèges d'administrateur).\r\n\r\n"
    L"L'application n'accepte pas automatiquement le CLUF ; l'acceptation reste à la charge de l'utilisateur dans la fenêtre Microsoft Deployment Tool après son démarrage. Microsoft Deployment Tool n'est pas non plus exécuté en mode silencieux : l'interface graphique est affichée obligatoirement.",
    L"Ouvrir Microsoft Learn",
    L"Fermer"
};

static const AboutStrings gAboutSk = {
    L"O aplikácii",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Vyvinuté, publikované a elektronicky podpísané s časovou pečiatkou v roku 2026 pre Microsoft Windows od Andreei Mirely Cristea, občanky Európskej únie, v Rumunsku.\r\n\r\n"
    L"Táto aplikácia bola vytvorená na vzdelávacie účely, s použitím verejne dostupných informácií a na základe Microsoft Office Deployment Tool. Program skopíruje Microsoft Deployment Tool (odt.exe) z priečinka packages umiestneného v aktuálnom adresári (./packages/odt.exe) do umiestnenia zvoleného používateľom a spustí ho s parametrami potrebnými na inštaláciu vybratej edície Microsoft Office. Následne Microsoft Deployment Tool stiahne potrebné súbory približne 5 GB do toho istého umiestnenia a inštaláciu automaticky dokončí.\r\n\r\n"
    L"Program je navrhnutý na prácu s Microsoft Deployment Tool verzie 16.0.17531.20046. Iné verzie nemusia byť kompatibilné. Používateľ môže testovať iné verzie umiestnením príslušného odt.exe do priečinka packages.\r\n\r\n"
    L"Ďalšie funkcie:\r\n"
    L"• Generovanie autorun.inf s aktuálne vybranými nastaveniami.\r\n"
    L"• Odstránenie všetkých aktivačných kľúčov z akejkoľvek nainštalovanej verzie Office (vyžaduje administrátorské oprávnenia).\r\n\r\n"
    L"Aplikácia neakceptuje EULA automaticky; jej prijatie zostáva na používateľovi v okne Microsoft Deployment Tool po spustení. Microsoft Deployment Tool sa zároveň nespúšťa potichu: grafické rozhranie sa zobrazí vždy.",
    L"Otvoriť Microsoft Learn",
    L"Zavrieť"
};

static const AboutStrings gAboutCs = {
    L"O aplikaci",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Vyvinuto, publikováno a elektronicky podepsáno s časovým razítkem v roce 2026 pro Microsoft Windows, autorkou Andreea Mirela Cristea - InnovationX SRL, občankou Evropské unie, v Rumunsku.\r\n\r\n"
    L"Tato aplikace byla vytvořena pro vzdělávací účely s využitím veřejně dostupných informací a je založena na Microsoft Office Deployment Tool. Program zkopíruje Microsoft Deployment Tool (odt.exe) ze složky packages umístěné v aktuálním adresáři (./packages/odt.exe) do umístění zvoleného uživatelem a spustí jej s parametry potřebnými k instalaci vybrané edice Microsoft Office. Následně Microsoft Deployment Tool stáhne potřebné soubory přibližně 5 GB do stejného umístění a instalaci automaticky dokončí.\r\n\r\n"
    L"Program je navržen pro práci s Microsoft Deployment Tool verze 16.0.17531.20046. Jiné verze nemusí být kompatibilní. Uživatel může testovat jiné verze umístěním příslušného odt.exe do složky packages.\r\n\r\n"
    L"Další funkce:\r\n"
    L"• Generování autorun.inf s aktuálně vybranými nastaveními.\r\n"
    L"• Odstranění všech aktivačních klíčů z jakékoli nainstalované verze Office (vyžaduje oprávnění správce).\r\n\r\n"
    L"Aplikace automaticky nepřijímá EULA; přijetí zůstává na uživateli v okně Microsoft Deployment Tool po spuštění. Microsoft Deployment Tool také neběží v tichém režimu: grafické rozhraní je vždy zobrazeno.",
    L"Otevřít Microsoft Learn",
    L"Zavřít"
};

static const AboutStrings gAboutUk = {
    L"Про програму",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Розроблено, опубліковано та електронно підписано з часовою позначкою 2026 року для Microsoft Windows Андреєю Мірою Крістеа, громадянкою Європейського Союзу, в Румунії.\r\n\r\n"
    L"Цю програму створено з освітньою метою на основі загальнодоступної інформації та Microsoft Office Deployment Tool. Програма копіює Microsoft Deployment Tool (odt.exe) з папки packages, розташованої в поточному каталозі (./packages/odt.exe), до вибраного користувачем розташування та запускає його з параметрами, необхідними для встановлення вибраної редакції Microsoft Office. Після цього Microsoft Deployment Tool завантажує потрібні файли приблизно 5 ГБ у те саме розташування та автоматично завершує встановлення.\r\n\r\n"
    L"Програма розроблена для роботи з Microsoft Deployment Tool версії 16.0.17531.20046. Інші версії можуть бути несумісними. Користувач може тестувати інші версії, розмістивши відповідний odt.exe в папці packages.\r\n\r\n"
    L"Додаткові функції:\r\n"
    L"• Генерація autorun.inf з поточними вибраними налаштуваннями.\r\n"
    L"• Видалення всіх ключів активації з будь-якої встановленої версії Office (потребує прав адміністратора).\r\n\r\n"
    L"Програма не приймає EULA автоматично; прийняття лишається за користувачем у вікні Microsoft Deployment Tool після запуску. Також Microsoft Deployment Tool не запускається в тихому режимі: графічний інтерфейс обов’язково відображається.",
    L"Відкрити Microsoft Learn",
    L"Закрити"
};

static const AboutStrings gAboutDe = {
    L"Über die Anwendung",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Entwickelt, veröffentlicht und elektronisch mit Zeitstempel 2026 für Microsoft Windows signiert von Andreea Mirela Cristea - InnovationX SRL, einer Bürgerin der Europäischen Union, in Rumänien.\r\n\r\n"
    L"Diese Anwendung wurde zu Bildungszwecken erstellt, auf Basis öffentlich verfügbarer Informationen und auf Microsoft Office Deployment Tool aufbauend. Das Programm kopiert Microsoft Deployment Tool (odt.exe) aus dem Ordner packages im aktuellen Verzeichnis (./packages/odt.exe) in den vom Benutzer ausgewählten Ordner und startet es mit den erforderlichen Parametern, um die gewählte Microsoft-Office-Edition zu installieren. Anschließend lädt Microsoft Deployment Tool die benötigten Dateien etwa 5 GB in denselben Ordner herunter und schließt die Installation automatisch ab.\r\n\r\n"
    L"Das Programm ist für die Verwendung mit Microsoft Deployment Tool Version 16.0.17531.20046 ausgelegt. Andere Versionen sind möglicherweise nicht kompatibel. Der Benutzer kann andere Versionen testen, indem er die entsprechende odt.exe in den packages-Ordner legt.\r\n\r\n"
    L"Zusätzliche Funktionen:\r\n"
    L"• Generieren von autorun.inf mit den aktuell ausgewählten Einstellungen.\r\n"
    L"• Entfernen aller Aktivierungsschlüssel aus jeder installierten Office-Version (erfordert Administratorrechte).\r\n\r\n"
    L"Die Anwendung akzeptiert die EULA nicht automatisch; die Zustimmung liegt nach dem Start im Microsoft-Deployment-Tool-Fenster beim Benutzer. Außerdem wird Microsoft Deployment Tool nicht still im Hintergrund ausgeführt: Die grafische Oberfläche wird zwingend angezeigt.",
    L"Microsoft Learn öffnen",
    L"Schließen"
};

// ----------------------------------------------------------------------
// About variants
// ----------------------------------------------------------------------
static const AboutStrings gAboutEnUs = gAboutEn;
static const AboutStrings gAboutEnGb = gAboutEn;
static const AboutStrings gAboutEnAu = gAboutEn;
static const AboutStrings gAboutEnCa = gAboutEn;
static const AboutStrings gAboutEnNz = gAboutEn;
static const AboutStrings gAboutEnZa = gAboutEn;

static const AboutStrings gAboutDeAt = gAboutDe;
static const AboutStrings gAboutDeCh = gAboutDe;

static const AboutStrings gAboutFrBe = gAboutFr;
static const AboutStrings gAboutFrCa = gAboutFr;
static const AboutStrings gAboutFrCh = gAboutFr;

static const AboutStrings gAboutEsMx = gAboutEs;

static const AboutStrings gAboutIt = {
    L"Informazioni sull'applicazione",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Sviluppata, pubblicata e firmata elettronicamente con timestamp 2026 per Microsoft Windows da Andreea Mirela Cristea - InnovationX SRL, cittadina dell'Unione Europea, in Romania.\r\n\r\n"
    L"Questa applicazione è stata creata a scopo educativo, utilizzando informazioni disponibili al pubblico e basata su Microsoft Office Deployment Tool. Il programma copia Microsoft Deployment Tool (odt.exe) dalla cartella packages situata nella directory corrente (./packages/odt.exe) nella posizione scelta dall'utente e lo avvia con i parametri necessari per installare l'edizione di Microsoft Office selezionata. Microsoft Deployment Tool scarica quindi i file necessari, circa 5 GB, nella stessa posizione e completa automaticamente l'installazione.\r\n\r\n"
    L"Il programma è progettato per funzionare con Microsoft Deployment Tool versione 16.0.17531.20046. Altre versioni potrebbero non essere compatibili. L'utente può testare altre versioni inserendo il corrispondente odt.exe nella cartella packages.\r\n\r\n"
    L"Funzionalità aggiuntive:\r\n"
    L"• Genera autorun.inf con le impostazioni attualmente selezionate.\r\n"
    L"• Rimuovi tutte le chiavi di attivazione da qualsiasi versione di Office installata (richiede privilegi di amministratore).\r\n\r\n"
    L"L'applicazione non accetta automaticamente il contratto di licenza; l'accettazione rimane responsabilità dell'utente nella finestra di Microsoft Deployment Tool dopo l'avvio. Microsoft Deployment Tool inoltre non viene eseguito in modalità invisibile: l'interfaccia grafica viene mostrata ogni volta.",
    L"Apri Microsoft Learn",
    L"Chiudi"
};

static const AboutStrings gAboutPtPt = {
    L"Sobre a aplicação",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Desenvolvido, publicado e assinado eletronicamente com um carimbo temporal de 2026 para Microsoft Windows por Andreea Mirela Cristea - InnovationX SRL, cidadã da União Europeia, na Roménia.\r\n\r\n"
    L"Esta aplicação foi criada para fins educativos, utilizando informações publicamente disponíveis e baseada no Microsoft Office Deployment Tool. O programa copia o Microsoft Deployment Tool (odt.exe) da pasta packages localizada no diretório atual (./packages/odt.exe) para a localização selecionada pelo utilizador e inicia-o com os parâmetros necessários para instalar a edição do Microsoft Office escolhida. O Microsoft Deployment Tool descarrega então os ficheiros necessários, aproximadamente 5 GB, na mesma localização e conclui a instalação automaticamente.\r\n\r\n"
    L"O programa foi concebido para funcionar com a versão 16.0.17531.20046 do Microsoft Deployment Tool. Outras versões podem não ser compatíveis. O utilizador pode testar outras versões colocando o odt.exe apropriado na pasta packages.\r\n\r\n"
    L"Funcionalidades adicionais:\r\n"
    L"• Gerar autorun.inf com as definições atualmente selecionadas.\r\n"
    L"• Remover todas as chaves de ativação de qualquer versão do Office instalada (requer privilégios de administrador).\r\n\r\n"
    L"Esta aplicação não aceita automaticamente o EULA; a aceitação continua a ser da responsabilidade do utilizador na janela do Microsoft Deployment Tool após o seu início. O Microsoft Deployment Tool também não é executado silenciosamente: a interface gráfica é mostrada todas as vezes.",
    L"Abrir Microsoft Learn",
    L"Fechar"
};

static const AboutStrings gAboutPtBr = {
    L"Sobre o aplicativo",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Desenvolvido, publicado e assinado eletronicamente com timestamp de 2026 para Microsoft Windows por Andreea Mirela Cristea - InnovationX SRL, cidadã da União Europeia, na Romênia.\r\n\r\n"
    L"Este aplicativo foi criado para fins educacionais, usando informações publicamente disponíveis e baseado no Microsoft Office Deployment Tool. O programa copia o Microsoft Deployment Tool (odt.exe) da pasta packages localizada no diretório atual (./packages/odt.exe) para o local selecionado pelo usuário e o inicia com os parâmetros necessários para instalar a edição do Microsoft Office escolhida. Em seguida, o Microsoft Deployment Tool baixa os arquivos necessários, aproximadamente 5 GB, para o mesmo local e conclui a instalação automaticamente.\r\n\r\n"
    L"O programa foi projetado para funcionar com o Microsoft Deployment Tool versão 16.0.17531.20046. Outras versões podem não ser compatíveis. O usuário pode testar outras versões colocando o odt.exe apropriado na pasta packages.\r\n\r\n"
    L"Recursos adicionais:\r\n"
    L"• Gerar autorun.inf com as configurações atualmente selecionadas.\r\n"
    L"• Remover todas as chaves de ativação de qualquer versão do Office instalada (requer privilégios de administrador).\r\n\r\n"
    L"Este aplicativo não aceita automaticamente o EULA; a aceitação continua sendo de responsabilidade do usuário na janela do Microsoft Deployment Tool após a inicialização. O Microsoft Deployment Tool também não é executado silenciosamente: a interface gráfica é exibida sempre.",
    L"Abrir Microsoft Learn",
    L"Fechar"
};

static const AboutStrings gAboutRu = {
    L"О приложении",
    L"(GPL-2.0-only) 2026 Андрея Мирела Кристя. Разработано, опубликовано и электронно подписано с отметкой времени 2026 года для Microsoft Windows Андреей Мирелой Кристя, гражданкой Европейского Союза, в Румынии.\r\n\r\n"
    L"Это приложение было создано в образовательных целях с использованием общедоступной информации и на основе Microsoft Office Deployment Tool. Программа копирует Microsoft Deployment Tool (odt.exe) из папки packages, расположенной в текущем каталоге (./packages/odt.exe), в место, выбранное пользователем, и запускает его с параметрами, необходимыми для установки выбранного выпуска Microsoft Office. Затем Microsoft Deployment Tool загружает необходимые файлы (около 5 ГБ) в то же место и автоматически завершает установку.\r\n\r\n"
    L"Программа предназначена для работы с Microsoft Deployment Tool версии 16.0.17531.20046. Другие версии могут быть несовместимы. Пользователь может протестировать другие версии, поместив соответствующий odt.exe в папку packages.\r\n\r\n"
    L"Дополнительные возможности:\r\n"
    L"• Создание autorun.inf с текущими выбранными настройками.\r\n"
    L"• Удаление всех ключей активации из любой установленной версии Office (требует прав администратора).\r\n\r\n"
    L"Приложение не принимает лицензионное соглашение автоматически; его принятие остается на усмотрение пользователя в окне Microsoft Deployment Tool после запуска. Microsoft Deployment Tool также не запускается в тихом режиме: графический интерфейс отображается всегда.",
    L"Открыть Microsoft Learn",
    L"Закрыть"
};

static const AboutStrings gAboutPl = {
    L"O aplikacji",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Opracowana, opublikowana i podpisana elektronicznie ze stemplem czasu 2026 dla Microsoft Windows przez Andreeę Mirelę Cristea, obywatelkę Unii Europejskiej, w Rumunii.\r\n\r\n"
    L"Ta aplikacja została stworzona do celów edukacyjnych, przy użyciu publicznie dostępnych informacji i w oparciu o Microsoft Office Deployment Tool. Program kopiuje Microsoft Deployment Tool (odt.exe) z folderu packages znajdującego się w bieżącym katalogu (./packages/odt.exe) do lokalizacji wybranej przez użytkownika i uruchamia go z parametrami wymaganymi do zainstalowania wybranej edycji Microsoft Office. Następnie Microsoft Deployment Tool pobiera wymagane pliki (około 5 GB) do tej samej lokalizacji i automatycznie kończy instalację.\r\n\r\n"
    L"Program został zaprojektowany do pracy z Microsoft Deployment Tool w wersji 16.0.17531.20046. Inne wersje mogą być niekompatybilne. Użytkownik może testować inne wersje, umieszczając odpowiedni plik odt.exe w folderze packages.\r\n\r\n"
    L"Dodatkowe funkcje:\r\n"
    L"• Generowanie autorun.inf z aktualnie wybranymi ustawieniami.\r\n"
    L"• Usuwanie wszystkich kluczy aktywacji z dowolnej zainstalowanej wersji pakietu Office (wymaga podwyższenia uprawnień).\r\n\r\n"
    L"Aplikacja nie akceptuje automatycznie EULA; akceptacja pozostaje obowiązkiem użytkownika w oknie Microsoft Deployment Tool po jego uruchomieniu. Microsoft Deployment Tool nie jest również uruchamiany w trybie cichym: interfejs graficzny jest wyświetlany za każdym razem.",
    L"Otwórz Microsoft Learn",
    L"Zamknij"
};

static const AboutStrings gAboutNlNl = {
    L"Over de applicatie",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Ontwikkeld, gepubliceerd en elektronisch ondertekend met een 2026-timestamp voor Microsoft Windows door Andreea Mirela Cristea - InnovationX SRL, een burger van de Europese Unie, in Roemenië.\r\n\r\n"
    L"Deze applicatie is gemaakt voor educatieve doeleinden, met behulp van openbaar beschikbare informatie en gebaseerd op Microsoft Office Deployment Tool. Het programma kopieert Microsoft Deployment Tool (odt.exe) van de packages-map in de huidige map (./packages/odt.exe) naar de door de gebruiker gekozen locatie en start het met de parameters die nodig zijn om de geselecteerde Microsoft Office-editie te installeren. Vervolgens downloadt Microsoft Deployment Tool de benodigde bestanden, ongeveer 5 GB, naar dezelfde locatie en voltooit de installatie automatisch.\r\n\r\n"
    L"Het programma is ontworpen om te werken met Microsoft Deployment Tool versie 16.0.17531.20046. Andere versies zijn mogelijk niet compatibel. De gebruiker kan andere versies testen door de juiste odt.exe in de packages-map te plaatsen.\r\n\r\n"
    L"Extra functies:\r\n"
    L"• Genereer autorun.inf met de huidige geselecteerde instellingen.\r\n"
    L"• Verwijder alle activeringssleutels van elke geïnstalleerde Office-versie (vereist verhoogde rechten).\r\n\r\n"
    L"De applicatie accepteert de EULA niet automatisch; acceptatie blijft de verantwoordelijkheid van de gebruiker in het Microsoft Deployment Tool-venster nadat het is gestart. Microsoft Deployment Tool wordt ook niet op de achtergrond uitgevoerd: de grafische interface wordt elke keer getoond.",
    L"Open Microsoft Learn",
    L"Sluiten"
};

static const AboutStrings gAboutNlBe = gAboutNlNl;

static const AboutStrings gAboutSv = {
    L"Om applikationen",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Utvecklad, publicerad och elektroniskt signerad med en tidsstämpel 2026 för Microsoft Windows av Andreea Mirela Cristea - InnovationX SRL, en medborgare i Europeiska unionen, i Rumänien.\r\n\r\n"
    L"Denna applikation skapades för utbildningsändamål med offentligt tillgänglig information och baserad på Microsoft Office Deployment Tool. Programmet kopierar Microsoft Deployment Tool (odt.exe) från mappen packages i den aktuella katalogen (./packages/odt.exe) till den plats som användaren väljer och startar det med de parametrar som krävs för att installera den valda Microsoft Office-utgåvan. Microsoft Deployment Tool laddar sedan ner de nödvändiga filerna, cirka 5 GB, till samma plats och slutför installationen automatiskt.\r\n\r\n"
    L"Programmet är utformat för att fungera med Microsoft Deployment Tool version 16.0.17531.20046. Andra versioner kan vara inkompatibla. Användaren kan testa andra versioner genom att placera rätt odt.exe i mappen packages.\r\n\r\n"
    L"Ytterligare funktioner:\r\n"
    L"• Generera autorun.inf med de aktuella valda inställningarna.\r\n"
    L"• Ta bort alla aktiveringsnycklar från alla installerade Office-versioner (kräver administratörsbehörighet).\r\n\r\n"
    L"Applikationen accepterar inte EULA automatiskt; acceptansen ligger hos användaren i Microsoft Deployment Tool-fönstret efter att det startats. Microsoft Deployment Tool körs inte heller i tyst läge: det grafiska gränssnittet visas varje gång.",
    L"Öppna Microsoft Learn",
    L"Stäng"
};

static const AboutStrings gAboutDa = {
    L"Om applikation",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Udviklet, offentliggjort og elektronisk underskrevet med et tidsstempel 2026 til Microsoft Windows af Andreea Mirela Cristea - InnovationX SRL, en borger i Den Europæiske Union, i Rumænien.\r\n\r\n"
    L"Denne applikation blev oprettet til uddannelsesformål ved hjælp af offentligt tilgængelige oplysninger og baseret på Microsoft Office Deployment Tool. Programmet kopierer Microsoft Deployment Tool (odt.exe) fra packages-mappen i den aktuelle mappe (./packages/odt.exe) til den placering, brugeren vælger, og starter det med de parametre, der er nødvendige for at installere den valgte Microsoft Office-udgave. Derefter henter Microsoft Deployment Tool de nødvendige filer, ca. 5 GB, til den samme placering og fuldfører installationen automatisk.\r\n\r\n"
    L"Programmet er designet til at fungere med Microsoft Deployment Tool version 16.0.17531.20046. Andre versioner er muligvis ikke kompatible. Brugeren kan teste andre versioner ved at placere den relevante odt.exe i packages-mappen.\r\n\r\n"
    L"Yderligere funktioner:\r\n"
    L"• Generer autorun.inf med de aktuelt valgte indstillinger.\r\n"
    L"• Fjern alle aktiveringsnøgler fra enhver installeret Office-version (kræver administratorrettigheder).\r\n\r\n"
    L"Applikationen accepterer ikke EULA automatisk; accept er brugerens ansvar i Microsoft Deployment Tool-vinduet, efter det er startet. Microsoft Deployment Tool køres heller ikke i tavs tilstand: den grafiske grænseflade vises hver gang.",
    L"Åbn Microsoft Learn",
    L"Luk"
};

static const AboutStrings gAboutNb = {
    L"Om applikasjonen",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Utviklet, publisert og elektronisk signert med tidsstempel 2026 for Microsoft Windows av Andreea Mirela Cristea - InnovationX SRL, en borger av Den europeiske union, i Romania.\r\n\r\n"
    L"Denne applikasjonen ble laget for utdanningsformål ved bruk av offentlig tilgjengelig informasjon og er basert på Microsoft Office Deployment Tool. Programmet kopierer Microsoft Deployment Tool (odt.exe) fra packages-mappen i gjeldende katalog (./packages/odt.exe) til stedet som er valgt av brukeren, og starter det med de parametrene som kreves for å installere den valgte Microsoft Office-utgaven. Deretter laster Microsoft Deployment Tool ned de nødvendige filene, omtrent 5 GB, til samme sted og fullfører installasjonen automatisk.\r\n\r\n"
    L"Programmet er utformet for å fungere med Microsoft Deployment Tool versjon 16.0.17531.20046. Andre versjoner kan være inkompatible. Brukeren kan teste andre versjoner ved å plassere riktig odt.exe i packages-mappen.\r\n\r\n"
    L"Ytterligere funksjoner:\r\n"
    L"• Generer autorun.inf med de gjeldende valgte innstillingene.\r\n"
    L"• Fjern alle aktiveringsnøkler fra alle installerte Office-versjoner (krever administratorrettigheter).\r\n\r\n"
    L"Applikasjonen godtar ikke EULA automatisk; aksept er brukerens ansvar i Microsoft Deployment Tool-vinduet etter at det startes. Microsoft Deployment Tool kjøres heller ikke i stillhet: det grafiske grensesnittet vises hver gang.",
    L"Åpne Microsoft Learn",
    L"Lukk"
};

static const AboutStrings gAboutFi = {
    L"Sovelluksesta",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Kehitetty, julkaistu ja sähköisesti allekirjoitettu vuoden 2026 aikaleimalla Microsoft Windowsille Andreea Mirela Cristea - InnovationX SRLn toimesta, Euroopan unionin kansalainen, Romaniassa.\r\n\r\n"
    L"Tämä sovellus on luotu koulutustarkoituksiin julkisesti saatavilla olevien tietojen avulla ja perustuu Microsoft Office Deployment Tool -työkaluun. Ohjelma kopioi Microsoft Deployment Toolin (odt.exe) nykyisen hakemiston packages-kansiosta (./packages/odt.exe) käyttäjän valitsemaan sijaintiin ja käynnistää sen tarvittavilla parametreilla valitun Microsoft Office -version asentamiseksi. Tämän jälkeen Microsoft Deployment Tool lataa tarvittavat tiedostot, noin 5 Gt, samaan sijaintiin ja suorittaa asennuksen automaattisesti loppuun.\r\n\r\n"
    L"Ohjelma on suunniteltu toimimaan Microsoft Deployment Toolin version 16.0.17531.20046 kanssa. Muut versiot eivät välttämättä ole yhteensopivia. Käyttäjä voi testata muita versioita sijoittamalla sopivan odt.exe-tiedoston packages-kansioon.\r\n\r\n"
    L"Lisäominaisuudet:\r\n"
    L"• Luo autorun.inf nykyisillä valituilla asetuksilla.\r\n"
    L"• Poista kaikki aktivointiavaimet mistä tahansa asennetusta Office-versiosta (vaatii korotetut oikeudet).\r\n\r\n"
    L"Sovellus ei hyväksy EULA:ta automaattisesti; hyväksyminen on käyttäjän vastuulla Microsoft Deployment Tool -ikkunassa sen käynnistyttyä. Microsoft Deployment Tool ei myöskään suorita hiljaisessa tilassa: graafinen käyttöliittymä näytetään joka kerta.",
    L"Avaa Microsoft Learn",
    L"Sulje"
};

static const AboutStrings gAboutKo = {
    L"응용 프로그램 정보",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. 루마니아에 거주하는 유럽 연합 시민 Andreea Mirela Cristea - InnovationX SRL에 의해 Microsoft Windows용으로 2026년 타임스탬프와 함께 개발, 게시 및 전자 서명되었습니다.\r\n\r\n"
    L"이 응용 프로그램은 공개적으로 사용 가능한 정보를 사용하고 Microsoft Office Deployment Tool을 기반으로 교육 목적으로 만들어졌습니다. 이 프로그램은 현재 디렉터리의 packages 폴더(./packages/odt.exe)에 있는 Microsoft Deployment Tool(odt.exe)을 사용자가 선택한 위치에 복사하고 선택한 Microsoft Office 에디션을 설치하는 데 필요한 매개 변수와 함께 시작합니다. 그런 다음 Microsoft Deployment Tool은 필요한 파일(약 5GB)을 동일한 위치에 다운로드하고 설치를 자동으로 완료합니다.\r\n\r\n"
    L"이 프로그램은 Microsoft Deployment Tool 버전 16.0.17531.20046과 함께 작동하도록 설계되었습니다. 다른 버전은 호환되지 않을 수 있습니다. 사용자는 적절한 odt.exe를 packages 폴더에 넣어 다른 버전을 테스트할 수 있습니다.\r\n\r\n"
    L"추가 기능:\r\n"
    L"• 현재 선택된 설정으로 autorun.inf 생성.\r\n"
    L"• 설치된 모든 Office 버전에서 모든 정품 인증 키 제거(관리자 권한 필요).\r\n\r\n"
    L"응용 프로그램은 EULA를 자동으로 수락하지 않습니다. 수락은 시작 후 Microsoft Deployment Tool 창에서 사용자의 책임입니다. Microsoft Deployment Tool은 자동 모드로 실행되지 않습니다. 그래픽 인터페이스가 항상 표시됩니다.",
    L"Microsoft Learn 열기",
    L"닫기"
};

static const AboutStrings gAboutAr = {
    L"حول التطبيق",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. تم التطوير والنشر والتوقيع إلكترونيًا بختم زمني 2026 لنظام Microsoft Windows بواسطة Andreea Mirela Cristea - InnovationX SRL، مواطنة من الاتحاد الأوروبي، في رومانيا.\r\n\r\n"
    L"تم إنشاء هذا التطبيق للأغراض التعليمية، باستخدام معلومات متاحة للجمهور واستنادًا إلى Microsoft Office Deployment Tool. يقوم البرنامج بنسخ أداة Microsoft Deployment Tool (odt.exe) من مجلد packages الموجود في الدليل الحالي (./packages/odt.exe) إلى الموقع الذي يختاره المستخدم ويقوم بتشغيله بالمعلمات المطلوبة لتثبيت إصدار Microsoft Office المحدد. ثم تقوم أداة Microsoft Deployment Tool بتنزيل الملفات المطلوبة، حوالي 5 غيغابايت، إلى نفس الموقع وتكمل التثبيت تلقائيًا.\r\n\r\n"
    L"تم تصميم البرنامج للعمل مع Microsoft Deployment Tool الإصدار 16.0.17531.20046. قد لا تكون الإصدارات الأخرى متوافقة. يمكن للمستخدم اختبار إصدارات أخرى عن طريق وضع odt.exe المناسب في مجلد packages.\r\n\r\n"
    L"ميزات إضافية:\r\n"
    L"• إنشاء autorun.inf مع الإعدادات المحددة حاليًا.\r\n"
    L"• إزالة جميع مفاتيح التنشيط من أي إصدار من Office مثبت (يتطلب صلاحيات مرتفعة).\r\n\r\n"
    L"لا يقبل التطبيق اتفاقية الترخيص للمستخدم النهائي تلقائيًا؛ يبقى القبول مسؤولية المستخدم في نافذة Microsoft Deployment Tool بعد بدء التشغيل. كما لا يتم تشغيل Microsoft Deployment Tool في وضع صامت: يتم عرض الواجهة الرسومية في كل مرة.",
    L"فتح Microsoft Learn",
    L"إغلاق"
};

static const AboutStrings gAboutHe = {
    L"אודות היישום",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. פותח, פורסם ונחתם אלקטרונית עם חותמת זמן לשנת 2026 עבור Microsoft Windows על ידי Andreea Mirela Cristea - InnovationX SRL, אזרחית האיחוד האירופי, ברומניה.\r\n\r\n"
    L"יישום זה נוצר למטרות חינוכיות תוך שימוש במידע הזמין לציבור ומבוסס על Microsoft Office Deployment Tool. התוכנה מעתיקה את Microsoft Deployment Tool (odt.exe) מתיקיית packages הנמצאת בספרייה הנוכחית (./packages/odt.exe) למיקום הנבחר על ידי המשתמש ומפעילה אותו עם הפרמטרים הנדרשים להתקנת המהדורה הנבחרת של Microsoft Office. לאחר מכן, Microsoft Deployment Tool מוריד את הקבצים הנדרשים, כ-5 ג'יגה-בייט, לאותו מיקום ומשלים את ההתקנה אוטומטית.\r\n\r\n"
    L"התוכנה מיועדת לעבוד עם Microsoft Deployment Tool גרסה 16.0.17531.20046. גרסאות אחרות עשויות שלא להיות תואמות. המשתמש יכול לבדוק גרסאות אחרות על ידי הצבת הקובץ odt.exe המתאים בתיקיית packages.\r\n\r\n"
    L"תכונות נוספות:\r\n"
    L"• יצירת autorun.inf עם ההגדרות שנבחרו כעת.\r\n"
    L"• הסרת כל מפתחות ההפעלה מכל גרסת Office מותקנת (דורש הרשאות מנהל).\r\n\r\n"
    L"היישום אינו מקבל את הסכם הרישיון למשתמש קצה באופן אוטומטי; הקבלה נותרת באחריות המשתמש בחלון Microsoft Deployment Tool לאחר ההפעלה. כמו כן, Microsoft Deployment Tool אינו פועל בשקט: הממשק הגרפי מוצג בכל פעם.",
    L"פתח את Microsoft Learn",
    L"סגור"
};

static const AboutStrings gAboutHi = {
    L"एप्लिकेशन के बारे में",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. रोमानिया में यूरोपीय संघ की नागरिक Andreea Mirela Cristea - InnovationX SRL द्वारा Microsoft Windows के लिए 2026 टाइमस्टैम्प के साथ विकसित, प्रकाशित और इलेक्ट्रॉनिक रूप से हस्ताक्षरित।\r\n\r\n"
    L"यह एप्लिकेशन सार्वजनिक रूप से उपलब्ध जानकारी का उपयोग करके और Microsoft Office Deployment Tool के आधार पर शैक्षिक उद्देश्यों के लिए बनाया गया था। प्रोग्राम वर्तमान निर्देशिका (./packages/odt.exe) में स्थित packages फ़ोल्डर से Microsoft Deployment Tool (odt.exe) को उपयोगकर्ता द्वारा चयनित स्थान पर कॉपी करता है और चयनित Microsoft Office संस्करण को स्थापित करने के लिए आवश्यक मापदंडों के साथ इसे शुरू करता है। फिर Microsoft Deployment Tool आवश्यक फ़ाइलों को लगभग 5 GB उसी स्थान पर डाउनलोड करता है और स्वचालित रूप से स्थापना पूरी करता है।\r\n\r\n"
    L"प्रोग्राम Microsoft Deployment Tool संस्करण 16.0.17531.20046 के साथ काम करने के लिए डिज़ाइन किया गया है। अन्य संस्करण संगत नहीं हो सकते हैं। उपयोगकर्ता उपयुक्त odt.exe को packages फ़ोल्डर में रखकर अन्य संस्करणों का परीक्षण कर सकता है।\r\n\r\n"
    L"अतिरिक्त सुविधाएँ:\r\n"
    L"• वर्तमान में चयनित सेटिंग्स के साथ autorun.inf जेनरेट करें।\r\n"
    L"• किसी भी स्थापित Office संस्करण से सभी सक्रियण कुंजियाँ हटाएँ (उन्नत अधिकारों की आवश्यकता है)।\r\n\r\n"
    L"एप्लिकेशन स्वचालित रूप से EULA स्वीकार नहीं करता है; स्वीकृति प्रारंभ होने के बाद Microsoft Deployment Tool विंडो में उपयोगकर्ता की जिम्मेदारी है। Microsoft Deployment Tool को मूक मोड में भी नहीं चलाया जाता है: ग्राफिकल इंटरफ़ेस हर बार दिखाया जाता है।",
    L"Microsoft Learn खोलें",
    L"बंद करें"
};

static const AboutStrings gAboutTh = {
    L"เกี่ยวกับแอปพลิเคชัน",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL พัฒนา เผยแพร่ และลงนามทางอิเล็กทรอนิกส์ด้วยประทับเวลา 2026 สำหรับ Microsoft Windows โดย Andreea Mirela Cristea - InnovationX SRL พลเมืองของสหภาพยุโรป ในโรมาเนีย\r\n\r\n"
    L"แอปพลิเคชันนี้สร้างขึ้นเพื่อวัตถุประสงค์ทางการศึกษา โดยใช้ข้อมูลที่เปิดเผยต่อสาธารณะและอิงตาม Microsoft Office Deployment Tool โปรแกรมคัดลอก Microsoft Deployment Tool (odt.exe) จากโฟลเดอร์ packages ในไดเรกทอรีปัจจุบัน (./packages/odt.exe) ไปยังตำแหน่งที่ผู้ใช้เลือกและเริ่มทำงานด้วยพารามิเตอร์ที่จำเป็นในการติดตั้ง Microsoft Office รุ่นที่เลือก จากนั้น Microsoft Deployment Tool จะดาวน์โหลดไฟล์ที่จำเป็น ประมาณ 5 GB ไปยังตำแหน่งเดียวกันและดำเนินการติดตั้งให้เสร็จสิ้นโดยอัตโนมัติ\r\n\r\n"
    L"โปรแกรมได้รับการออกแบบให้ทำงานกับ Microsoft Deployment Tool เวอร์ชัน 16.0.17531.20046 เวอร์ชันอื่นอาจไม่เข้ากันได้ ผู้ใช้สามารถทดสอบเวอร์ชันอื่นได้โดยวาง odt.exe ที่เหมาะสมลงในโฟลเดอร์ packages\r\n\r\n"
    L"คุณสมบัติเพิ่มเติม:\r\n"
    L"• สร้าง autorun.inf ด้วยการตั้งค่าที่เลือกในปัจจุบัน\r\n"
    L"• ลบคีย์การเปิดใช้งานทั้งหมดจาก Office เวอร์ชันที่ติดตั้ง (ต้องใช้สิทธิ์ผู้ดูแลระบบ)\r\n\r\n"
    L"แอปพลิเคชันนี้ไม่ยอมรับ EULA โดยอัตโนมัติ การยอมรับยังคงเป็นความรับผิดชอบของผู้ใช้ในหน้าต่าง Microsoft Deployment Tool หลังจากเริ่มทำงาน Microsoft Deployment Tool จะไม่ทำงานในโหมดเงียบเช่นกัน: อินเทอร์เฟซแบบกราฟิกจะแสดงทุกครั้ง",
    L"เปิด Microsoft Learn",
    L"ปิด"
};

static const AboutStrings gAboutVi = {
    L"Về ứng dụng",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Được phát triển, xuất bản và ký điện tử với dấu thời gian năm 2026 cho Microsoft Windows bởi Andreea Mirela Cristea - InnovationX SRL, công dân của Liên minh Châu Âu, tại Romania.\r\n\r\n"
    L"Ứng dụng này được tạo ra cho mục đích giáo dục, sử dụng thông tin có sẵn công khai và dựa trên Microsoft Office Deployment Tool. Chương trình sao chép Microsoft Deployment Tool (odt.exe) từ thư mục packages nằm trong thư mục hiện tại (./packages/odt.exe) đến vị trí do người dùng chọn và khởi chạy nó với các tham số cần thiết để cài đặt phiên bản Microsoft Office đã chọn. Sau đó, Microsoft Deployment Tool tải xuống các tệp cần thiết, khoảng 5 GB, vào cùng một vị trí và hoàn tất quá trình cài đặt tự động.\r\n\r\n"
    L"Chương trình được thiết kế để hoạt động với Microsoft Deployment Tool phiên bản 16.0.17531.20046. Các phiên bản khác có thể không tương thích. Người dùng có thể kiểm tra các phiên bản khác bằng cách đặt odt.exe phù hợp vào thư mục packages.\r\n\r\n"
    L"Các tính năng bổ sung:\r\n"
    L"• Tạo autorun.inf với các cài đặt hiện được chọn.\r\n"
    L"• Xóa tất cả khóa kích hoạt khỏi bất kỳ phiên bản Office nào đã cài đặt (yêu cầu quyền nâng cao).\r\n\r\n"
    L"Ứng dụng không tự động chấp nhận EULA; việc chấp nhận thuộc trách nhiệm của người dùng trong cửa sổ Microsoft Deployment Tool sau khi nó khởi động. Microsoft Deployment Tool cũng không chạy ở chế độ ẩn: giao diện đồ họa được hiển thị mỗi lần.",
    L"Mở Microsoft Learn",
    L"Đóng"
};

static const AboutStrings gAboutId = {
    L"Tentang aplikasi",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Dikembangkan, diterbitkan, dan ditandatangani secara elektronik dengan stempel waktu 2026 untuk Microsoft Windows oleh Andreea Mirela Cristea - InnovationX SRL, warga negara Uni Eropa, di Rumania.\r\n\r\n"
    L"Aplikasi ini dibuat untuk tujuan pendidikan, menggunakan informasi yang tersedia untuk umum dan berdasarkan Microsoft Office Deployment Tool. Program ini menyalin Microsoft Deployment Tool (odt.exe) dari folder packages yang terletak di direktori saat ini (./packages/odt.exe) ke lokasi yang dipilih pengguna dan menjalankannya dengan parameter yang diperlukan untuk menginstal edisi Microsoft Office yang dipilih. Microsoft Deployment Tool kemudian mengunduh file yang diperlukan, sekitar 5 GB, ke lokasi yang sama dan menyelesaikan instalasi secara otomatis.\r\n\r\n"
    L"Program ini dirancang untuk bekerja dengan Microsoft Deployment Tool versi 16.0.17531.20046. Versi lain mungkin tidak kompatibel. Pengguna dapat menguji versi lain dengan menempatkan odt.exe yang sesuai di folder packages.\r\n\r\n"
    L"Fitur tambahan:\r\n"
    L"• Hasilkan autorun.inf dengan pengaturan yang saat ini dipilih.\r\n"
    L"• Hapus semua kunci aktivasi dari versi Office mana pun yang terinstal (membutuhkan hak administrator).\r\n\r\n"
    L"Aplikasi ini tidak menerima EULA secara otomatis; penerimaan tetap menjadi tanggung jawab pengguna di jendela Microsoft Deployment Tool setelah dimulai. Microsoft Deployment Tool juga tidak dijalankan secara diam-diam: antarmuka grafis ditampilkan setiap saat.",
    L"Buka Microsoft Learn",
    L"Tutup"
};

static const AboutStrings gAboutHr = {
    L"O aplikaciji",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Razvila, objavila i elektronički potpisala s vremenskom oznakom 2026. za Microsoft Windows Andreea Mirela Cristea - InnovationX SRL, državljanka Europske unije, u Rumunjskoj.\r\n\r\n"
    L"Ova je aplikacija stvorena u obrazovne svrhe, korištenjem javno dostupnih informacija i temelji se na Microsoft Office Deployment Tool-u. Program kopira Microsoft Deployment Tool (odt.exe) iz mape packages koja se nalazi u trenutnom direktoriju (./packages/odt.exe) na mjesto koje odabere korisnik i pokreće ga s parametrima potrebnim za instalaciju odabrane verzije Microsoft Officea. Zatim Microsoft Deployment Tool preuzima potrebne datoteke, približno 5 GB, na isto mjesto i automatski dovršava instalaciju.\r\n\r\n"
    L"Program je dizajniran za rad s Microsoft Deployment Tool verzijom 16.0.17531.20046. Druge verzije možda nisu kompatibilne. Korisnik može testirati druge verzije stavljanjem odgovarajućeg odt.exe u mapu packages.\r\n\r\n"
    L"Dodatne značajke:\r\n"
    L"• Generiraj autorun.inf s trenutno odabranim postavkama.\r\n"
    L"• Ukloni sve aktivacijske ključeve iz bilo koje instalirane verzije Officea (zahtijeva administratorske privilegije).\r\n\r\n"
    L"Aplikacija ne prihvaća EULA automatski; prihvaćanje ostaje odgovornost korisnika u prozoru Microsoft Deployment Tool nakon pokretanja. Microsoft Deployment Tool također se ne pokreće u tihom načinu rada: grafičko sučelje prikazuje se svaki put.",
    L"Otvori Microsoft Learn",
    L"Zatvori"
};

static const AboutStrings gAboutSl = {
    L"O aplikaciji",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Razvila, objavila in elektronsko podpisala s časovnim žigom 2026 za Microsoft Windows Andreea Mirela Cristea - InnovationX SRL, državljanka Evropske unije, v Romuniji.\r\n\r\n"
    L"Ta aplikacija je bila ustvarjena v izobraževalne namene z uporabo javno dostopnih informacij in temelji na Microsoft Office Deployment Tool. Program kopira Microsoft Deployment Tool (odt.exe) iz mape packages v trenutnem imeniku (./packages/odt.exe) na mesto, ki ga izbere uporabnik, in ga zažene s parametri, potrebnimi za namestitev izbrane izdaje Microsoft Office. Nato Microsoft Deployment Tool prenese zahtevane datoteke, približno 5 GB, na isto mesto in samodejno zaključi namestitev.\r\n\r\n"
    L"Program je zasnovan za delo z Microsoft Deployment Tool različico 16.0.17531.20046. Druge različice morda niso združljive. Uporabnik lahko preizkusi druge različice tako, da ustrezen odt.exe namesti v mapo packages.\r\n\r\n"
    L"Dodatne funkcije:\r\n"
    L"• Ustvari autorun.inf s trenutno izbranimi nastavitvami.\r\n"
    L"• Odstrani vse aktivacijske ključe iz katere koli nameščene različice Officea (zahteva skrbniške pravice).\r\n\r\n"
    L"Aplikacija ne sprejme EULA samodejno; sprejetje ostane odgovornost uporabnika v oknu Microsoft Deployment Tool po zagonu. Microsoft Deployment Tool se prav tako ne zažene v tihem načinu: grafični vmesnik se prikaže vsakič.",
    L"Odpri Microsoft Learn",
    L"Zapri"
};

static const AboutStrings gAboutLt = {
    L"Apie programą",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Sukūrė, paskelbė ir elektroniniu būdu pasirašė 2026 m. laiko žyma, skirta „Microsoft Windows“, Andreea Mirela Cristea - InnovationX SRL, Europos Sąjungos pilietė, Rumunijoje.\r\n\r\n"
    L"Ši programa buvo sukurta švietimo tikslais, naudojant viešai prieinamą informaciją ir remiantis „Microsoft Office Deployment Tool“. Programa nukopijuoja „Microsoft Deployment Tool“ (odt.exe) iš dabartiniame kataloge esančio aplanko packages (./packages/odt.exe) į vartotojo pasirinktą vietą ir paleidžia jį su parametrais, reikalingais pasirinktam „Microsoft Office“ leidimui įdiegti. Tada „Microsoft Deployment Tool“ atsisiunčia reikiamus failus, maždaug 5 GB, į tą pačią vietą ir automatiškai užbaigia diegimą.\r\n\r\n"
    L"Programa skirta dirbti su „Microsoft Deployment Tool“ 16.0.17531.20046 versija. Kitos versijos gali būti nesuderinamos. Vartotojas gali išbandyti kitas versijas įdėjęs atitinkamą odt.exe į packages aplanką.\r\n\r\n"
    L"Papildomos funkcijos:\r\n"
    L"• Sukurti autorun.inf su šiuo metu pasirinktais nustatymais.\r\n"
    L"• Pašalinti visus aktyvinimo raktus iš bet kurios įdiegtos „Office“ versijos (reikia administratoriaus teisių).\r\n\r\n"
    L"Programa automatiškai nepriima EULA; priėmimas lieka vartotojo atsakomybe „Microsoft Deployment Tool“ lange po paleidimo. „Microsoft Deployment Tool“ taip pat neveikia tyliuoju režimu: grafinė sąsaja rodoma kiekvieną kartą.",
    L"Atidaryti „Microsoft Learn“",
    L"Uždaryti"
};

static const AboutStrings gAboutLv = {
    L"Par lietotni",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Izstrādāja, publicēja un elektroniski parakstīja ar 2026. gada laika zīmogu Microsoft Windows operētājsistēmai Andreea Mirela Cristea - InnovationX SRL, Eiropas Savienības pilsone, Rumānijā.\r\n\r\n"
    L"Šī lietotne tika izveidota izglītības nolūkos, izmantojot publiski pieejamu informāciju un pamatojoties uz Microsoft Office Deployment Tool. Programma kopē Microsoft Deployment Tool (odt.exe) no pašreizējā direktorijā esošās mapes packages (./packages/odt.exe) uz lietotāja izvēlēto vietu un palaiž to ar parametriem, kas nepieciešami izvēlētās Microsoft Office versijas instalēšanai. Pēc tam Microsoft Deployment Tool lejupielādē nepieciešamos failus, aptuveni 5 GB, tajā pašā vietā un automātiski pabeidz instalēšanu.\r\n\r\n"
    L"Programma ir paredzēta darbam ar Microsoft Deployment Tool versiju 16.0.17531.20046. Citas versijas var nebūt saderīgas. Lietotājs var pārbaudīt citas versijas, ievietojot atbilstošo odt.exe mapē packages.\r\n\r\n"
    L"Papildu funkcijas:\r\n"
    L"• Ģenerēt autorun.inf ar pašlaik atlasītajiem iestatījumiem.\r\n"
    L"• Noņemt visus aktivizācijas atslēgas no jebkuras instalētās Office versijas (nepieciešamas administratora privilēģijas).\r\n\r\n"
    L"Lietotne automātiski nepieņem EULA; pieņemšana ir lietotāja atbildība Microsoft Deployment Tool logā pēc tā palaišanas. Microsoft Deployment Tool arī netiek palaists klusajā režīmā: grafiskais interfeiss tiek parādīts katru reizi.",
    L"Atvērt Microsoft Learn",
    L"Aizvērt"
};

static const AboutStrings gAboutEt = {
    L"Rakendusest",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Välja töötatud, avaldatud ja elektrooniliselt allkirjastatud 2026. aasta ajatempliga Microsoft Windowsi jaoks Andreea Mirela Cristea - InnovationX SRL poolt, Euroopa Liidu kodanik, Rumeenias.\r\n\r\n"
    L"See rakendus loodi hariduslikel eesmärkidel, kasutades avalikult kättesaadavat teavet ja põhinedes Microsoft Office Deployment Toolil. Programm kopeerib Microsoft Deployment Tooli (odt.exe) praeguses kataloogis asuvast packages-kaustast (./packages/odt.exe) kasutaja valitud asukohta ja käivitab selle valitud Microsoft Office'i väljaande installimiseks vajalike parameetritega. Seejärel laadib Microsoft Deployment Tool vajalikud failid (umbes 5 GB) samasse asukohta ja lõpetab installimise automaatselt.\r\n\r\n"
    L"Programm on loodud töötama Microsoft Deployment Tooli versiooniga 16.0.17531.20046. Muud versioonid ei pruugi olla ühilduvad. Kasutaja saab testida teisi versioone, paigutades vastava odt.exe packages-kausta.\r\n\r\n"
    L"Lisafunktsioonid:\r\n"
    L"• Loo autorun.inf praegu valitud seadetega.\r\n"
    L"• Eemalda kõik aktiveerimisvõtmed mis tahes installitud Office'i versioonist (nõuab kõrgemaid õigusi).\r\n\r\n"
    L"Rakendus ei nõustu EULA-ga automaatselt; nõustumine jääb kasutaja vastutuseks Microsoft Deployment Tooli aknas pärast selle käivitamist. Microsoft Deployment Tooli ei käivitata ka vaikses režiimis: graafiline liides kuvatakse alati.",
    L"Ava Microsoft Learn",
    L"Sulge"
};

static const AboutStrings gAboutSrLatn = {
    L"O aplikaciji",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Razvila, objavila i elektronski potpisala s vremenskom oznakom 2026. za Microsoft Windows Andreea Mirela Cristea - InnovationX SRL, državljanka Evropske unije, u Rumuniji.\r\n\r\n"
    L"Ova aplikacija je kreirana u obrazovne svrhe, korišćenjem javno dostupnih informacija i bazirana na Microsoft Office Deployment Tool-u. Program kopira Microsoft Deployment Tool (odt.exe) iz fascikle packages koja se nalazi u trenutnom direktorijumu (./packages/odt.exe) na lokaciju koju izabere korisnik i pokreće ga sa parametrima potrebnim za instalaciju odabranog izdanja Microsoft Office-a. Zatim Microsoft Deployment Tool preuzima potrebne datoteke, otprilike 5 GB, na istu lokaciju i automatski završava instalaciju.\r\n\r\n"
    L"Program je dizajniran da radi sa Microsoft Deployment Tool verzijom 16.0.17531.20046. Druge verzije možda nisu kompatibilne. Korisnik može testirati druge verzije tako što će staviti odgovarajući odt.exe u fasciklu packages.\r\n\r\n"
    L"Dodatne funkcije:\r\n"
    L"• Generiši autorun.inf sa trenutno izabranim podešavanjima.\r\n"
    L"• Ukloni sve aktivacione ključeve iz bilo koje instalirane Office verzije (zahteva administratorske privilegije).\r\n\r\n"
    L"Aplikacija ne prihvata EULA automatski; prihvatanje ostaje odgovornost korisnika u prozoru Microsoft Deployment Tool nakon pokretanja. Microsoft Deployment Tool se takođe ne pokreće u tihom režimu: grafički interfejs se prikazuje svaki put.",
    L"Otvori Microsoft Learn",
    L"Zatvori"
};

static const AboutStrings gAboutSrCyrl = {
    L"О апликацији",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Развила, објавила и електронски потписала с временском ознаком 2026. за Microsoft Windows Andreea Mirela Cristea - InnovationX SRL, држављанка Европске уније, у Румунији.\r\n\r\n"
    L"Ова апликација је креирана у образовне сврхе, коришћењем јавно доступних информација и базирана на Microsoft Office Deployment Tool-у. Програм копира Microsoft Deployment Tool (odt.exe) из фасцикле packages која се налази у тренутном директоријуму (./packages/odt.exe) на локацију коју изабере корисник и покреће га са параметрима потребним за инсталацију одабраног издања Microsoft Office-а. Затим Microsoft Deployment Tool преузима потребне датотеке, отприлике 5 GB, на исту локацију и аутоматски завршава инсталацију.\r\n\r\n"
    L"Програм је дизајниран да ради са Microsoft Deployment Tool верзијом 16.0.17531.20046. Друге верзије можда нису компатибилне. Корисник може тестирати друге верзије тако што ће ставити одговарајући odt.exe у фасциклу packages.\r\n\r\n"
    L"Додатне функције:\r\n"
    L"• Генериши autorun.inf са тренутно изабраним подешавањима.\r\n"
    L"• Уклони све активационе кључеве из било које инсталиране Office верзије (захтева администраторске привилегије).\r\n\r\n"
    L"Апликација не прихвата EULA аутоматски; прихватање остаје одговорност корисника у прозору Microsoft Deployment Tool након покретања. Microsoft Deployment Tool се такође не покреће у тихом режиму: графички интерфејс се приказује сваки пут.",
    L"Отвори Microsoft Learn",
    L"Затвори"
};

static const AboutStrings gAboutMs = {
    L"Perihal aplikasi",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Dibangunkan, diterbitkan dan ditandatangani secara elektronik dengan setem masa 2026 untuk Microsoft Windows oleh Andreea Mirela Cristea - InnovationX SRL, warganegara Kesatuan Eropah, di Romania.\r\n\r\n"
    L"Aplikasi ini dicipta untuk tujuan pendidikan, menggunakan maklumat yang tersedia secara umum dan berdasarkan Microsoft Office Deployment Tool. Program ini menyalin Microsoft Deployment Tool (odt.exe) dari folder packages yang terletak di direktori semasa (./packages/odt.exe) ke lokasi yang dipilih oleh pengguna dan memulakannya dengan parameter yang diperlukan untuk memasang edisi Microsoft Office yang dipilih. Microsoft Deployment Tool kemudian memuat turun fail yang diperlukan, kira-kira 5 GB, ke lokasi yang sama dan melengkapkan pemasangan secara automatik.\r\n\r\n"
    L"Program ini direka untuk berfungsi dengan Microsoft Deployment Tool versi 16.0.17531.20046. Versi lain mungkin tidak serasi. Pengguna boleh menguji versi lain dengan meletakkan odt.exe yang sesuai dalam folder packages.\r\n\r\n"
    L"Ciri tambahan:\r\n"
    L"• Hasilkan autorun.inf dengan tetapan yang dipilih semasa.\r\n"
    L"• Buang semua kunci pengaktifan dari mana-mana versi Office yang dipasang (memerlukan keistimewaan pentadbir).\r\n\r\n"
    L"Aplikasi ini tidak menerima EULA secara automatik; penerimaan kekal sebagai tanggungjawab pengguna dalam tetingkap Microsoft Deployment Tool selepas ia dimulakan. Microsoft Deployment Tool juga tidak dijalankan secara senyap: antara muka grafik ditunjukkan setiap masa.",
    L"Buka Microsoft Learn",
    L"Tutup"
};

static const AboutStrings gAboutFil = {
    L"Tungkol sa application",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Binuo, inilathala, at pinirmahan nang elektroniko na may timestamp ng 2026 para sa Microsoft Windows ni Andreea Mirela Cristea - InnovationX SRL, isang mamamayan ng European Union, sa Romania.\r\n\r\n"
    L"Ang application na ito ay nilikha para sa mga layuning pang-edukasyon, gamit ang pampublikong impormasyon at batay sa Microsoft Office Deployment Tool. Kinokopya ng programa ang Microsoft Deployment Tool (odt.exe) mula sa packages folder na matatagpuan sa kasalukuyang direktoryo (./packages/odt.exe) patungo sa lokasyong pinili ng user at sinisimulan ito gamit ang mga parameter na kinakailangan upang i-install ang napiling edisyon ng Microsoft Office. Pagkatapos, iki-download ng Microsoft Deployment Tool ang mga kinakailangang file, humigit-kumulang 5 GB, sa parehong lokasyon at awtomatikong kinukumpleto ang pag-install.\r\n\r\n"
    L"Ang programa ay dinisenyo upang gumana sa Microsoft Deployment Tool na bersyon 16.0.17531.20046. Maaaring hindi compatible ang ibang bersyon. Maaaring subukan ng user ang ibang bersyon sa pamamagitan ng paglalagay ng angkop na odt.exe sa packages folder.\r\n\r\n"
    L"Karagdagang tampok:\r\n"
    L"• Bumuo ng autorun.inf gamit ang kasalukuyang napiling mga setting.\r\n"
    L"• Alisin ang lahat ng activation key mula sa anumang naka-install na bersyon ng Office (nangangailangan ng elevation).\r\n\r\n"
    L"Ang application na ito ay hindi awtomatikong tumatanggap ng EULA; ang pagtanggap ay responsibilidad ng user sa window ng Microsoft Deployment Tool pagkatapos itong magsimula. Ang Microsoft Deployment Tool ay hindi rin pinapatakbo nang tahimik: ang graphical na interface ay ipinapakita sa bawat pagkakataon.",
    L"Buksan ang Microsoft Learn",
    L"Isara"
};

static const AboutStrings gAboutGa = {
    L"Maidir leis an aip",
    L"(GPL-2.0-only) 2026 Andreea Mirela Cristea - InnovationX SRL. Forbartha, foilsithe agus sínithe go leictreonach le stampa ama 2026 do Microsoft Windows ag Andreea Mirela Cristea - InnovationX SRL, saoránach den Aontas Eorpach, sa Rómáin.\r\n\r\n"
    L"Cruthaíodh an aip seo chun críocha oideachais, ag baint úsáide as faisnéis atá ar fáil go poiblí agus bunaithe ar Microsoft Office Deployment Tool. Cóipeálann an clár an Microsoft Deployment Tool (odt.exe) ón bhfillteán packages atá suite sa chomhadlann reatha (./packages/odt.exe) go dtí an suíomh a roghnaíonn an t-úsáideoir agus tosaíonn sé é leis na paraiméadair is gá chun an t-eagrán Microsoft Office roghnaithe a shuiteáil. Ansin íoslódálann Microsoft Deployment Tool na comhaid is gá, thart ar 5 GB, go dtí an suíomh céanna agus críochnaíonn sé an tsuiteáil go huathoibríoch.\r\n\r\n"
    L"Tá an clár deartha le bheith ag obair le Microsoft Deployment Tool leagan 16.0.17531.20046. Seans nach mbeidh leaganacha eile comhoiriúnach. Is féidir leis an úsáideoir leaganacha eile a thástáil trí odt.exe cuí a chur san fhillteán packages.\r\n\r\n"
    L"Gnéithe breise:\r\n"
    L"• Gineadh autorun.inf leis na socruithe atá roghnaithe faoi láthair.\r\n"
    L"• Bain gach eochair ghníomhachtaithe ó aon leagan de Office atá suiteáilte (teastaíonn ardú).\r\n\r\n"
    L"Ní ghlacann an aip seo le EULA go huathoibríoch; tá glacadh fós freagracht ar an úsáideoir i bhfuinneog Microsoft Deployment Tool tar éis é a thosú. Ní ritear Microsoft Deployment Tool go ciúin ach an oiread: taispeántar an comhéadan grafach gach uair.",
    L"Oscail Microsoft Learn",
    L"Dún"
};

// ----------------------------------------------------------------------
// Funcții de căutare a limbii (inline)
// ----------------------------------------------------------------------
static inline const UiStrings* UiForLangCode(const wchar_t* code) {
    if (!code) return &gUiEn;
    std::wstring c = code;
    for (auto& ch : c) ch = towlower(ch);

    // Ordinea condițiilor contează (prefixe)
    if (c.find(L"ro") == 0) return &gUiRo;
    if (c.find(L"bg") == 0) return &gUiBg;
    if (c.find(L"hu") == 0) return &gUiHu;
    if (c.find(L"el") == 0) return &gUiEl;
    if (c.find(L"tr") == 0) return &gUiTr;
    if (c.find(L"en") == 0) return &gUiEn;

    if (c.find(L"zh-tw") == 0) return &gUiZhTW;
    if (c.find(L"zh-cn") == 0) return &gUiZhCN;
    if (c.find(L"zh")    == 0) return &gUiZhCN;   // fallback generic zh → Simplified

    if (c.find(L"ja") == 0) return &gUiJa;
    if (c.find(L"es") == 0) return &gUiEs;
    if (c.find(L"fr") == 0) return &gUiFr;
    if (c.find(L"sk") == 0) return &gUiSk;
    if (c.find(L"cs") == 0) return &gUiCs;
    if (c.find(L"uk") == 0) return &gUiUk;
    if (c.find(L"de") == 0) return &gUiDe;
    if (c.find(L"it") == 0) return &gUiIt;
    if (c.find(L"pt") == 0) return &gUiPtPt;   // default Portuguese (Portugal)
    if (c.find(L"ru") == 0) return &gUiRu;
    if (c.find(L"pl") == 0) return &gUiPl;
    if (c.find(L"nl") == 0) return &gUiNlNl;
    if (c.find(L"sv") == 0) return &gUiSv;
    if (c.find(L"da") == 0) return &gUiDa;
    if (c.find(L"nb") == 0) return &gUiNb;
    if (c.find(L"fi") == 0) return &gUiFi;
    if (c.find(L"ko") == 0) return &gUiKo;
    if (c.find(L"ar") == 0) return &gUiAr;
    if (c.find(L"he") == 0) return &gUiHe;
    if (c.find(L"hi") == 0) return &gUiHi;
    if (c.find(L"th") == 0) return &gUiTh;
    if (c.find(L"vi") == 0) return &gUiVi;
    if (c.find(L"id") == 0) return &gUiId;
    if (c.find(L"hr") == 0) return &gUiHr;
    if (c.find(L"sl") == 0) return &gUiSl;
    if (c.find(L"lt") == 0) return &gUiLt;
    if (c.find(L"lv") == 0) return &gUiLv;
    if (c.find(L"et") == 0) return &gUiEt;
    if (c.find(L"sr") == 0) return &gUiSrLatn; // default Latin
    if (c.find(L"ms") == 0) return &gUiMs;
    if (c.find(L"fil") == 0) return &gUiFil;
    if (c.find(L"ga") == 0) return &gUiGa;

    return &gUiEn;
}

static inline const AboutStrings* AboutForLangCode(const wchar_t* code) {
    if (!code) return &gAboutEn;
    std::wstring c = code;
    for (auto& ch : c) ch = towlower(ch);

    if (c.find(L"ro") == 0) return &gAboutRo;
    if (c.find(L"bg") == 0) return &gAboutBg;
    if (c.find(L"hu") == 0) return &gAboutHu;
    if (c.find(L"el") == 0) return &gAboutEl;
    if (c.find(L"tr") == 0) return &gAboutTr;
    if (c.find(L"en") == 0) return &gAboutEn;
    if (c.find(L"zh-tw") == 0) return &gAboutZhTW;
    if (c.find(L"zh-cn") == 0) return &gAboutZhCN;
    if (c.find(L"zh")    == 0) return &gAboutZhCN;
    if (c.find(L"ja") == 0) return &gAboutJa;
    if (c.find(L"es") == 0) return &gAboutEs;
    if (c.find(L"fr") == 0) return &gAboutFr;
    if (c.find(L"sk") == 0) return &gAboutSk;
    if (c.find(L"cs") == 0) return &gAboutCs;
    if (c.find(L"uk") == 0) return &gAboutUk;
    if (c.find(L"de") == 0) return &gAboutDe;
    if (c.find(L"it") == 0) return &gAboutIt;
    if (c.find(L"pt") == 0) return &gAboutPtPt;
    if (c.find(L"ru") == 0) return &gAboutRu;
    if (c.find(L"pl") == 0) return &gAboutPl;
    if (c.find(L"nl") == 0) return &gAboutNlNl;
    if (c.find(L"sv") == 0) return &gAboutSv;
    if (c.find(L"da") == 0) return &gAboutDa;
    if (c.find(L"nb") == 0) return &gAboutNb;
    if (c.find(L"fi") == 0) return &gAboutFi;
    if (c.find(L"ko") == 0) return &gAboutKo;
    if (c.find(L"ar") == 0) return &gAboutAr;
    if (c.find(L"he") == 0) return &gAboutHe;
    if (c.find(L"hi") == 0) return &gAboutHi;
    if (c.find(L"th") == 0) return &gAboutTh;
    if (c.find(L"vi") == 0) return &gAboutVi;
    if (c.find(L"id") == 0) return &gAboutId;
    if (c.find(L"hr") == 0) return &gAboutHr;
    if (c.find(L"sl") == 0) return &gAboutSl;
    if (c.find(L"lt") == 0) return &gAboutLt;
    if (c.find(L"lv") == 0) return &gAboutLv;
    if (c.find(L"et") == 0) return &gAboutEt;
    if (c.find(L"sr") == 0) return &gAboutSrLatn;
    if (c.find(L"ms") == 0) return &gAboutMs;
    if (c.find(L"fil") == 0) return &gAboutFil;
    if (c.find(L"ga") == 0) return &gAboutGa;

    return &gAboutEn;
}