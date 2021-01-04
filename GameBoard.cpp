#include "GameBoard.hpp"
#include "Player.hpp"
#include "Point.hpp"
#include "Bishop.hpp"


Point GameBoard::getPositionFromGrid(Point gridPosition) {
  gridPosition.gridX = (gridPosition.gridX + 1) * (GRID_00) * screenHeight;
  gridPosition.gridY = (gridPosition.gridY + 1) * (GRID_00) * screenHeight;
  return gridPosition;
}


void GameBoard::setScreenHeight(int h){
  GameBoard::screenHeight = h;
}


GameBoard::GameBoard(SDL_Texture *newTexture, std::shared_ptr<Player> newWhite, std::shared_ptr<Player> newBlack, int w, int h, int height)
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
  destRect.h = height;
  destRect.w = height;
  GameBoard::setScreenHeight(height);
  initBoard();
  //Point a; //START TESTCODE
  //a.gridX = 1;
  //a.gridY = 4;
  //TileSet info;
  //info.tileHeight = 100;
  //info.tileWidth = 100;
  //info.tilePositions[3] = a;
  //Bishop haha = Bishop(newTexture, &info, true);
  //boardHashMap.put(a, &haha);

  //GameObject *ref = boardHashMap.get(a);
  //ref->Update();
  //ref->Render(); //END TESTCODE
}

GameBoard::~GameBoard()
{
}

void GameBoard::initBoard(){
  std::vector<std::shared_ptr<GameObject>> whitesPieces = white->getPiecesInPlay();
  for(std::shared_ptr<GameObject> pieceWhite : whitesPieces){
    boardHashMap.put(pieceWhite->getGridPosition(), pieceWhite);
  }

  std::vector<std::shared_ptr<GameObject>> blacksPieces = black->getPiecesInPlay();
  for(std::shared_ptr<GameObject>  pieceBlack : blacksPieces){
    boardHashMap.put(pieceBlack->getGridPosition(), pieceBlack);
  }
}

void GameBoard::update()
{
}
void GameBoard::render()
{
  SDL_RenderCopy(Game::renderer, texture, &srcRect, &destRect);
}