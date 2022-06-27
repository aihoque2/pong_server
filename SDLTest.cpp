#include <iosream>
#include <SDL2/SDL.h>
 

/*
look up "sdl first program" on google
and use the "gamedevgeek" tutorial
*/

int main(){
    /*initalize sdl*/
    int init_status = SDL_Init(SDL_INIT_VIDEO);

    if (init_status < 0){ return 0;} //TODO: set error catching

    //title bar
    SDL_WM_SetCaption("SDL Test", "SDL TEST");

    //create window
    SDL_Surface* screen = NULL;

    //load the bitmap


    return 0;
}