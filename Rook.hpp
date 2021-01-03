#pragma once
#include "GameObject.hpp"

class Rook: public GameObject
{
public:
    Rook(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, bool isBlack);
    ~Rook();

    bool isMoveValid(int xPos, int yPos) const;

private:

};