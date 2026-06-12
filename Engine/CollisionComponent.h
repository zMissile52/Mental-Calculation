#pragma once
#include "Component.h"
class CollisionComponent : public Component
{
public:
	CollisionComponent(float x, float y);

	void Update(float dt) override;
	void Render(sf::RenderWindow* w) override;


private:
	sf::RectangleShape rect;
};

