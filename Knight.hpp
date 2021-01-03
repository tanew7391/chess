#pragma once
#include "GameObject.hpp"

class Knight: public GameObject
{
public:
    Knight(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, bool isBlack);
    ~Knight();

    bool isMoveValid(int xPos, int yPos) const;

private:

};