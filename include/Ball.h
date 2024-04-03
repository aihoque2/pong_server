#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <SDL.h>
#include <vec2.hpp>

class Ball{
    public:
        Ball();
        vector<double> position; //NOTE: We want to use GLM's vec2 library for these 2d vector maths
    private:
        vector<double> position;
};

