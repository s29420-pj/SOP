#!/bin/bash

echo "Wybierz opcje: "
echo "MENU"
echo "c - aktualny katalog"
echo "u - nazwa użytkownika"
echo "h - katalog domowy"

read option

case $option in
    "c") pwd;;
    "u") echo "Użytkownik $(whoami)";;
    "h") echo "Katalog domowy: $HOME";;
esac
