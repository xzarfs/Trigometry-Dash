#include "includes.h"
#include "Game.h"

int main() {
	sf::RenderWindow MainWindow(sf::VideoMode(800, 800, 32), "Trigometry Dash");
	static Game gameManager((sf::Vector2i)MainWindow.getSize());
	sf::RenderTexture renderTexture = sf::RenderTexture();
	renderTexture.create(500, 500, 32);
	renderTexture.display()
	
	sf::Event inputEvent;
	uint64_t frameCount = 0;
	while (MainWindow.isOpen()) {
		MainWindow.clear();
		while (MainWindow.pollEvent(inputEvent))
		{
			if (inputEvent.type == sf::Event::Closed)
				MainWindow.close();
		}
		for (uint64_t i = 0; i < gameManager.shapes.size(); i++) {
			MainWindow.draw(gameManager.shapes[i]);
			MainWindow.draw();
		};
		MainWindow.display();
		//frameCount++;
	}
	return 0;
}