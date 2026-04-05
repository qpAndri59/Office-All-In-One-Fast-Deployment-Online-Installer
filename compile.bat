windres resources.rc -o resources.o
g++ -g main.cpp resources.o -o .\out\Setup.exe -mwindows -lgdi32 -lcomctl32 -lshell32 -lole32 -luuid -static -static-libgcc -static-libstdc++
PAUSE