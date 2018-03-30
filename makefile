OBJS = main.cpp src/gfx/mainFrame.cpp

INCLUDE_PATHS = -IC:\Users\monop\Source\Repos\PlaceInSpace\PlaceInSpace\include\SDL2

LIBRARY_PATHS = -LC:\Users\monop\Source\Repos\PlaceInSpace\PlaceInSpace\lib

COMPILER_FLAGS = -w -Wl,-subsystem,windows

LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2

OBJS_NAME = main2.exe

all:
	g++ $(OBJS) $(INCLUDE_PATHS) $(LIRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_PATHS) -o $(OBJS_NAME)