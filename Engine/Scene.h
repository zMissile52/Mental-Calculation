#pragma once
#include <vector>
#include "Object.h"
class Scene
{
public:

	virtual void Update();

	virtual void Render();

	
	std::vector<Object*> objects;
};

