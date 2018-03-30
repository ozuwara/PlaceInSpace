OBJS = main.cpp #src/gfx/mainFrame.cpp

CC = g++

INCLUDE_PATHS = -IC:\Users\monop\Source\Repos\PlaceInSpace\PlaceInSpace\include\SDL2

LIBRARY_PATHS = -LC:\Users\monop\Source\Repos\PlaceInSpace\PlaceInSpace\lib

COMPILER_FLAGS = -w -Wl,-subsystem,windows

LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2

OBJS_NAME = main.exe

all : $(OBJS)
	$(CC) $(OBJS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJS_NAME)

#all:
#	gcc -c $(OBJS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o main.o
#	gcc main.o -o $(OBJS_NAME) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS)