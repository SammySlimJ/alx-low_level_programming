#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
rm -f *.o
printf "Dynamic library liball.so created successfully!\n"
