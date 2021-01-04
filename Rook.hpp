#pragma once
#include "GameObject.hpp"

class Rook: public GameObject
{
public:
    Rook(SDL_Texture* texture, Point newGridPosition, TileSet* newTileInfo, bool isBlack);
    ~Rook();

    bool isMoveValid(Point move) const;

private:

};