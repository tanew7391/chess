#include "King.hpp"

King::King(SDL_Texture *texture, int x, int y, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, x, y, newTileInfo, (isBlack ? KING_B : KING_W))
{
}

King::~King()
{
}

bool King::isMoveValid(int xPos, int yPos) const
{
    return true;
}