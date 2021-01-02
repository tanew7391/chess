#pragma once
#include "GameObject.hpp"

class Bishop: public GameObject
{
public:
    Bishop(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, bool isBlack);
    ~Bishop();

    bool isMoveValid(int xPos, int yPos) const;

private:

};