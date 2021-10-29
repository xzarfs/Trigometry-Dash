#include "includes.h"
#include "Game.h"

int WINAPI WinMain(HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow) {
	sf::RenderWindow MainWindow(sf::VideoMode(1920, 1080, 32), "Trigometry Dash");
	static Game gameManager((sf::Vector2i)MainWindow.getSize());


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
			MainWindow.draw(gameManager.sprites[i]);
		};
		MainWindow.display();
		//frameCount++;
	}
	return 0;
}