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
    SDL_Surface* temp = SDL_LoadBMP("sdl_logo.bmp");

    //convert bitmap to converted
    SDL_Surface* converted = SDL_DisplayFormat(temp);

    SDL_Event event;
    int gameover = 0;

    while (!gameover){
        //search for event
        if (SDL_PollEvent(&event)){//TODO: WTF is a PollEevent?
            switch(event.type){
                //close button clicked
                case SDL_QUIT: //TODO: what is this case?
                    gameover = 1;
                    break;

                //keyboard case
                case SDL_KEYDOWN:
                    switch(event.key.keysym.sym){
                        case SDLK_ESCAPE:
                            case SDLK_q:
                                gameover = 1;
                                break;
                    }
                    break;
            }
        }

        //draw background
        SDL_BlitSurface(converted, NULL, screen, NULL);

        //update screen
        SDL_UpdateRect(screen, 0, 0, 0, 0);

    }

    //free background surface
    SDL_FreeSurface(converted)

    //cleanup sdl
    SDL_Quit();
    return 0;
}