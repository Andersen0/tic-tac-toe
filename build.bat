@echo off
if not exist obj mkdir obj
if not exist bin mkdir bin

echo Compiling source files...
g++ -c src/main.cpp -o obj/main.o -I./include
g++ -c src/Game.cpp -o obj/Game.o -I./include
g++ -c src/Board.cpp -o obj/Board.o -I./include
g++ -c src/Player.cpp -o obj/Player.o -I./include

echo Linking...
g++ obj/main.o obj/Game.o obj/Board.o obj/Player.o -o bin/tic-tac-toe.exe

echo Build complete!