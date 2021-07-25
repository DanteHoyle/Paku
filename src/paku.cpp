//
// File:       paku.cpp
// Summary:    Contains app class for Paku game. Class contains game objects,
//             and minor logic to run update and draw functions
// Created By: Dante Hoyle, 2021                                             
//

#include <SFML/Graphics.hpp>
#include "paku.hpp"
#include "entity.hpp"
#include "pman.hpp"
#include "tile.hpp"

// debug
#include <iostream>

Paku::Paku()
{
    // setup window
    window = new sf::RenderWindow(sf::VideoMode(S_WIDTH, S_HEIGHT), "Paku");
    window->setFramerateLimit(FRAMELIMIT);
}

Paku::~Paku() 
{
    delete window;
}

void Paku::run()
{
    mainLoop();
}

// temp//
std::array<Tile*, 1008> b;

void Paku::mainLoop()
{
    /* temp */
    // pacman test code
    Pman test;
    test.initTexture();
    test.initSprite();

    // board test code

    for (int i = 0; i < T_HEIGHT; ++i)
    {
        for (int j = 0; j < T_WIDTH; ++j)
        {
            std::cout << "i: " << i << "\nj: " << j << "\n";
            b.at(i * T_WIDTH + j) = new Tile(j, i, 1, 1, false);
        }
    }
    /* /temp */

    while (window->isOpen())
    {
        update();
        draw();
    }
}

// Paku Event Handler, handles close window event
void Paku::handleEvents()
{
    sf::Event event;

    while (window->pollEvent(event))
    {
        // only executes if user presses window close
        if (event.type == sf::Event::Closed)
        {
            window->close();
        }
    }
}

void Paku::update()
{
    handleEvents();
    Entity::updateAllEntities();
}

void Paku::draw()
{
    window->clear();
    
    // draw stuff //

    //temp//
    for (int i = 0; i < 1008; i++)
    {
        b.at(i)->draw(*window);
    }

    Entity::drawAllEntities(window);
    window->display();
}