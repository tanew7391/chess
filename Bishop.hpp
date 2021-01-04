#pragma once
#include "GameObject.hpp"

class Bishop: public GameObject
{
public:
    Bishop(SDL_Texture* texture, Point newGridPosition, TileSet* newTileInfo, bool isBlack);
    ~Bishop();

    bool isMoveValid(Point move) const;

private:

};