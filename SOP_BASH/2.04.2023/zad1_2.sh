#!/bin/bash

counter=1

# a) nazwa programu
echo "Nazwa programu: $0"

# b) Wartości argumentów:
for i in "$@"
do
    echo "Argument $counter $i"
    counter=$(($counter + 1))
done

# c) Wszystkie argumenty:
echo "Wszystkie argumenty $*"

# d) Liczba argumentów:
echo "Liczba argumentów: $#"

# e) PID
echo "PID: $$"