#include "TextRenderer.h"
#include <iostream>


TextRenderer::TextRenderer(std::string s) : text(fRodin, s)
{
	sf::Vector2f bounds = text.getGlobalBounds().size;

	text.setOrigin(sf::Vector2f(bounds.x / 2, bounds.y / 2));
	text.setCharacterSize(40);
}

void TextRenderer::Update(float dt) {
	Transform& transform = owner->GetTransform();
	text.setPosition(transform.pos);
	text.setScale(transform.scale);
}

void TextRenderer::Render(sf::RenderWindow* w)
{
	w->draw(text);
}

void TextRenderer::SetText(std::string s)
{
	text.setString(s);
}

std::string TextRenderer::GetText() {
	return text.getString();
}