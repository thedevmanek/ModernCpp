#!/usr/bin/env bash
echo 'Make build folder in root dir'
mkdir build
echo "Compile both cpp files and output to build folder"
clang++ -c -Iinclude/ src/sum.cpp -o build/sum.o
clang++ -c -Iinclude/ src/subtract.cpp -o build/subtract.o 
echo 'Make an archive of these two objects and create library'
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o
echo 'Build file created in results/bin dir'
c++ -std=c++17 src/main.cpp -I ./include/ -L ./build/ -lipb_arithmetic -o ./results/bin/main
