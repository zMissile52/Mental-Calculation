#pragma once
#include <SFML/Graphics.hpp>
#include "Object.h"
class Component
{
	friend class Object;
public:
	virtual void Init() {};
	virtual void Update(float dt) {};
	virtual void Render(sf::RenderWindow* w) {};

	Object* GetOwner();

	Object* owner = nullptr;
};

