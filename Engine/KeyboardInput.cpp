#include "KeyboardInput.h"

KeyboardInput::KeyboardInput(sf::Keyboard::Key input)
{
	key = input;
}

void KeyboardInput::Update() {
	input.first = input.second;
	input.second = sf::Keyboard::isKeyPressed(key);
}

bool KeyboardInput::isHold() {
	if (input.first == true && input.first == input.second) {
		return true;
	}

	return false;
}

bool KeyboardInput::isPress() {
	if (input.second == true && input.first != input.second) {
		return true;
	}
	return false;
}

bool KeyboardInput::isReleased() {
	if (input.second == false && input.first != input.second) {
		return true;
	}
	return false;
}

sf::Keyboard::Key KeyboardInput::GetKey()
{
	return key;
}
