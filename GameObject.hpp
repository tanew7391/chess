#pragma once
#include "Game.hpp"

class GameObject{
public:
    GameObject(const char* texturesheet, int x, int y);
    ~GameObject();
    void Update();
    void Render();
    virtual bool isMoveValid(int xPos, int yPos) = 0;

private:
    SDL_Texture* objTexture;
    SDL_Rect srcRect,destRect;

protected:
    int xpos;
    int ypos;

};