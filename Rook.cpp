#include "Rook.hpp"
#include "TileSet.hpp"


Rook::Rook(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, newGridPosition, newTileInfo, (isBlack ? ROOK_B : ROOK_W))
{
}

Rook::~Rook()
{
}

bool Rook::isMoveValid(Point move) const
{
    return true;
}