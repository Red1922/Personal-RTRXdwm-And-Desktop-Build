# Personal-DWM-and-desktop-Build
This Repository contains my DWM build along with related Desktop Files.

# Attention

Before Compiling, remember to check the config.def.h file for personalized issues. As this build was created solely to suit my own needs and in accordance to my system. Addresses and Program Commands may not resonate with your system.

# Desktop Preview

With Picom (Can cause issues like completely transparent windows sometimes with client opacity patch, you may remove the patch if you prefer using picom.conf, I generally do not use my system with Picom so I did not bother)

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Screenshots/Screenshot-(date%20+2022-09-27_00:38:55).png?raw=true)


Without Picom

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Screenshots/Screenshot-(date%20+2022-09-27_00:38:50).png?raw=true)


Few Apps

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Screenshots/Screenshot-(date%20+2022-09-27_00:37:20).png?raw=true)


Workflow

https://i.imgur.com/s5CPBwG.mp4

# Wallpaper

![Personal-DWM-and-desktop-Build](https://github.com/Red1922/Personal-DWM-and-desktop-Build/blob/main/Media/Wallpapers/SolMount.jpg?raw=true)

# SLSTATUS

[Here](https://github.com/Red1922/slstatus)

# Other Information

- I used Artix/Runit Base iso for installation.

- Terminal: Alacritty; `neofetch | lolcat` to get rainbow coloured neofetch.

- Shell: ZSH; (Some of my dotfiles and scripts may have `#!/bin/zsh` as the shebang, so replace it with `#!/bin/sh` or `#!/bin/bash` to make them work in case it doesn't.)

Steps to switch shell (for convenience)
```
sudo -s

chsh -s /bin/zsh root

exit

chsh -s /bin/zsh username
```

- Icon Theme: Candy Icons

- Mouse Cursor Theme: Nordzy Cursors (Light)

- GTK Theme: Numix Solarized Dark Cyan

- GTK Appearance configured using lxappearance.

- QT Appearance configured using qt5ct.

- After installing qt5ct and qt5-styleplugins and configuring it, please add `QT_QPA_PLATFORMTHEME=qt5ct` to /etc/environment and restart your system for making qt apps respect your theming.

- File Manager: Thunar-extended; Plugins and Utilities: thunar-archive-plugin, xarchiver, file-roller & tumblerd

- Code & Text Editor: NVim (Terminal); DOOM Emacs & Xed (GUI).

- IDE: VSCodium.

- Audio Visualizer: cava

- I use pipewire (additionally pipewire-pulse, wireplumber and related packages + lib32 packages).

- Screenshot utilities used: Scrot + Xclip (Lightweight and instant screenshots) and Flameshot (For in case I need to make edits to the Screenshot).

- I am using network-manager-applet (`nmcli` / `nmtui` (terminal)).

Starting Services in Runit by symlinking
```
sudo ln -s /etc/runit/sv/<service-name> /run/runit/service/
```

- For issues please DM me on revolt.chat ---> `@R.T.Redreovich`

# Special Thanks to

- EFLinux for a great [Artix Linux/Runit installation video guide.](https://www.youtube.com/watch?v=mIpZA6z-Ctk)

- Endeavour OS/BSPWM Community Edition for their [dotfiles.](https://github.com/EndeavourOS-Community-Editions/bspwm)

- My friends & many other people who brought me to GNU/Linux and helped me learn & troubleshoot.
