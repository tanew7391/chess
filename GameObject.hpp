#pragma once
#include "Game.hpp"
#include "TileSet.hpp"

class GameObject{
public:
    GameObject(SDL_Texture* texture, int x, int y, TileSet* newTileInfo, int newPieceIdentifier);
    ~GameObject();
    void Update();
    void Render();
    void setScaleFactor(float newScaleFactor);
    virtual bool isMoveValid(int newXPos, int newYPos) const = 0;

private:
    SDL_Texture* objTexture;
    SDL_Rect srcRect,destRect;
    TileSet* tileInfo;
    float scaleFactor = 1.0f;
    int pieceIdentifier;
    void configTileSet();

protected:
    int xpos;
    int ypos;

};