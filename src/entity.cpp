//
// File:       entity.cpp
// Summary:    Entity class is inherited by the Ghost and Pacman class. It 
//             holds position, sprite, and gameplay variables
// Created By: Dante Hoyle, 2021
//

#include "entity.hpp"
#include <iostream>         // for error handling

// static members
std::array<Entity*, MAX_ENTITES> Entity::entityList;
int Entity::arrUsed = 0;


// constructor function that adds entity to static list, and increased used 
// number
Entity::Entity()
{
    if (arrUsed >= MAX_ENTITES)
    {
        std::cerr << "Error: too many entities in the game world!\n";
    }
    else
    {
        entityList.at(arrUsed) = this;
        arrUsed += 1;

        sX = 100;
        sY = 100;

        dX = 0;
        dY = 0;
    }
}

// argument is a pointer to the window the sprite should be drawn to
void Entity::draw(sf::RenderWindow* window)
{
    sprite.setPosition(sX, sY);
    window->draw(sprite);
}

void Entity::initSprite()
{
    // temporary line
    texture->loadFromFile("../resources/testSprite.png");

    sprite.setTexture(*texture);
    sprite.setOrigin(T_SPRITE_WIDTH, T_SPRITE_WIDTH);
}

void Entity::drawAllEntities(sf::RenderWindow* window)
{
    // can be replaced with foreach loop in final code
    for (int i = 0; i < arrUsed; i++)
    {
        entityList.at(i)->draw(window);
    }
}

void Entity::update()
{
    sX += dX;
    sY += dY;
}

void Entity::initTexture()
{
    return;
}