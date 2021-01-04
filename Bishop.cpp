#include "Bishop.hpp"
#include "TileSet.hpp"

Bishop::Bishop(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, newGridPosition, newTileInfo, (isBlack ? BISHOP_B : BISHOP_W))
{
}

Bishop::~Bishop()
{
}

bool Bishop::isMoveValid(Point move) const
{
    return true;
}