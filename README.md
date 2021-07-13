# Paku

## TODO

### Project
* README that describes project

### Game
Tile Class 
: Contains sprite and state

Board Class
: Contains Tiles and has functions to reset board, make harder, spawn fruit on timer 28x36 tiles, original resolution 224x288

Entity
: x, y coordinates, speed vector, Update Function

Pacman : Entity
: Player Controls in Update Function

Ghost : Entity
: Ghosts have their own unique algorithm for targeting Pacman. However there  will be a shared pathfinding algorithm

## Folder Structure
```
C:.
├───.vscode
├───bin
├───build                   # [PUT .dll FILES HERE]
├───include
│   └───SFML                # [PUT YOUR COMPILED SFML INCLUDE FOLDER HERE]
│       ├───Audio
│       ├───Graphics
│       ├───Network
│       ├───System
│       └───Window
├───lib                     # [PUT YOUR COMPILED LIB FILES HERE]
└───src
```