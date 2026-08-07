#pragma once
#include "Component.h"
#include <iostream>
#include <functional>

class CollisionComponent : public Component
{
public:
	CollisionComponent(float sizeX, float sizeY);
	CollisionComponent(float sizeX, float sizeY, std::function<float()> f);

	void Update(float dt) override;
	void Render(sf::RenderWindow* w) override;

	bool isClickOn();



private:
	bool isMousePressed();
	bool isInRect();
	sf::RectangleShape rect;
	std::pair<bool, bool> mouseInput = std::pair(false, false);
	//template<typename Value>
	//std::function<Value()> actionWhenPressMouse;


};

