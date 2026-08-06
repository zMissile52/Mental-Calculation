#include "InputManager.h"
#include <iostream>

void InputManager::RegisterKeyboardInput(sf::Keyboard::Key key)
{
	bool isRegisted = false;
	for (int i = 0; i < keyboardRegister.size(); i++) {
		if (keyboardRegister[i].get()->GetKey() == key) {
			std::cout << "key already register" << std::endl;
			isRegisted = true;
		}
	}
	if (isRegisted == false) {
		keyboardRegister.push_back(std::make_unique<KeyboardInput>(key));
	}
}

void InputManager::RegisterMouseInput(sf::Mouse::Button mouseinput)
{
}
