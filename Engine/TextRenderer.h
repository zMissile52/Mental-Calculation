#pragma once
#include "Component.h"
class TextRenderer : public Component
{
public:
	TextRenderer(std::string s);

	void Render(sf::RenderWindow* w) override;

private:
	sf::Font fRodin = sf::Font("Assets/Font/Pixelletter.ttf");
	sf::Text text;
};

