#pragma once
#include <SFML/Graphics.hpp>
#include "Scene.h"
class WindowManager
{
public:
	void Init();
	void Update();
	void Render();

	template<typename SceneType>
	void AddScene();

private:
	std::unique_ptr<sf::RenderWindow> window{};
	Scene* current;
	std::vector<std::unique_ptr<Scene>> scenes;
};

#include "WindowManager.inl"
