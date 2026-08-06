#include "CollisionComponent.h"

CollisionComponent::CollisionComponent(float x, float y)
{
	rect = sf::RectangleShape(sf::Vector2f(x, y));
	rect.setFillColor(sf::Color(255, 0, 0, 80));
	rect.setOutlineThickness(2.f);
	rect.setOutlineColor(sf::Color::Red);


	sf::Vector2f bound = rect.getGlobalBounds().size;

	rect.setOrigin(sf::Vector2f(bound.x / 2, bound.y / 2));
}



void CollisionComponent::Update(float dt) {
	rect.setPosition(owner->GetTransform().pos);
}

void CollisionComponent::Render(sf::RenderWindow* w) {
	w->draw(rect);
}

bool CollisionComponent::isClickOn()
{
	sf::Vector2i mousePos = sf::Mouse::getPosition();
	if (sf::Mouse::isButtonPressed) {
		
	}
	return false;
}

