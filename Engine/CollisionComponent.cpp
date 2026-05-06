#include "CollisionComponent.h"

CollisionComponent::CollisionComponent(int x, int y)
{
	rect = sf::RectangleShape(sf::Vector2f(x, y));
	rect.setOutlineColor(sf::Color::Red);

	sf::Vector2f bound = rect.getGlobalBounds().size;

	rect.setOrigin(sf::Vector2f(bound.x, bound.y));
}


void CollisionComponent::Update(float dt) {
	rect.setPosition(owner->GetTransform().pos);
}

void CollisionComponent::Render(sf::RenderWindow* w) {
	w->draw(rect);
}