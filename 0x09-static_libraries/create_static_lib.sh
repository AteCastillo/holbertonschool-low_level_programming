#!/bin/bash

gcc -c -Wall -pedantic -Werror -Wextra *.c | xargs ar rc liball.a *.o

