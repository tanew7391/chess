#include "Queen.hpp"

Queen::Queen(SDL_Texture *texture, int x, int y, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, x, y, newTileInfo, (isBlack ? QUEEN_B : QUEEN_W))
{
}

Queen::~Queen()
{
}

bool Queen::isMoveValid(int xPos, int yPos) const
{
    return true;
}