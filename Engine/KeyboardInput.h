#pragma once
#include <SFML/Graphics.hpp>
class KeyboardInput
{
public:
	KeyboardInput(sf::Keyboard::Key input);

	void Update(); //key.ispressed
	bool isPress();
	bool isHold();
	bool isReleased();

	sf::Keyboard::Key GetKey();

private:
	sf::Keyboard::Key key;
	std::pair<bool, bool> input = std::pair(false, false);
};

