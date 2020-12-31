#pragma once

#include "Game.hpp"

class TextureManager{

public:
    static SDL_Texture* LoadTexture(const char* texture, SDL_Renderer* ren);
};