#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

// height in tiles
constexpr int T_WIDTH = 28;
constexpr int T_HEIGHT = 36;

// width of the square tile in pixels
constexpr int T_SPRITE_WIDTH = 16;

// screen dimensions
constexpr int S_WIDTH = T_WIDTH * T_SPRITE_WIDTH;       // 448px
constexpr int S_HEIGHT = T_HEIGHT * T_SPRITE_WIDTH;     // 576px

// frame limit
constexpr int FRAMELIMIT = 60;

// PACMAN + 4 Ghosts
constexpr int MAX_ENTITES = 5;

// ENTITY WIDTH : Width of Pacman and the Ghosts sprites
constexpr int ENT_WIDTH = 32;

#endif