#pragma once
#include <vector>
#include "Object.h"
#include <SFML/Graphics.hpp>
class Scene
{
public:
	virtual void Init();

	virtual void Update(float dt);

	virtual void Render(sf::RenderWindow* w);

	Object* CreateObject();

	std::vector<Object*> objects;
	//std::vector<Object*> objectsToDelete;
};

