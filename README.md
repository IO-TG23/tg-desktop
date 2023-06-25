# tg-desktop

## Opis

Aplikacja desktopowa będąca częścią projektu "Tanie graty 23", dotyczącego komisu samochodowego specjalizującego się w sprzedaży tanich pojazdów. Jest dedykowana dla właściciela komisu, pracowników oraz klientów chcących sprzedać pojazd. Zrealizowano następujące funkcjonalności:
 * rejestracja oraz logowanie
 * możliwość dodania nowego pojazdu poprzez wypełnienie formularza
 * dodanie nowego klienta
 * import/ eksport informacji o pojazdach
 * eksport danych o klientach do plików o formacie: xlsx lub pdf


## Konfiguracja dockera:
``` bash
sudo docker build -t nazwa .
```

``` bash
xhost +
```

## Uruchomienie konsoli dockera:
Aplikację można uruchomić korzystając z pliku wykonywalnego exe lub Dockera. Wówczas należy użyć komendy:

``` bash
sudo docker run -e DISPLAY=$DISPLAY -v /tmp/.X11-unix/:/tmp/.X11-unix/ -it nazwa /bin/bash
```

## Lokalna instalacja
Instalator jest przygotowany dla dystrybucji systemu GNU Linux opartych na Debianie.
W celu instalacji należy pobrać instalator i nadać uprawnienia do wykonywania:
``` bash
chmod +x INSTALL.sh
```
Następnie konieczne jest wywołanie skrypu:
``` bash
./INSTALL.sh # jeśli pobrano wcześniej repozytorium github
./INSTALL.sh download # w przeciwnym wypadku
```

Uruchomienie (jeśli wybrano opcję *download* przy instalacji należy wejść do katalogu *tg-desktop*) - polecenie:
``` bash
./a.out
```
lub kliknąć na plik wykonywalny w odpowiednim katalogu.
