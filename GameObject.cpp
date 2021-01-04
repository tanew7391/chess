#include "GameObject.hpp"
#include "TileSet.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, int newPieceIdentifier){
    objTexture = texture;
    xpos = x;
    ypos = y;
    tileInfo = newTileInfo;
    pieceIdentifier = newPieceIdentifier;
    configTileSet();
}

void GameObject::setScaleFactor(float newScaleFactor){
    this->scaleFactor = newScaleFactor;
    configTileSet();
}

GameObject::~GameObject(){

}

void GameObject::configTileSet(){
    srcRect.h = tileInfo->tileHeight;
    srcRect.w = tileInfo->tileWidth;
    srcRect.x = tileInfo->tileWidth * tileInfo->tilePositions[pieceIdentifier].gridX;
    srcRect.y = tileInfo->tileHeight * tileInfo->tilePositions[pieceIdentifier].gridY;

    destRect.w = (int)(srcRect.w * scaleFactor);
    destRect.h = (int)(srcRect.h * scaleFactor);
}

void GameObject::Update() {

    destRect.x = xpos;
    destRect.y = ypos;

}

void GameObject::Render(){
    SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}