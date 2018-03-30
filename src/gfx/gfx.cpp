#include <stdio.h>
//#include "src/gfx/mainFrame.h" // for later use
#include <SDL.h>

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 760;

// Starts up SDL and creates a window
bool init();

// Loads media
bool loadMedia();

// Frees media and shuts down SDL
void close();

// The window rendered to
SDL_Window* window = NULL;

// The surface contained by the window
SDL_Surface* screenSurface = NULL;

// Image surface
SDL_Surface* imgSurface = NULL;

bool init(){

    bool succes = true;
    
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf( "SDL could not initialise! SDL_error %s\n : ", SDL_GetError() );
        succes = false;
    }
    else
    {
        window = SDL_CreateWindow(
                "PlaceInSpace", 
                SDL_WINDOWPOS_UNDEFINED, 
                SDL_WINDOWPOS_UNDEFINED, 
                SCREEN_WIDTH, 
                SCREEN_HEIGHT, 
                SDL_WINDOW_SHOWN
                );

        if (window == NULL){
            printf("Window could not be created : Error %S", SDL_GetError());
            succes = false;
        }
        else{
            screenSurface = SDL_GetWindowSurface(window);
        }

    }

    return succes;

}

bool loadMedia(){

    // Initialise succes flag
    bool succes = true;

    imgSurface = SDL_LoadBMP("assets/test_img.bmp");

    if(imgSurface == NULL)
    {
        printf("failed to load image");
        succes = false;
    }

    return succes;

}

void close(){

    // Deallocate surface
    SDL_FreeSurface(imgSurface);
    imgSurface = NULL;

    // Destroy window
    SDL_DestroyWindow(window);
    window = NULL;

    // quit SDL subsystems
    SDL_Quit();
}

int main(int argc, char** argv){

    if(!init())
    {
        printf("failed to initialize\n");
    }
    else
    {
        if(!loadMedia())
        {
            printf("Failed to load media");
        }
        else
        {
        // Apply image
        SDL_BlitSurface(imgSurface, NULL, screenSurface, NULL);

        // Update the window surface
        SDL_UpdateWindowSurface(window);

        // wait 5 seconds
        SDL_Delay(5000);
        }
    }

    close();

    return 0;
}