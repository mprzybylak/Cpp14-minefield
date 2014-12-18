#!/bin/bash

MAKE_SCRIPT = "#!/bin/bash

clear

rm -r target/*
cd ./src
g++ -std=c++0x -Wall -Werror -pedantic $1.cpp -o $1.out
cd ..
mv ./src/$1.out ./target
cp ./resources/* target

clear
cd ./target
./$1.out

cd .."

clear

mkdir $1
mkdir $1/src
mkdir $1/target
mkdir $1/resources
touch $1/simple_make.sh
echo $MAKE_SCRIPT > $1/simple_make.sh
chmod +x $1/simple_make.sh

echo $1 "ready"
 