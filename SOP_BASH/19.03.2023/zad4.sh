#!/bin/bash

count=$(find . -maxdepth 1 -type f | wc -l)

if [[ $count -gt 5 ]]; then
    echo "W tym katalogu jest więcej niż 5 plików"
fi