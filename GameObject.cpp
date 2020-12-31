#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren, int x, int y){
    renderer = ren;
    objTexture = TextureManager::LoadTexture(texturesheet, ren);
    xpos = x;
    ypos = y;

}

void GameObject::Update() {
    
    srcRect.h = 256;
    srcRect.w = 256;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w;
    destRect.h = srcRect.h;
}

void GameObject::Render(){
    SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);
}