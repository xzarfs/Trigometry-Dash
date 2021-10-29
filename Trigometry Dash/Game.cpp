#include "Game.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Game::Game(sf::Vector2i windowSize) {
	//Set initial attributes
	background.setFillColor(sf::Color::Black);
	background.setSize((sf::Vector2f)windowSize);

	textureBackground_file.loadFromFile("bg0_2.png");
	textureBackground_file.setRepeated(true);
	textureBackground_file.setSmooth(true);
	textureBackground.setTexture(textureBackground_file);
	textureBackground.setScale(0.6,0.6);
	textureBackground.setTextureRect(sf::IntRect(0,0,10000,10000));

	//Add them to the vector
	shapes.push_back(background);
	sprites.push_back(textureBackground);
}

