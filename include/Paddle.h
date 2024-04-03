/*
Paddle.h

The "Paddle" can be thought of
as a player in this game
*/
#ifndef PADDLE_H
#define PADDLE_H

#include <iostream>
#include <vector>
#include <vec2.hpp>

class Paddle{
    public:
        Paddle(Vec2 position);
        void draw(SDL_renderer renderer);
        Vec2 getPosition();
        Vec2 setPosition(Vec2 newPosition);

    private:
        Vec2 position_;
    
}

#endif