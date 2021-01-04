#pragma once
#include "Game.hpp"
#include "TileSet.hpp"
class GameObject
{
public:
    GameObject(SDL_Texture *texture, Point newGridPosition, TileSet *newTileInfo, int newPieceIdentifier);
    ~GameObject();
    void Update();
    void Render();
    void setScaleFactor(float newScaleFactor);
    virtual bool isMoveValid(Point move) const = 0;
    void updatePosition(Point newPosition);
    Point getPosition() const;
    Point getGridPosition() const;

private:
    SDL_Texture *objTexture;
    SDL_Rect srcRect, destRect;
    TileSet *tileInfo;
    float scaleFactor = 1.0f;
    int pieceIdentifier;
    void configTileSet();
    Point position;
    Point gridPosition;
};