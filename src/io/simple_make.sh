#!/bin/bash

clear

rm -r target/*
cd ./src
g++ -std=c++0x -Wall -Werror -pedantic $1.cpp -o $1.out
cd ..
mv ./src/$1.out ./target
cp ./resources/* target

cd ./target
./$1.out

cd ..