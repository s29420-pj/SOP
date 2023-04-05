#!/bin/bash

if [ -e "$1" ]
then
    echo "Plik $1 istnieje w bieżącym katalogu"
else
    echo "Plik $1 nie istnieje w bieżącym katalogu"
fi