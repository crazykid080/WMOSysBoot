@echo off

g++ -march=x86-64 -o "MemDeath.exe" main.cpp Files.h Files.cpp -static-libgcc -static-libstdc++

@echo on