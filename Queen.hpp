#pragma once
#include "GameObject.hpp"

class Queen: public GameObject
{
public:
    Queen(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, bool isBlack);
    ~Queen();

    bool isMoveValid(int xPos, int yPos) const;

private:

};