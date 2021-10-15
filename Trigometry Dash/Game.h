#pragma once
#include "includes.h"
class Game
{
public:
	Game(sf::Vector2i windowSize);
	sf::RectangleShape background = sf::RectangleShape(sf::Vector2<float>(0,0));
	std::vector<sf::RectangleShape> shapes;
};

