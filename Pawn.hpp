#pragma once
#include "GameObject.hpp"

class Pawn: public GameObject
{
public:
    Pawn(SDL_Texture* texture, Point newGridPosition, TileSet* newTileInfo, bool isBlack);
    ~Pawn();

    bool isMoveValid(Point move) const;

private:

};