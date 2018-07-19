#include "stdafx.h"
#include "GameText.h"
#include "Debug.h"

GameText::GameText(std::string filename, sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	if (this->font.loadFromFile("Fonts/" + filename))
		text.setFont(this->font);
	else
		Debug::Log("Could not find file " + filename);

	text.setPosition(position);
	text.setRotation(rotation);
	text.setScale(scale);
}

GameText::~GameText()
{
}

sf::Vector2f GameText::GetPosition() const
{
	return text.getPosition();
}

void GameText::SetPosition(const sf::Vector2f & pos)
{
	text.setPosition(pos);
}

float GameText::GetRotation() const
{
	return text.getRotation();
}

void GameText::SetRotation(const float rotation)
{
	text.setRotation(rotation);
}

sf::Vector2f GameText::GetScale() const
{
	return text.getScale();
}

void GameText::SetScale(const sf::Vector2f & scale)
{
	text.setScale(scale);
}

 
void GameText::SetText(std::string str)
{
	text.setString(str);
}
void GameText::SetColor(sf::Color color)
{
	text.setFillColor(color);
}
void GameText::Render(sf::RenderWindow & window)
{
	window.draw(text);
}
