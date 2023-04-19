# tg-desktop

Konfiguracja:
``` bash
sudo docker build -t nazwa .
```

Uruchomienie konsoli:
``` bash
sudo docker run -e DISPLAY=$DISPLAY -v /tmp/.X11-unix/:/tmp/.X11-unix/ -it nazwa /bin/bash
```
