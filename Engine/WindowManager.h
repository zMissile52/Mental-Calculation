#pragma once
#include <SFML/Graphics.hpp>
#include "Scene.h"
class WindowManager
{
public:
	void Init();
	void Update();
	void Render();

	void AddScene(Scene* s);

private:
	sf::RenderWindow* window;
	Scene* current = new Scene();
	std::vector<Scene*> scenes;
};

