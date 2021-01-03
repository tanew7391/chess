#pragma once
#include "GameObject.hpp"

class King: public GameObject
{
public:
    King(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, bool isBlack);
    ~King();

    bool isMoveValid(int xPos, int yPos) const;

private:

};