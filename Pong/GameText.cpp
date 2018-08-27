#include "stdafx.h"
#include "GameText.h"
#include "Debug.h"


GameText::GameText(std::string& fontName, sf::Text* text)
	: Entity(text)
{
 	this->text = text;
	if (font.loadFromFile("Fonts/" + fontName))
	{
		text->setFont(font);
	}
	else
		Debug::LogError("Could not find Texture!");
}


GameText::~GameText()
{

}

void GameText::Update(double deltatime)
{

}



void GameText::Render(sf::RenderWindow & window)
{
	window.draw(*text);
}