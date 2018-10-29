
#include "ShapeEntity.h"
#include "Debug.h"

namespace OE
{
	ShapeEntity::ShapeEntity(std::string& textureName, sf::Shape* shape)
		: Entity(shape)
	{
		this->texture.reset(new sf::Texture());
		this->shape = shape;
		if (texture->loadFromFile("Textures/" + textureName))
		{
			shape->setTexture(texture.get());
		}
		else
			Debug::LogError("Could not find Texture!");
	}


	ShapeEntity::~ShapeEntity()
	{

	}

	void ShapeEntity::Update(const double deltatime)
	{

	}



	void ShapeEntity::Render(sf::RenderWindow & window)
	{
		window.draw(*shape);
	}
}