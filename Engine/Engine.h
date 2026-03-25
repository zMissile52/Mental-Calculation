#pragma once
#include <SFML/Graphics.hpp>
#include "WindowManager.h"
class Engine
{
public:
	static Engine& Instance();

	void Init();

	void Start();

	bool Active() { return isActive; };

	void Stop();

private:
	WindowManager* window = new WindowManager();
	bool isActive = true;
};

