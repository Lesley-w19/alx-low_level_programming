#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c lib/*.c
ar -rc liball.a *.o
ranlib liball.a
