#pragma once
#include "SFML/Graphics.hpp"
#include "Entity.h"
#include "IObserver.h"

namespace OE
{
	/*an active participate in a game*/
	class SpriteEntity : public Entity
	{
	public:
		/*
		@param filename - name of file to use for texture (ex: image.png) [Passed to base class]*/
		SpriteEntity(std::string& textureName, sf::Sprite* const sprite);
		virtual ~SpriteEntity();

		// Inherited via Entity
		virtual void Render(sf::RenderWindow & window) override;

		// Inherited via Entity
		virtual void Update(const double deltatime) override;

		/*Return the entity's Sprite object*/
		virtual sf::Sprite* const GetSprite() const { return sprite; }

	protected:
		sf::Sprite* sprite;
		std::unique_ptr<sf::Texture> texture;
	};

}