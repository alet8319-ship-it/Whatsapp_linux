Here’s your README with **stars, sponsors, and GitHub feature sections** added — it keeps your original clean structure but adds the kind of community and repo-engagement content you’d see in professional open-source projects.

---

# **WhatSie**

> A feature-rich WhatsApp Web client built with **Qt WebEngine** for Linux Desktop.

---

<div align="center">

[![GitHub Stars](https://img.shields.io/github/stars/freelancetaha/whatsie?style=for-the-badge)](https://github.com/freelancetaha/whatsie/stargazers)
[![GitHub Forks](https://img.shields.io/github/forks/freelancetaha/whatsie?style=for-the-badge)](https://github.com/freelancetaha/whatsie/fork)
[![License](https://img.shields.io/github/license/freelancetaha/whatsie?style=for-the-badge)](LICENSE)
[![Issues](https://img.shields.io/github/issues/freelancetaha/whatsie?style=for-the-badge)](https://github.com/freelancetaha/whatsie/issues)
[![Pull Requests](https://img.shields.io/github/issues-pr/freelancetaha/whatsie?style=for-the-badge)](https://github.com/freelancetaha/whatsie/pulls)
[![Build Status](https://img.shields.io/github/actions/workflow/status/freelancetaha/whatsie/build.yml?style=for-the-badge)](https://github.com/freelancetaha/whatsie/actions)
[![Made With Qt](https://img.shields.io/badge/Made%20with-Qt-blue?style=for-the-badge)](https://www.qt.io)

</div>

---

## 🌟 Overview

**WhatSie** brings a native desktop experience to WhatsApp Web, offering advanced controls, polished UI themes, and system-level integration.
It’s lightweight, powerful, and built for users who prefer a desktop-optimized workflow.

---

## 🧩 Key Features

### 🎨 Interface & Themes

* Light and Dark mode with automatic switching
* Full-width view mode
* Configurable theme switching based on time of day

### 🔔 Notifications & Audio

* Native and custom notification options
* Adjustable popup timeout
* Mute all audio or disable media auto-play

### 🧰 Productivity & System Integration

* Built-in download manager
* Global keyboard shortcuts
* Minimize to tray on start
* “Do Not Disturb” mode
* Configurable close button action (exit or minimize)

### 🔒 Privacy & Security

* App Lock with password management
* Auto-lock after inactivity
* Hardware permission manager (camera, mic, etc.)

### 🧠 Customization

* Adjustable page zoom
* Configurable user-agent
* Widget styling
* Storage management for cache and persistent data

---

## ⚙️ Command Line Options

```bash
Usage: whatsie [options]
Feature-rich WhatsApp Web client based on Qt WebEngine

Options:
  -h, --help           Show help information
  -v, --version        Display version info
  -b, --build-info     Show detailed build info
  -w, --show-window    Show the main window
  -s, --open-settings  Open Settings dialog
  -l, --lock-app       Lock the app
  -i, --open-about     Open About dialog
  -t, --toggle-theme   Toggle between dark and light themes
  -r, --reload-app     Reload the application
  -n, --new-chat       Open new chat prompt
```

---

## 🧱 Build Instructions (Linux)

### **Requirements**

* `git`
* `libx11-dev`, `libx11-xcb-dev`
* **Qt 5.9+** (Qt 5.15 recommended)

  * `webengine`
  * `webenginewidgets`
  * `positioning`

---

### **Steps**

```bash
# 1. Clone the repository
git clone https://github.com/alet8319-ship-it/Whatsapp_linux.git

# 2. Enter the source directory
cd Whatsapp_linux/src

# 3. Generate the build files
qmake

# 4. Build the app
make -j4

# 5. Run the app
./whatsie

# 6. Optionally install system-wide
sudo make install
```

---

## 📦 Installation via Package Manager

### **Snap**

```bash
sudo snap install whatsie
```

### **Arch Linux (AUR)**

```bash
yay -S whatsie-git
```

---

## 📸 Screenshots

| Light Theme                                                                           | Dark Theme                                                                           |
| ------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------ |
| ![Light](https://github.com/keshavbhatt/whatsie/blob/main/screenshots/1.jpg?raw=true) | ![Dark](https://github.com/keshavbhatt/whatsie/blob/main/screenshots/2.jpg?raw=true) |

| Settings                                                                                 | App Lock                                                                                 | Shortcuts & Permissions                                                                   |
| ---------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------- |
| ![Settings](https://github.com/keshavbhatt/whatsie/blob/main/screenshots/4.jpg?raw=true) | ![App Lock](https://github.com/keshavbhatt/whatsie/blob/main/screenshots/3.jpg?raw=true) | ![Shortcuts](https://github.com/keshavbhatt/whatsie/blob/main/screenshots/5.jpg?raw=true) |

---

## 💖 Support & Sponsorship

If you find **WhatSie** useful, consider supporting its development:

* ⭐ **Star this repo** to show appreciation
* 💬 **Share feedback or feature ideas** in [Discussions](https://github.com/freelancetaha/whatsie/discussions)
* 💰 **Sponsor** via [GitHub Sponsors](https://github.com/sponsors/freelancetaha)
* ☕ **Buy me a coffee** on [BuyMeACoffee](https://www.buymeacoffee.com/freelancetaha)

Every star and contribution helps keep the project alive!

---

## 🧩 Customization Template

If you’re forking this project or repackaging it:

* Update `.pro` → `TARGET = Taha Ale`
* Edit `about.cpp` for custom branding
* Adjust defaults in `settings.json`
* Update CLI name in `main.cpp`

---

## 💬 Contributing

Pull requests, bug reports, and feature suggestions are welcome.
Please check [issues](https://github.com/alet8319-ship-it/Whatsapp_linux/issues) before opening new ones.

1. Fork this repo
2. Create a new branch (`git checkout -b feature/YourFeature`)
3. Commit and push your changes
4. Submit a PR

---

## 🧭 Connect

* 🐙 GitHub: [@alet8319-ship-it](https://github.com/alet8319-ship-it)
* 💬 Discussions: [Community Forum](https://github.com/alet8319-ship-it/Whatsapp_linux/discussions)
* ✉️ Email: [alet8319@gmail.com](mailto:alet8319@gmail.com)

---

## 📄 License

Licensed under the **GPL-3.0 License**.
See [LICENSE](LICENSE) for full terms.

---

Would you like me to include a **contributors graph**, **release badges**, or a **“Top Languages” GitHub stats section** (like in most open-source dashboards)? That can make your README even more dynamic.