//
// File:       entity.hpp
// Summary:    Entity class is inherited by the Ghost and Pacman class. It 
//             holds position, sprite, and gameplay variables
// Created By: Dante Hoyle, 2021
//

#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/Graphics.hpp>
#include <array>
#include "constants.hpp"

class Entity
{
protected:
    // tile coordinates
    int tX, tY;
    // screen position
    float sX, sY;
    // change in X and Y coordinate per frame;
    float dX, dY;
    // SFML sprite
    sf::Sprite sprite;
    sf::Texture* texture;
    // static list of all entities
    static std::array<Entity*, MAX_ENTITES> entityList;
    static int arrUsed;

    // animation objects
    sf::Clock animationTimer;
    sf::Time animationSpeed;
    int animationFrames;
    int currentFrame;
    
    void updateAnimation();

public:
    // accessors for positon
    int getTileX() { return tX; }
    int getTileY() { return tY; }
    float getScreenX() { return sX; }
    float getScreenY() { return sY; }

    // updates position and state
    virtual void update();

    // draws sprite to the screen
    void draw(sf::RenderWindow*);

    // sets the texture object to the correct texture
    virtual void initTexture();

    // inits sprite with the selected texture
    void initSprite();

    static void drawAllEntities(sf::RenderWindow*);
    static void updateAllEntities();

    Entity();
    ~Entity();
};

#endif