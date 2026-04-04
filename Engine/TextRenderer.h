#pragma once
#include "Component.h"
class TextRenderer : public Component
{
public:
	TextRenderer(std::string s);

	void Update(float dt) override;

	void Render(sf::RenderWindow* w) override;

	void SetText(std::string s);

	std::string GetText();

private:
	sf::Font fRodin = sf::Font("Assets/Font/FOT-Rodin Pro DB.otf");
	sf::Text text;
};

