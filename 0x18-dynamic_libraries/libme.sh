#!/bin/bash
gcc -c -fPIC calculator.c; gcc -shared -o 100-operations.so calculator.o
