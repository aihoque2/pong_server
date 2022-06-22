#include <iostream>
#include <SDL.h>

class Ball{
    public:
        Ball();
        vector<double> position; //NOTE: We want to use GLM's vec2 library for these 2d vector maths
    private:
        vector<double> position;
};