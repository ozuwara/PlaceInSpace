make: 
	gcc -c src/gfx/mainFrame.cpp -o src/gfx/mainFrame.o
	gcc -c main.cpp -o main.o

	gcc -o main.exe main.o src/gfx/mainFrame.o