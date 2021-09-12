//
// File:       tile.hpp
// Summary:    datatype that is a single tile on the game board
// Created By: Dante Hoyle, 2021                                             
//

#ifndef TILE_HPP
#define TILE_HPP

#include <SFML/Graphics.hpp>
#include <array>

class Tile
{
private:
    // game logic components
    bool isSolid;
    int tX,         // tile x
        tY,         // tile y
        rotation,   // number 0 - 3 for rotation
        fliped,     // 0 - none, 1 - horizontal, 2 - vertical, 3 - horizontal and vertical
        tile;
    
    static sf::Texture textureSheet;
    static std::array<sf::Sprite, 8> tileSprites;

    // used to make initStatics() only run the first time the Tile class is
    // instantiated
    static bool runOnce;    

    // sets up the textureSheet and tileSprites static objects
    void initStatics();

public:
    Tile(int, int, int, int, bool);
    ~Tile();

    bool getIsSolid() { return isSolid; }
    void draw(sf::RenderWindow*);

    static void createBoard();
};

#endif