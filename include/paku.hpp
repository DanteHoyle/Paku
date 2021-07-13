//
// File:       paku.hpp
// Summary:    Contains app class for Paku game. Class contains game objects,
//             and minor logic to run update and draw functions
// Created By: Dante Hoyle, 2021
//

#ifndef PAKU_HPP
#define PAKU_HPP

#include <SFML/Graphics.hpp>
#include "constants.hpp"

class Paku
{
private:
    // loop that controls the program
    void mainLoop();

    // function where all game objects are updated
    void update();
    void handleEvents();

    // function where all game objects are drawn to the screen
    void draw();

    // SFML Objects
    sf::RenderWindow* window;

public:
    Paku();
    ~Paku();

    void run();
};

#endif