#pragma once
#include "Game.hpp"
class Player;

class GameBoard
{
public:
    GameBoard(SDL_Texture* newTexture, std::shared_ptr<Player> newWhite, std::shared_ptr<Player> newBlack, int w, int h, int screenHeight);
    ~GameBoard();

    void update();
    void render();

private:
    std::shared_ptr<Player> white;
    std::shared_ptr<Player> black;
    SDL_Texture* texture;
    SDL_Rect srcRect,destRect;
};