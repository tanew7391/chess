#include "Player.hpp"
#include "King.hpp"
#include "Queen.hpp"
#include "Bishop.hpp"
#include "Rook.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "GameObject.hpp"
#include "Point.hpp"



Player::Player(SDL_Texture* newPiecesTexture, TileSet* newTileInfo, bool newIsBlack, float scaleFactor)
 : piecesTexture(newPiecesTexture),
   piecesTileInfo(newTileInfo),
   isBlack(newIsBlack)
{
    init();
    for(std::shared_ptr<GameObject> piece : pieces){
        piece->setScaleFactor(scaleFactor);
    }
}

Player::~Player()
{
}

void Player::init(){
    initPawnRow();
    initNobleRow();
}

void Player::initPawnRow(){
    Point gridPosition;

    gridPosition.gridX = 4;
    gridPosition.gridY = (isBlack ? 1 : 6);
    gridPosition.gridX = 0;
    pieces.push_back(pawn_1 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 1;
    pieces.push_back(pawn_2 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 2;
    pieces.push_back(pawn_3 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 3;
    pieces.push_back(pawn_4 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 4;
    pieces.push_back(pawn_5 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 5;
    pieces.push_back(pawn_6 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 6;
    pieces.push_back(pawn_7 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 7;
    pieces.push_back(pawn_8 = std::make_shared<Pawn>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
}

void Player::initNobleRow(){
    Point gridPosition;
    gridPosition.gridY = (isBlack ? 0 : 7);
    gridPosition.gridX = 4;
    pieces.push_back(king = std::make_shared<King>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 3;
    pieces.push_back(queen = std::make_shared<Queen>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 0;
    pieces.push_back(rook_1 = std::make_shared<Rook>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 7;
    pieces.push_back(rook_2 = std::make_shared<Rook>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 2;
    pieces.push_back(bishop_1 = std::make_shared<Bishop>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 5;
    pieces.push_back(bishop_2 = std::make_shared<Bishop>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 1;
    pieces.push_back(knight_1 = std::make_shared<Knight>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
    gridPosition.gridX = 6;
    pieces.push_back(knight_2 = std::make_shared<Knight>(piecesTexture, gridPosition, piecesTileInfo, isBlack));
}

void Player::Update(){
    for(std::shared_ptr<GameObject> piece : pieces){
        piece->Update();
    }
}

void Player::Render(){
    for(std::shared_ptr<GameObject> piece : pieces){
        piece->Render();
    }
}

bool Player::makeMove(int xPos, int yPos, int destXpos, int destYPos)
{
    return true;
}

bool Player::getIsBlack() const{
    return isBlack;
}