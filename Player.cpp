#include "Player.hpp"

Player::Player(){

}

Player::~Player(){

}

void Player::init(int xPos, int yPos, int height, int width){

}

void handleEvents(){
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type)
    {
case SDL_KEYDOWN:
printf("%s\n", SDL_GetKeyName(event.key.keysym.sym));
    switch (event.key.keysym.sym)
    {
    case SDLK_w:
        yChange = -1 * speedMod;
        break;
    case SDLK_d:
        xChange = 1 * speedMod;
        break;
    case SDLK_s:
        yChange = 1 * speedMod;
        break;
    case SDLK_a:
        xChange = -1 * speedMod;
        break;
    default:
        break;
    }
    default:
        break;
    }

}

void update(){

}

void render(){

}

void clean(){

}