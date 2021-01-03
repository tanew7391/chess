#include "Knight.hpp"

Knight::Knight(SDL_Texture *texture, int x, int y, TileSet *newTileInfo, bool isBlack) 
    : GameObject(texture, x, y, newTileInfo, (isBlack ? KNIGHT_B : KNIGHT_W))
{
}

Knight::~Knight()
{
}

bool Knight::isMoveValid(int xPos, int yPos) const
{
    return true;
}