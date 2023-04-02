#!/bin/bash

if [ -f "SOP_display.sh" ]; then
    echo "Uruchamianie skryptu SOP_display.sh"
    ./SOP_display.sh
elif [ $# -eq 1 ] && [ -f "$1" ]; then
    echo "Uruchamianie $1"
    ./"$1"
else
    echo "ERROR: Brak pliku lub niewłaściwy argument"
fi