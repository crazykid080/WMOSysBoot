@echo off

g++ -march=x86-64 -o "MemDeath.exe" main.cpp -static-libgcc -static-libstdc++

@echo on