#include "Game.hpp"
#include "TextureManager.hpp"
#include "Bishop.hpp"
#include "Player.hpp"

SDL_Renderer *Game::renderer = nullptr;

Game::Game()
{
}

Game::~Game()
{
}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN_DESKTOP;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "Subsystems initialized" << std::endl;

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window)
        {
            std::cout << "Window created!" << std::endl;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            std::cout << "Renderer created!" << std::endl;
        }

        isRunning = true;
    }
    else
    {
        isRunning = false;
    }
    initTilePositions();
    white = std::make_shared<Player>(piecesTexture, pieces, false);
    black = std::make_shared<Player>(piecesTexture, pieces, true);
    theBoard = std::make_shared<GameBoard>(piecesTexture, white, black, 2067, 2067);
}

void Game::initTilePositions()
{
    piecesTexture = TextureManager::LoadTexture("assets/chess_pieces_400_360_1800_800.png");
    gameBoardTexture = TextureManager::LoadTexture("assets/chess_board_160_160_2067_2067.png");
    pieces = new TileSet();
    pieces->tileHeight = 400;
    pieces->tileWidth = 300;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            pieces->tilePositions[j + (i * 6)].gridY = i; //black y = 0, white y = 1
        }
    }
    pieces->tilePositions[KING_B].gridX = pieces->tilePositions[KING_W].gridX = 3;     //King
    pieces->tilePositions[QUEEN_B].gridX = pieces->tilePositions[QUEEN_W].gridX = 2;   //Queen
    pieces->tilePositions[ROOK_B].gridX = pieces->tilePositions[ROOK_W].gridX = 0;     //Rook
    pieces->tilePositions[BISHOP_B].gridX = pieces->tilePositions[BISHOP_W].gridX = 1; //Bishop
    pieces->tilePositions[KNIGHT_B].gridX = pieces->tilePositions[KNIGHT_W].gridX = 4; //Knight
    pieces->tilePositions[PAWN_B].gridX = pieces->tilePositions[PAWN_W].gridX = 5;     //Pawn
}

void Game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false;
        break;
    default:
        break;
    }
}

void Game::update()
{
    white->Update();
    black->Update();
}

void Game::render()
{
    SDL_RenderClear(renderer);
    white->Render();
    black->Render();
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(piecesTexture);
    SDL_DestroyTexture(gameBoardTexture);
    delete pieces;
    SDL_Quit();
    std::cout << "Game Cleaned!" << std::endl;
}