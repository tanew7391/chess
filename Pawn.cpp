#include "Pawn.hpp"
#include "TileSet.hpp"

Pawn::Pawn(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, newGridPosition, newTileInfo, (isBlack ? PAWN_B : PAWN_W))
{
}

Pawn::~Pawn()
{
}

bool Pawn::isMoveValid(Point move) const
{
    return true;
}