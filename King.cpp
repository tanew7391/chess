#include "King.hpp"
#include "TileSet.hpp"

King::King(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, newGridPosition, newTileInfo, (isBlack ? KING_B : KING_W))
{
}

King::~King()
{
}

bool King::isMoveValid(Point move) const
{
    return true;
}