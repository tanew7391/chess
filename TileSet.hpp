#pragma once
#define KING_B 0
#define QUEEN_B 1
#define ROOK_B 2
#define BISHOP_B 3
#define KNIGHT_B 4
#define PAWN_B 5
#define KING_W 6
#define QUEEN_W 7
#define ROOK_W 8
#define BISHOP_W 9
#define KNIGHT_W 10
#define PAWN_W 11




struct Point{
    int gridX;
    int gridY;
};

/**
 * TileSet information for a single texture.
 * tilePositions is an array for each type of chess piece
 * 0-5 represents black, 6-11 represents white.
 * Order is most to least important
 * 0 = King, 1 = Queen, 2 = Rook, 3 = Bishop, 4 = Knight, 5 = Pawn
 * Repeated for white in same order from 6-11
 */
struct TileSet{
    Point tilePositions[12];
    int tileWidth;
    int tileHeight;
};