//
// File:       main.cpp
// Summary:    Creates Paku object and starts mainLoop()
// 
// Created By: Dante Hoyle 2021                                             
//
#include "paku.hpp"

int main()
{
    Paku game;
    game.run();

    return 0;
}


// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//     sf::CircleShape shape(100.f);
//     shape.setFillColor(sf::Color::White);

//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }

//         window.clear();
//         window.draw(shape);
//         window.display();
//     }

//     return 0;
// }