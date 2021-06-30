#!/bin/bash

gcc -c eden.c
ar cr libeden.a eden.o
cp ./libeden.a /usr/lib
cp ./eden.h /usr/include

echo "Done"

