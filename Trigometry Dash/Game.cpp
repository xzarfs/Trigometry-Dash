#include "Game.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

float x = 0;
float y = 0;
float velocityX = 0;
float velocityY = 0;
float accelerationX = 0;
float accelerationY = 0;

float gravity = 2;

void updateMovement() {

	if (y < 500)
		velocityY += gravity;
	else if (y > 500)
		y = 500;
	velocityX += accelerationX;
	velocityY += accelerationY;

	x += velocityX;
	y += velocityY;

}

int main(){
	RenderWindow ventana(VideoMode(800, 600), "mi ventana");
	ventana.setFramerateLimit(60);
	Texture Image;
	Image.loadFromFile("fatman");
	Sprite sprite(Image);
	sprite.setPosition(-230, 100);

	CircleShape figura(10);

	while (ventana.isOpen())

		while (ventana.pollEvent(miEvento)) {
			if (miEvento.type == Event::Closed) {
				ventana.close();
			}
			else if (miEvento.type == Event::KeyPressed && miEvento.key.code == Keyboard::Space) {
				velocityY = -10;
			}
		}
