//
// File:       tile.cpp
// Summary:    contains the constructor function for the tile class
//             
// Created By: Dante Hoyle, 2021                                             
//

#include <iostream>
#include "debug.hpp"
#include "constants.hpp"


namespace debug
{
    void drawGrid(sf::RenderWindow* window)
    {
        // draw vertical lines
        for (int i = 0; i < T_WIDTH; ++i)
        {
            sf::Vertex v[] = 
            {
                sf::Vertex(sf::Vector2f(i * T_SPRITE_WIDTH, 0)),
                sf::Vertex(sf::Vector2f(i * T_SPRITE_WIDTH, S_HEIGHT)),
            };

            window->draw(v, 2, sf::Lines);
        }

        // draw horizontal lines
        for (int i = 0; i < T_HEIGHT; ++i)
        {
            sf::Vertex h[] = 
            {
                sf::Vertex(sf::Vector2f(0, i * T_SPRITE_WIDTH)),
                sf::Vertex(sf::Vector2f(S_WIDTH, i * T_SPRITE_WIDTH))
            };

            window->draw(h, 2, sf::Lines);
        }
    }
}
