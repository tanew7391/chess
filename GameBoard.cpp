#include "GameBoard.hpp"

GameBoard::GameBoard(SDL_Texture* newTexture, std::shared_ptr<Player> newWhite, std::shared_ptr<Player> newBlack, int w, int h)
    : texture(newTexture),
      white(newWhite),
      black(newBlack),
      {
        srcRect.x = 0;
        srcRect.y = 0;
        srcRect.h = h;
        srcRect.w = w;
      }

GameBoard::~GameBoard(){

}


void GameBoard::update(){
    
}
void GameBoard::render(){
    
}