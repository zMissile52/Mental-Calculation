#pragma once
#include "Component.h"
#include <iostream>
#include <functional>

class CollisionComponent : public Component
{
public:
	CollisionComponent(float sizeX, float sizeY);
	void Update(float dt) override;
	void Render(sf::RenderWindow* w) override;

	bool isClickOn();



private:
	bool isMousePressed();
	bool isInRect();
	sf::RectangleShape rect;
	std::pair<bool, bool> mouseInput = std::pair(false, false);
	std::function<void()> actionWhenPressMouse();


};

