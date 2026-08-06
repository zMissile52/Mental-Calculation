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
	isClickOn();
}

void CollisionComponent::Render(sf::RenderWindow* w) {
	w->draw(rect);
}

bool CollisionComponent::isClickOn()
{
	sf::Vector2i mousePos = sf::Mouse::getPosition();
	if (isMousePressed() && isInRect()) { // et position de la souris dans le rect
		
		std::cout << "c'est dans le rectangle" << std::endl;
	}

	return false;
}

bool CollisionComponent::isMousePressed() {
	mouseInput.first = mouseInput.second;
	mouseInput.second = sf::Mouse::isButtonPressed(sf::Mouse::Button::Left);

	if(mouseInput.first == false && mouseInput.second == true) {
		return true;
	}
	return false;
}

bool CollisionComponent::isInRect() {
//probleme: passer en paramettre la fenetre pour avec les position de la souris en fonction de celle ci
	sf::Vector2i mousePos = sf::Mouse::getPosition();
	sf::Vector2f rectPos = GetOwner()->GetTransform().pos;
	sf::Vector2f rectSize = rect.getSize();

	std::cout << "mouseX between : " << rectPos.x - (rectSize.x / 2) << " and " << rectPos.x + (rectSize.x / 2) << std::endl;
	std::cout << "mouseY between : " << rectPos.y - (rectSize.y / 2) << " and " << rectPos.y + (rectSize.y / 2) << std::endl;

	std::cout << "mouse position : " << mousePos.x << ", " << mousePos.y << std::endl;

	if (mousePos.x >= rectPos.x - (rectSize.x / 2) && mousePos.x <= rectPos.x + (rectSize.x / 2) &&
		mousePos.y >= rectPos.y - (rectSize.y / 2) && mousePos.y <= rectPos.y + (rectSize.y / 2)) {
		return true;
	}
	return false;
}




