#include "Queen.hpp"
#include "TileSet.hpp"

Queen::Queen(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, newGridPosition, newTileInfo, (isBlack ? QUEEN_B : QUEEN_W))
{
}

Queen::~Queen()
{
}

bool Queen::isMoveValid(Point move) const
{
    return true;
}