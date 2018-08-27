#pragma once
#include "Entity.h"
class GameText : public Entity
{

public:
	/*
	@param filename - name of file to use for Font (ex: arial.png) [Passed to base class]*/
	GameText(std::string& fontName, sf::Text* const text);
	virtual ~GameText();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Entity
	virtual void Update(double deltatime) override;

	virtual sf::Text* const GetText() const { return text; }

protected:
	sf::Text* text;
	sf::Font font;
};

