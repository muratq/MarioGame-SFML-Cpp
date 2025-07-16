
#include <iostream>
#include "Game.h"


int main()
{
    
    
    sf::RenderWindow window(sf::VideoMode({1200,900}),"MarioGame");

    sf::Clock deltaClock;
    Begin(window);
    while(window.isOpen())
    {
        float deltaTime = deltaClock.restart().asSeconds();
        Update(deltaTime);

        while(const std::optional event = window.pollEvent())
        {
            if(event->is<sf::Event::Closed>())
            {
                window.close();
            }
            else if(event->is<sf::Event::KeyPressed>())
            {
                std::cout<<"tusa basildi"<<std::endl;
            }
        window.clear();
        Render(window);
      

        window.display();

        }
    }



}

/* g++ main.cpp Game.cpp -o main.exe -IC:\Users\ARGE\Desktop\SFML-3.0.0\include -LC:\Users\ARGE\Desktop\SFML-3.0.0\lib -lsfml-graphics -lsfml-window -lsfml-system*/