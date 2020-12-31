
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h> //header file placed in same directory as sdl.h so that it can be compatible
#include <iostream>

class Player
{
public:
    Player();
    ~Player();
    
    void init(int xPos, int yPos, int height, int width);
    
    void handleEvents();
    void update();
    void render();
    void clean();

private:
    int xChange;
    int yChange;
    int speedMod;
};