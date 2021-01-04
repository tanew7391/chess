#include "GameBoard.hpp"
#include "Player.hpp"
#include "Point.hpp"
#include "Bishop.hpp"

#include "TileSet.hpp" //TESTCODE

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

  Point a;            //START TESTCODE
  a.gridX = 1;
  a.gridY = 4;
  TileSet info;
  info.tileHeight = 100;
  info.tileWidth = 100;
  info.tilePositions[3] = a;
  Bishop haha = Bishop(newTexture, 0, 0, &info, true);
  boardHashMap.put(a, &haha);

  GameObject* ref = boardHashMap.get(a); 
  ref->Update();
  ref->Render();        //END TESTCODE
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