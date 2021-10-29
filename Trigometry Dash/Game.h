#pragma once
#include "includes.h"
class Game
{
public:
	Game(sf::Vector2i windowSize);
	sf::RectangleShape background = sf::RectangleShape(sf::Vector2<float>(0,0));
	std::vector<sf::RectangleShape> shapes;
	std::vector<sf::Sprite> sprites;

	sf::Texture textureBackground_file;
	sf::Sprite textureBackground;
};

