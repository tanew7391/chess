#pragma once
#include "GameObject.hpp"

class Knight: public GameObject
{
public:
    Knight(SDL_Texture* texture, Point newGridPosition, TileSet* newTileInfo, bool isBlack);
    ~Knight();

    bool isMoveValid(Point move) const;

private:

};