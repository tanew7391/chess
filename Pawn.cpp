#include "Pawn.hpp"

Pawn::Pawn(SDL_Texture *texture, int x, int y, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, x, y, newTileInfo, (isBlack ? PAWN_B : PAWN_W))
{
}

Pawn::~Pawn()
{
}

bool Pawn::isMoveValid(int xPos, int yPos) const
{
    return true;
}