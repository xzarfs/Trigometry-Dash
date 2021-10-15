#include "includes.h"

int main() {
	sf::RenderWindow MainWindow(sf::VideoMode(800, 800, 32), "Trigometry Dash");
	sf::CircleShape circle(50,500);

	
	sf::Event inputEvent;
	uint64_t frameCount = 0;
	while (MainWindow.isOpen()) {
		MainWindow.clear();
		while (MainWindow.pollEvent(inputEvent))
		{
			if (inputEvent.type == sf::Event::Closed)
				MainWindow.close();
		}
		MainWindow.draw(circle);
		MainWindow.display();
		//frameCount++;
	}
	return 0;
}