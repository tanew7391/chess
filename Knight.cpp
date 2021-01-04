#include "Knight.hpp"
#include "TileSet.hpp"


Knight::Knight(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, newGridPosition, newTileInfo, (isBlack ? KNIGHT_B : KNIGHT_W))
{
}

Knight::~Knight()
{
}

bool Knight::isMoveValid(Point move) const
{
    return true;
}