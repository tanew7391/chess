#pragma once
#include "GameObject.hpp"

class Queen: public GameObject
{
public:
    Queen(SDL_Texture* texture, Point newGridPosition, TileSet* newTileInfo, bool isBlack);
    ~Queen();

    bool isMoveValid(Point move) const;

private:

};