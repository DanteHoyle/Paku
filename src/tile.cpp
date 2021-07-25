//
// File:       tile.cpp
// Summary:    contains the constructor function for the tile class
//             
// Created By: Dante Hoyle, 2021                                             
//

#include "tile.hpp"
#include "constants.hpp"

#include <ctime>
#include <cstdlib>

bool Tile::runOnce = false;
sf::Texture Tile::textureSheet;
std::array<sf::Sprite, 8> Tile::tileSprites;

Tile::Tile(int x, int y, int tileSprite, int rotate, bool solid)
{
    if (!runOnce)
        initStatics();

    tX = x;
    tY = y;
    isSolid = solid;
    tile = tileSprite;
    rotation = rotate;

    rotation = rand() % 4;
    tile = rand() % 8;
}

void Tile::initStatics()
{
    // load the texture
    textureSheet.loadFromFile("../resources/tiles.png");
    
    // loads the texture in the right sectino of hte sprite sheet to the 8
    // sprites
    for (int i = 0; i < 8; ++i)
    {
        tileSprites.at(i).setTexture(textureSheet);
        tileSprites.at(i).setTextureRect(sf::IntRect(
            i * T_SPRITE_WIDTH,
            0,
            T_SPRITE_WIDTH,
            T_SPRITE_WIDTH
        ));

        tileSprites.at(i).setOrigin(T_SPRITE_WIDTH / 2, T_SPRITE_WIDTH / 2);
    }

    runOnce = true;
}

void Tile::draw(sf::RenderWindow& window)
{
    sf::Sprite& s = tileSprites[tile];

    int screenX = tX * T_SPRITE_WIDTH,
        screenY = tY * T_SPRITE_WIDTH,
        angle = 90 * rotation,
        offset = T_SPRITE_WIDTH / 2;

    // set position and rotaion
    s.setPosition(screenX + offset, screenY + offset);
    s.setRotation(angle);
    window.draw(s);
}