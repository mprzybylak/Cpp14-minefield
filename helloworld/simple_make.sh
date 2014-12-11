#!/bin/bash

clear
g++ -std=c++0x -Wall -Werror -pedantic $1.cpp -o $1.out
./$1.out
