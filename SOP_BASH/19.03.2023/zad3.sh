#!/bin/bash

if [[ $1 =~ \.sh$ ]]; then
    echo "Plik ma rozszerzenie .sh"
else
    nowe_rozszerzenie="${1}.sh"
    echo "Rozszerzenie pliku zostanie zmienione na $nowe_rozszerzenie"
    mv "$1" "$nowe_rozszerzenie"
fi