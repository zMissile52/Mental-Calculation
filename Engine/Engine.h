#pragma once
#include <SFML/Graphics.hpp>
class Engine
{
public:
	static Engine Instance();

	void Start();

private:
	sf::RenderWindow* window;
};

