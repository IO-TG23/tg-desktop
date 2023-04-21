# tg-desktop

## Opis

Aplikacja desktopowa komisu samochodowego dedykowana dla właściciela komisu, pracowników oraz klientów chcących sprzedać pojazd. Umożliwia dodanie nowych ofert poprzez wypełnienie formularza, import istniejących pojazdów z pliku, eksport informacji o dostępnych pojazdach, a także dla właściciela i pracowników logowanie i rejestrację.


## Konfiguracja:
``` bash
sudo docker build -t nazwa .
```

``` bash
xhost +
```

## Uruchomienie konsoli:
``` bash
sudo docker run -e DISPLAY=$DISPLAY -v /tmp/.X11-unix/:/tmp/.X11-unix/ -it nazwa /bin/bash
```
