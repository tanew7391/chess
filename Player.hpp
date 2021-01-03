#pragma once
#include "GameObject.hpp"
#include "King.hpp"
#include "Queen.hpp"
#include "Bishop.hpp"
#include "Rook.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"


class Player {

public:
    Player(SDL_Texture* newPiecesTexture, TileSet* newTileInfo, bool newIsBlack);
    ~Player();
    void init();
    void Update();
    void Render();
    bool getIsBlack() const;
    bool makeMove(int xPos, int yPos, int destXpos, int destYPos);


private:
    SDL_Texture* piecesTexture;
    TileSet* piecesTileInfo;
    std::shared_ptr<King> king;
    std::shared_ptr<Queen> queen;
    std::shared_ptr<Rook> rook_1;
    std::shared_ptr<Rook> rook_2;
    std::shared_ptr<Bishop> bishop_1;
    std::shared_ptr<Bishop> bishop_2;
    std::shared_ptr<Knight> knight_1;
    std::shared_ptr<Knight> knight_2;
    std::shared_ptr<Pawn> pawn_1;
    std::shared_ptr<Pawn> pawn_2;
    std::shared_ptr<Pawn> pawn_3;
    std::shared_ptr<Pawn> pawn_4;
    std::shared_ptr<Pawn> pawn_5;
    std::shared_ptr<Pawn> pawn_6;
    std::shared_ptr<Pawn> pawn_7;
    std::shared_ptr<Pawn> pawn_8;
    std::vector<std::shared_ptr<GameObject>> pieces;
    bool isBlack;
};
