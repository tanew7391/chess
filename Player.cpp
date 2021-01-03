#include "Player.hpp"
#include "King.hpp"
#include "Queen.hpp"
#include "Bishop.hpp"
#include "Rook.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "GameObject.hpp"



Player::Player(SDL_Texture* newPiecesTexture, TileSet* newTileInfo, bool newIsBlack)
 : piecesTexture(newPiecesTexture),
   piecesTileInfo(newTileInfo),
   isBlack(newIsBlack)
{
    init();
}

Player::~Player()
{
}

void Player::init(){
    pieces.push_back(king = std::make_shared<King>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(queen = std::make_shared<Queen>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(rook_1 = std::make_shared<Rook>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(rook_2 = std::make_shared<Rook>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(bishop_1 = std::make_shared<Bishop>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(bishop_2 = std::make_shared<Bishop>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(knight_1 = std::make_shared<Knight>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(knight_2 = std::make_shared<Knight>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_1 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_2 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_3 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_4 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_5 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_6 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_7 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
    pieces.push_back(pawn_8 = std::make_shared<Pawn>(piecesTexture, 0,0, piecesTileInfo, isBlack));
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