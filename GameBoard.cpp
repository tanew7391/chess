#include "GameBoard.hpp"
#include "Player.hpp"

GameBoard::GameBoard(SDL_Texture *newTexture, std::shared_ptr<Player> newWhite, std::shared_ptr<Player> newBlack, int w, int h, int screenHeight)
    : white(newWhite),
      black(newBlack),
      texture(newTexture)
{
  srcRect.x = 0;
  srcRect.y = 0;
  srcRect.h = h;
  srcRect.w = w;

  destRect.x = 0;
  destRect.y = 0;
  destRect.h = screenHeight;
  destRect.w = screenHeight;
}

GameBoard::~GameBoard()
{
}

void GameBoard::update()
{
}
void GameBoard::render()
{
  SDL_RenderCopy(Game::renderer, texture, &srcRect, &destRect);
}