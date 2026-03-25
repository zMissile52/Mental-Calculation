#include "WindowManager.h"
void WindowManager::Init() {
	window = new sf::RenderWindow(sf::VideoMode(sf::Vector2u(600, 900)), "Title");
}

void WindowManager::Update() {
	window->clear();

	while (const std::optional event = window->pollEvent())
	{
		if (event->is<sf::Event::Closed>()) {
			window->close();
		}
			
	}
}

void WindowManager::Render() {
	window->display();
}