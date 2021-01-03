#pragma once
#include "GameObject.hpp"

class Pawn: public GameObject
{
public:
    Pawn(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, bool isBlack);
    ~Pawn();

    bool isMoveValid(int xPos, int yPos) const;

private:

};