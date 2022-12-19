# Youtube Downloader

[![License](https://img.shields.io/badge/License-GPLv3-red.svg)](https://www.gnu.org/licenses/gpl-3.0.en.html)

Simple QT-frontend for [yt-dlp](https://github.com/yt-dlp/yt-dlp).

youtube-dl is able to download lots of videos from streaming sites, not only from YouTube.
See [supported sites](https://rg3.github.io/youtube-dl/supportedsites.html).

## Installing

### GNU/Linux
Check out the [requirements](#requirements). You can choose to compile the binary yourself or
use the binary I compiled (found in Releases). Be sure to give the binary execution rights.

### Windows
There is an executable installer for Windows found in the releases called `setup_windows.exe`.
A portable version can be found in the 7zip archive `youtube-dl-qt-windows`.

## Requirements

### GNU/Linux

* Qt5
* yt-dlp

Both are available in most repositories.

#### Ubuntu/Mint/Debian

The packages you need to install are:
```
libqt5core5a
libqt5gui5
libqt5widgets5
yt-dlp
ffmpeg (recommended) / libav for Debian
```
For building:
```
qtbase5-dev
```
Note that the youtube-dl version in the Ubuntu repositories is outdated and may
not support all the sites you expect. To install the latest version of youtube-dl
check out their [installation instructions](https://github.com/rg3/youtube-dl#installation).

#### Arch Linux

Packages needed:
```
qt5-base
yt-dlp
ffmpeg (recommended)
```

I could be missing one. If this is the case, report an issue.

## Compiling

First, clone the git repository.

`clone git@github.com:ToCodeABluejay/open-yt-dl-qt.git`

Go into the directory:

`cd open-yt-dl-qt`

Run:

```
make clean
qmake -config release
make
sudo make install
```

The executable should be named `youtube-dl-qt`.

# License

[![GNU GPLv3 Image](https://www.gnu.org/graphics/gplv3-127x51.png)](http://www.gnu.org/licenses/gpl-3.0.en.html)  

open-yt-dl-qt is Free Software: You can use, study share and improve it at your
will. Specifically you can redistribute and/or modify it under the terms of the
[GNU General Public License](https://www.gnu.org/licenses/gpl.html) as
published by the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
