#include "stdafx.h"
#include "TextImage.h"


TextImage::TextImage(sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	text.setPosition(position);
	text.setRotation(rotation);
	text.setScale(scale);
}


TextImage::~TextImage()
{
}

sf::Vector2f TextImage::GetPosition() const
{
	return text.getPosition();
}

void TextImage::SetPosition(const sf::Vector2f & pos)
{
	text.setPosition(pos);
}

 

float TextImage::GetRotation() const
{
	return text.getRotation();
}

void TextImage::SetRotation(const float rotation)
{
	text.setRotation(rotation);
}

sf::Vector2f TextImage::GetScale() const
{
	return text.getScale();
}

void TextImage::SetScale(const sf::Vector2f & scale)
{
	text.setScale(scale);
}

void TextImage::SetFont(const sf::Font & font)
{
	text.setFont(font);
}
 
void TextImage::Render(sf::RenderWindow & window)
{
	window.draw(text);
}
