
#include "SpriteEntity.h"
#include "Debug.h"

namespace OE
{
	SpriteEntity::SpriteEntity(std::string& textureName, sf::Sprite* sprite)
		: Entity(sprite)
	{
		this->texture.reset(new sf::Texture());
		this->sprite = sprite;
		if (texture->loadFromFile("Textures/" + textureName))
		{
			sprite->setTexture(*texture);
		}
		else
			Debug::LogError("Could not find Texture!");
	}


	SpriteEntity::~SpriteEntity()
	{

	}

	void SpriteEntity::Update(const double deltatime)
	{

	}



	void SpriteEntity::Render(sf::RenderWindow & window)
	{
		window.draw(*sprite);
	}

}