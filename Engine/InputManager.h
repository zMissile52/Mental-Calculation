#pragma once
#include <vector>
#include "KeyboardInput.h"
#include <SFML/Graphics.hpp>

class InputManager
{
public:
	void RegisterKeyboardInput(sf::Keyboard::Key key);

	void RegisterMouseInput(sf::Mouse::Button mouseinput);

private:
	std::vector<std::unique_ptr<KeyboardInput>> keyboardRegister;
	std::vector<sf::Mouse::Button> mouseInputRegister;

};

