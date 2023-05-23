FROM debian:latest
RUN apt update && \
apt install -y build-essential bzip2 libgtk2.0-dev libgtk-3-dev libsm6 x11-xserver-utils

COPY *.[^fo]* Makefile /

RUN chmod +x install_wx.sh && ./install_wx.sh
RUN echo "export NO_AT_BRIDGE=1" >> ~/.bashrc
