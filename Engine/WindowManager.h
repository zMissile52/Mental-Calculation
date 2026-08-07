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

	sf::RenderWindow* GetWindow();

private:
	std::unique_ptr<sf::RenderWindow> window{};
	Scene* current = nullptr;
	std::vector<std::unique_ptr<Scene>> scenes;
};

#include "WindowManager.inl"
