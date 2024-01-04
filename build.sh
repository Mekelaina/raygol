#!/usr/bin/bash

gcc -Wall -Wextra -I/lib/raylib -o main src/main.c -L/lib/raylib -lraylib -lm
