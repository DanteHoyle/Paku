//
// File:       pman.hpp
// Summary:    Pman class is Pacman. Has user input and can eat dots
// Created By: Dante Hoyle, 2021
//

#ifndef PMAN_HPP
#define PMAN_HPP

#include "entity.hpp"


class Pman : public Entity
{
private:

public:
    Pman();
    ~Pman();

    void update();
    void getUserInput();
    void initTexture();

};

#endif