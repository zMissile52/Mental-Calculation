#pragma once
#include <SFML/Graphics.hpp>
class Component
{
	friend class Object;
public:
	virtual void Init() {};
	virtual void Update(float dt) {};
	virtual void Render(sf::RenderWindow* w) {};

	Object* owner;
};

