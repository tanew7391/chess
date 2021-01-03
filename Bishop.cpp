#include "Bishop.hpp"
#include "TileSet.hpp"

Bishop::Bishop(SDL_Texture *texture, int x, int y, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, x, y, newTileInfo, (isBlack ? BISHOP_B : BISHOP_W))
{
}

Bishop::~Bishop()
{
}

bool Bishop::isMoveValid(int xPos, int yPos) const
{
    return true;
}