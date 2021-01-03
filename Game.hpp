#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h> //header file placed in same directory as sdl.h so that it can be compatible
#include <iostream>
#include <vector>
#include <memory>
#include "TileSet.hpp"
#include "GameBoard.hpp"

class Game
{

public:
    Game();
    ~Game();

    void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running() { return isRunning; };

    static SDL_Renderer *renderer;

private:
    void initTilePositions();
    TileSet *pieces;
    int cnt = 0;
    bool isRunning;
    SDL_Window *window;
    std::shared_ptr<Player> white;
    std::shared_ptr<Player> black;
    std::shared_ptr<GameBoard> theBoard;
    SDL_Texture *piecesTexture = nullptr;
    SDL_Texture *gameBoardTexture = nullptr;
};
