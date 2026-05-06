#include "WindowManager.h"
void WindowManager::Init() {
	
	if (scenes.size() <= 0) {
		current = new Scene();
	}
	else {
		current = scenes[0].get();
	}


	window = std::make_unique<sf::RenderWindow>(sf::VideoMode(sf::Vector2u(600, 900)), "Title");
	current->Init();
}

void WindowManager::Update() {
	window->clear();

	while (const std::optional event = window->pollEvent())
	{
		if (event->is<sf::Event::Closed>()) {
			window->close();
		}
			
	}

	current->Update(0.2f); // -> mettre le delta time

}

void WindowManager::Render() {
	current->Render(window.get());
	window->display();
}

