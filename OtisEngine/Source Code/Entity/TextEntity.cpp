
#include "TextEntity.h"
#include "Debug.h"

namespace OE
{
	TextEntity::TextEntity(std::string& fontName, sf::Text* text)
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


	TextEntity::~TextEntity()
	{

	}

	void TextEntity::Update(double deltatime)
	{

	}



	void TextEntity::Render(sf::RenderWindow & window)
	{
		window.draw(*text);
	}
}