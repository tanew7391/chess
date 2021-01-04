#pragma once
#include "GameObject.hpp"

class King: public GameObject
{
public:
    King(SDL_Texture* texture, Point newGridPosition, TileSet* newTileInfo, bool isBlack);
    ~King();

    bool isMoveValid(Point move) const;

private:

};