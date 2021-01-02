#pragma once
#include "GameObject.hpp"

class Bishop: public GameObject
{
public:
    Bishop(int x, int y)
        : GameObject("assets/bishop.png", x, y)
        {
        };
    ~Bishop();

private:

};