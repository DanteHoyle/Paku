//
// File:       pman.hpp
// Summary:    Entity class is inherited by the Ghost and Pacman class. It 
//             holds position, sprite, and gameplay variables
// Created By: Dante Hoyle, 2021
//

#include "pman.hpp"
#include <iostream>


Pman::Pman()
{
    currentFrame = 0;
    animationSpeed = sf::seconds(0.1f);
    animationFrames = 4;

    dX = 1;

    std::cout << "Pman Init\n";
}

Pman::~Pman() {}

void Pman::update()
{
    sX += dX;
    sY += dY;

    updateAnimation();
    updateTilePos();
}

void Pman::initTexture()
{
    texture->loadFromFile("../resources/paku.png");
}