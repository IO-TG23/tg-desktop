FROM debian:latest
RUN apt-get update && \
apt-get install -y build-essential bzip2 libgtk2.0-dev libgtk-3-dev libsm6 x11-xserver-utils curl libcurl4-gnutls-dev libjsoncpp-dev libjsoncpp25 libjsoncpp-dev

COPY *.[^fo]* Makefile /

RUN chmod +x install_wx.sh && ./install_wx.sh
RUN echo "export NO_AT_BRIDGE=1" >> ~/.bashrc
