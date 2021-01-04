#pragma once
#define GRID_00 ((float) 345/4124)
#define GRID_11 ((float) 347/2062)
#define GRID_22 ((float) 519/2062)
#define GRID_33 ((float) 691/2062)
#define GRID_44 ((float) 863/2062)
#define GRID_55 ((float) 1036/2062)
#define GRID_66 ((float) 1208/2062)
#define GRID_77 ((float) 1380/2062)
#define GRID_88 ((float) 1552/2062)
#define GRID_99 ((float) 1725/2062)
#include "Game.hpp"
#include "Point.hpp"
#include "HashMap.hpp"

class GameObject;

struct KeyHash {
    int operator()(const Point& val) const
    {
        return  val.gridX + (val.gridY * 8); //8 being size of chess row
    }
};

template <typename K, typename V, typename F, int tableSize> class HashMap;
class Player;


class GameBoard
{
public:
    GameBoard(SDL_Texture* newTexture, std::shared_ptr<Player> newWhite, std::shared_ptr<Player> newBlack, int w, int h, int screenHeight);
    ~GameBoard();
    static Point getPositionFromGrid(Point gridPosition);
    void setScreenHeight(int h);

    void update();
    void render();

private:
    void initBoard();
    inline static int screenHeight = 0;
    std::shared_ptr<Player> white;
    std::shared_ptr<Player> black;
    SDL_Texture* texture;
    SDL_Rect srcRect,destRect;
    HashMap<Point, std::shared_ptr<GameObject>, KeyHash, 64> boardHashMap; //64 being size of chess grid

};