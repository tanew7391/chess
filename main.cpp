#include "Game.hpp"

Game *game = nullptr;

int main(int argc, char * argv[]){
    
    const int fps = 60;
    const int frameDelay = 1000/fps;

    Uint32 frameStart;
    int frameTime;


    game = new Game();
    game->init("Taylor's game", 0, 0, 800, 640, false);
    while(game->running()){
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if(frameDelay > frameTime){
            SDL_Delay(frameDelay - frameTime); 
        }
    }

    game->clean();
    

    return 0;
}