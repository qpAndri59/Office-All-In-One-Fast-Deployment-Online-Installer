# Office All-In-One Fast Deployment Online Installer

**Lightweight, portable, and intelligent** Deploy Microsoft Office to hundreds of computers in minutes.  
No more searching for XML variables, no more command‑line headaches. Just plug, click, and go.

Made with love by Andreea Mirela, EU citizen.

---

## 📄 License

This project is licensed under the **GPL‑2.0‑only**.  
You are free to use, modify, and distribute it under the terms of the GNU General Public License version 2.  
See the [LICENSE](LICENSE) file for details.

---

## 🚀 What is this and why should you care?

Imagine you have to install Microsoft Office on 50, 100, or even 200 computers in a single day.  
The standard way? Copy the Office Deployment Tool (ODT) to each machine, craft a `configuration.xml` by hand (or copy‑paste from the web), open a command prompt, and type a cryptic command.  
Now repeat that for every single computer.  
It’s slow, error‑prone, and incredibly frustrating – especially if you’re not a command‑line expert.

**This tool changes everything.**

- Place the **tool** on a USB stick together with a folder named `packages` that contains `odt.exe` (the official Microsoft Office Deployment Tool).
- Run the tool **once** on any PC, select the exact Office version, architecture, language, and install path you need, then click **“Generate autorun.inf”**.
- Close the tool, remove the USB stick, and insert it into the first target computer.
- On the target computer, simply **double‑click `Setup.exe`** (the compiled tool).  
  The tool detects the `autorun.inf` file, reads your pre‑configured settings, and immediately launches the Office installation – **no questions, no delays** (it will display the offical microsoft ODT UI because the user is responsabile for accepting the EULA).
- As soon as the Office installer starts (you see the progress bar), **pull out the USB stick** and move to the next computer.  
  The installation continues independently from the local hard drive.

With this workflow, you can **deploy Office to hundreds of computers in a fraction of the time** it would normally take.  
It’s the perfect solution for IT pros, system integrators, and anyone who needs to mass‑install Microsoft Office quickly and reliably.

---

## ✨ Features

1. **Graphical selection interface**  
   Microsoft provides only a command‑line tool (`odt.exe`) and expects you to write XML configuration files manually.  
   This tool offers a clean, intuitive UI that lets you pick:
   - Office channel (e.g., Microsoft 365 Monthly, Office 2024, Office 2021, etc.)
   - Product (Professional Plus, Home & Business, Project, Visio, etc.)
   - Architecture (64‑bit recommended or 32‑bit)
   - Language (over **40 languages** supported)
   - Installation folder

2. **Full language support**  
   The interface is translated into dozens of languages. No matter where you are, the tool speaks your language.

3. **One‑click autorun generation**  
   After you configure your desired setup, press **“Generate autorun.inf”**. The tool writes a simple `autorun.inf` file containing all your choices. When the tool is launched later on another computer, it automatically reads that file and starts the installation – perfect for USB‑based mass deployment.

4. **Remove all Office keys**  
   Sometimes multiple Office installations or leftover product keys cause activation issues. The tool includes a **“Remove all Office keys”** button that scans common Office installation folders, lists installed product keys (using `ospp.vbs`), and lets you remove them in bulk. This can be a lifesaver when troubleshooting or before a fresh deployment.

5. **Extremely lightweight**  
   The entire package – including the tool, all resources, and the official `odt.exe` – fits in **less than 50 MB**.  
   Carry it on any USB stick without wasting space.

---

## 🛠 Technical details & compilation

### How it works (under the hood)

The application is a single native Windows GUI program written in C++ using the Win32 API.  
It uses the **Windows Imaging Component (WIC)** to load embedded PNG images (logos, info icon) from resources and to load external images from the `assets` folder.  
All UI strings are stored in a `translations.h` header, allowing the tool to switch languages on the fly.

When you click **“Install”**, the tool:

- Copies `odt.exe` from the `packages` folder into the selected installation directory.
- Writes a `configuration.xml` file (from an embedded template) with the chosen parameters.
- Launches `odt.exe /configure configuration.xml` in a separate process.
- Shows a loading spinner and waits for the installation to finish.

If the tool finds an `autorun.inf` file in its own folder **and** the file contains all required entries (`channel`, `product`, `arch`, `lang`, `path`), it automatically starts the installation **without showing the UI**. This is what enables the silent deployment workflow. (it will show the Microsoft ODT UI because the user is responsabile for accepting EULA)

### Folder structure

For the tool to work correctly, your USB stick must have the following layout:
```
USB:
│ Setup.exe <-- The compiled tool
│ autorun.inf <-- Generated by the tool (optional)
│
├───packages
│ odt.exe <-- The official Microsoft Office Deployment Tool
```

### Compiling from source

You need a working C++ compiler that supports the Win32 API (e.g., MinGW‑w64, MSVC).  
The project consists of one main `.cpp` file (`main.cpp`) and a resource file (`.rc`) that must be compiled into `resources.res`.  
The resource file embeds:

- Icon (`IDI_APP_ICON`)
- Fonts (`Segoe UI` embedded as `RT_RCDATA`)
- PNG images for product logos (e.g., `IDB_IMG_365`, `IDB_IMG_2024`, etc.)
- The XML configuration template (`IDR_MY_XML`)

A typical compilation command using **MinGW‑w64 (g++)** looks like this:

```bash
g++ -g main.cpp resources.res -o .\out\Setup.exe -mwindows -lgdi32 -lcomctl32 -lshell32 -lole32 -luuid -static -static-libgcc -static-libstdc++
```

If you are using Visual Studio, you can compile the resource file with rc.exe and link the object files accordingly.

# Example autorun.inf content

When you generate autorun.inf from the UI, the file will look similar to this:
```inf
[autorun]
label=Microsoft Office Setup
icon=Setup.exe,0
action=Install Microsoft Office
channel=PerpetualVL2024
product=ProPlus2024Volume
arch=64
lang=en-us
path=C:\Temp
```

channel : One of the channel IDs defined in the code (e.g., Current, SemiAnnual, PerpetualVL2024, …)
product : The product ID (e.g., O365ProPlusRetail, ProPlus2024Volume, …)
arch : 64 or 32
lang : Language code (e.g., en-us, de-de, fr-fr, ro-ro, …)
path : Target installation folder (must be a valid path with enough free space)

If the tool is started and such an autorun.inf exists, it will not show the UI but immediately start the Office installation using the values from the file.

# Adding or modifying translations

All UI strings are defined in translations.h. Each language is represented by a UiStrings structure and an AboutStrings structure.
To add a new language, simply duplicate an existing entry, change the language code, and update the strings. The tool automatically maps language codes to the appropriate structure in UiForLangCode() and AboutForLangCode().

# Resource dependencies

The application relies on the following Windows libraries (already listed in the compilation command):

    comctl32.lib – common controls (progress bar, etc.)

    gdi32.lib – GDI functions (fonts, drawing)

    shell32.lib – shell functions (folder browser, file operations)

    ole32.lib – COM (for the folder picker)

    uuid.lib – GUIDs

    windowscodecs.lib – Windows Imaging Component (PNG loading)

All necessary headers are included in main.cpp; no external third‑party libraries are required.

# Note on Administrator privileges

    The “Remove all Office keys” function needs to run as administrator because it reads and writes to %ProgramFiles%.
    The tool automatically requests elevation (UAC) when that button is clicked.

    The main installation process does not require elevation unless you install to a protected folder (like C:\Program Files). The official Office Deployment Tool will request elevation itself when needed.

# 💡 Tips & tricks

    Prepare your USB stick: Place Setup.exe and a packages folder with odt.exe on the stick. Optionally, pre‑fill the assets folder with a custom info.png (replaces the info icon in the top right corner).

    Test first: Run the tool in UI mode once on a test machine to make sure your network or local installation sources are accessible.

    Multiple configurations: You can keep several autorun.inf files on the same stick and rename them (e.g., autorun_2024.inf) as needed. Just rename the active one to autorun.inf before inserting into a new computer.

    Space check: The tool verifies that the target drive has at least 5 GB free (the default minimum for Office). If there isn’t enough space, a warning is shown and the installation is blocked.

# 🤝 Contributing

Contributions are welcome! Feel free to open issues or pull requests.
Please make sure to keep the code compatible with the GPL‑2.0 license and follow the existing code style.

# 📞 Support

If you encounter any problems, first check that:

    packages\odt.exe is present and valid (you can download the latest version from Microsoft’s official page).

    The target path has enough free disk space.

    You have read/write permissions in the target folder.

For detailed questions, please open an issue on the repository.

# Happy deploying!
With this tool, installing Office on hundreds of machines becomes a breeze.
No more XML, no more command lines – just plug, click, and go.
