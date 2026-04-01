#include "TextRenderer.h"


TextRenderer::TextRenderer(std::string s) : text(fRodin, s)
{
	text.setCharacterSize(40);
}

void TextRenderer::Render(sf::RenderWindow* w)
{
	w->draw(text);
}
