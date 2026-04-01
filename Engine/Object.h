#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>

struct Transform {
	sf::Vector2f pos = { 0.f, 0.f };
	sf::Vector2f dir;
	sf::Vector2f scale = { 1.f, 1.f };
};

class Object
{
public: 
	virtual void Init();

	virtual void Update(float dt);

	virtual void Render(sf::RenderWindow* w);

	template<typename ComponentType, typename ...param>
	void AddComponent(param ...parm);

	template<typename ComponentType>
	ComponentType* GetComponent();

private:
	std::vector<Component*> components;
};

#include "Object.inl"
