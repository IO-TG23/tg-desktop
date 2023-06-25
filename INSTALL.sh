#!/bin/bash

sudo apt-get update
sudo apt-get install -y build-essential bzip2 libgtk2.0-dev libgtk-3-dev libsm6 x11-xserver-utils curl libcurl4-gnutls-dev libjsoncpp-dev libjsoncpp25 libjsoncpp-dev git

if [ $# -ge 1 -a "$1" = "download" ]; then
    git clone https://github.com/IO-TG23/tg-desktop.git
    cd tg-desktop
fi

chmod +x install_wx.sh && ./install_wx.sh

make