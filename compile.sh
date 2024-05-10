#!/bin/bash

if [ -n "$1" ]; then
    OUT=$1
else
    OUT="cowsay"
fi

gcc -g -std=c99 -Wall -pedantic -fsanitize=address cow.c -o $OUT && echo -e "[+]\tCompilation success." || echo -e "[-]\tCompilation exception."