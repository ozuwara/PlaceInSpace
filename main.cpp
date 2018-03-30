#include <stdio.h>
//#include "src/gfx/mainFrame.h" // for later use
#include <SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char** argv){

    printf("running...");

    // The window rendered to
    SDL_Window* window = NULL;
    
    // The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    // Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf( "SDL could not initialise! SDL_error %s\n : ", SDL_GetError() );
    }
    else{
        // Create window
        window = SDL_CreateWindow(
                "PlaceInSpace", 
                SDL_WINDOWPOS_UNDEFINED, 
                SDL_WINDOWPOS_UNDEFINED, 
                SCREEN_WIDTH, 
                SCREEN_HEIGHT, 
                SDL_WINDOW_SHOWN
                );

        if(window == NULL){
            printf("window could not be created! Error: %s\n", SDL_GetError());
        }
        else{
            
            // Get window surface
            screenSurface = SDL_GetWindowSurface(window);

            // Fill the surface white
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

            // Update the surface
            SDL_UpdateWindowSurface(window);

            // Wait 2 seconds 
            // (for testing putposes, proper exit logic should be implemented instead of fixed wait)
            SDL_Delay(2000);
        }
    }

    // Cleanup and exit:

    // Destroy window
    SDL_DestroyWindow(window);

    // Quit SDL subsystem
    SDL_Quit();

    return 0;
}