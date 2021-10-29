#include "Game.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Game::Game(sf::Vector2i windowSize) {
	//Set initial attributes
	background.setFillColor(sf::Color::Black);
	background.setSize((sf::Vector2f)windowSize);

	textureBackground_file.loadFromFile("bg2.jpg");
	textureBackground_file.setRepeated(true);
	textureBackground_file.setSmooth(true);
	textureBackground.setTexture(textureBackground_file);
	textureBackground.setTextureRect(sf::IntRect(0,0,1920,1080));
	textureBackground.setScale(1080 / textureBackground_file.getSize().y, 1080 / textureBackground_file.getSize().y);

	//Add them to the vector
	shapes.push_back(background);
	sprites.push_back(textureBackground);
}

