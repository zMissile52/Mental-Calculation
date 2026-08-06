#pragma once
#include <SFML/Graphics.hpp>
#include "Component.h"

struct Transform {
	sf::Vector2f pos = { 0.f, 0.f };
	sf::Vector2f dir = { 0.f, 1.f };
	sf::Vector2f scale = { 1.f, 1.f };
};

class Component;

class Object
{
public: 
	Object() {};
	Object(sf::Vector2f pos);

	virtual void Init();

	virtual void Update(float dt);

	virtual void Render(sf::RenderWindow* w);

	Transform& GetTransform();

	template<typename ComponentType, typename ...param>
	ComponentType* AddComponent(param ...parm);

	template<typename ComponentType>
	ComponentType* GetComponent();

private:
	std::vector<Component*> components;
	Transform transform;
};

#include "Object.inl"
