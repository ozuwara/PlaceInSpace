INCLUDE_PATHS = -I\include\SDL2

#LIBRARY_PATHS specifies the additional library paths we'll need
LIBRARY_PATHS = -L\lib

make: 
	gcc -c src/gfx/mainFrame.cpp -o src/gfx/mainFrame.o
	gcc -c main.cpp -o main.o

	gcc -o main.exe main.o src/gfx/mainFrame.o