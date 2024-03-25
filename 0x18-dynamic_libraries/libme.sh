#!/bin/bash
gcc -c -fPIC calculator.c -o calculator.o; gcc -shared -o 100-operations.so calculator.o
