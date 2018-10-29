#pragma once
#include "Entity.h"

namespace OE
{
	class TextEntity : public Entity
	{

	public:
		/*
		@param filename - name of file to use for Font (ex: arial.png) [Passed to base class]*/
		TextEntity(std::string& fontName, sf::Text* const text);
		virtual ~TextEntity();

		// Inherited via Entity
		virtual void Render(sf::RenderWindow & window) override;

		// Inherited via Entity
		virtual void Update(double deltatime) override;

		/*Return the entity's Text object*/
		virtual sf::Text* const GetText() const { return text; }

	protected:
		sf::Text* text;
		sf::Font font;
	};

}