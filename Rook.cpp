#include "Rook.hpp"
#include "TileSet.hpp"


Rook::Rook(SDL_Texture *texture, int x, int y, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, x, y, newTileInfo, (isBlack ? ROOK_B : ROOK_W))
{
}

Rook::~Rook()
{
}

bool Rook::isMoveValid(int xPos, int yPos) const
{
    return true;
}