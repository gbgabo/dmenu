<div align="center">

```

      ██╗       gabo's fork of             `
      ██║                                  `
████████║█████████████████╗████████╗██╗  ██╗
██╔═══██║██╔═██╔═██╔████╔═╝██╔═══██║██║  ██║
███████████║ ██║ ██║█████████║   ██║███████║
╚══════════╝ ╚═╝ ╚═╝╚════════╝   ╚═╝╚══════╝
dynamic menu

```

dmenu is an efficient dynamic menu for X.

</div>

## Requirements

In order to build dmenu you need the Xlib header files.

## ⚙️ Installation

Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

```
make clean install
```

## 🔄 Running dmenu

See the man page for details.

## ➕ Current Patches

**Visual**

`center`

- centers dmenu in the middle of the screen;
- https://tools.suckless.org/dmenu/patches/center/

`fuzzyhighlight`

- make it so that fuzzy matches gets highlighted;
- requires fuzzymatch patch;
- https://tools.suckless.org/dmenu/patches/fuzzyhighlight/

**Utilities**

`fuzzymatch`

- allows users to type non-consecutive portions of the string to be matched;
- https://tools.suckless.org/dmenu/patches/fuzzymatch/

`mousesupport`

- adds mouse interactions such as scroll and click selection;
- https://tools.suckless.org/dmenu/patches/mouse-support/
