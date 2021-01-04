#include "GameObject.hpp"
//#include "TileSet.hpp"
#include "TextureManager.hpp"
#include "GameBoard.hpp"

GameObject::GameObject(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, int newPieceIdentifier)
{
    objTexture = texture;
    gridPosition = newGridPosition;
    position = GameBoard::getPositionFromGrid(gridPosition);
    tileInfo = newTileInfo;
    pieceIdentifier = newPieceIdentifier;
    configTileSet();
}

void GameObject::setScaleFactor(float newScaleFactor)
{
    this->scaleFactor = newScaleFactor;
    configTileSet();
}

GameObject::~GameObject()
{
}

void GameObject::updatePosition(Point newPosition)
{
    position = newPosition;
}

Point GameObject::getPosition() const
{
    return position;
}

Point GameObject::getGridPosition() const
{
    return gridPosition;
}

void GameObject::configTileSet()
{
    srcRect.h = tileInfo->tileHeight;
    srcRect.w = tileInfo->tileWidth;
    srcRect.x = tileInfo->tileWidth * tileInfo->tilePositions[pieceIdentifier].gridX;
    srcRect.y = tileInfo->tileHeight * tileInfo->tilePositions[pieceIdentifier].gridY;

    destRect.w = (int)(srcRect.w * scaleFactor);
    destRect.h = (int)(srcRect.h * scaleFactor);
}

void GameObject::Update()
{
    position = GameBoard::getPositionFromGrid(gridPosition);
    destRect.x = position.gridX;
    destRect.y = position.gridY;
}

void GameObject::Render()
{
    SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}