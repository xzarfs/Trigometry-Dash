#include "Game.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Game::Game(sf::Vector2i windowSize) {
	//Set initial attributes
	background.setFillColor(sf::Color::White);
	background.setSize((sf::Vector2f)windowSize);

	//Add them to the vector
	shapes.push_back(background);
}

