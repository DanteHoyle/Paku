//
// File:       paku.cpp
// Summary:    Contains app class for Paku game. Class contains game objects,
//             and minor logic to run update and draw functions
// Created By: Dante Hoyle, 2021                                             
//

#include <SFML/Graphics.hpp>
#include "paku.hpp"

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

void Paku::mainLoop()
{
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
}

void Paku::draw()
{
    window->clear();
    
    // draw stuff //

    window->display();
}