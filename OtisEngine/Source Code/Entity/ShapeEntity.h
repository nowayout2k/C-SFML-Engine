#pragma once
#include "Entity.h"

namespace OE
{
	class ShapeEntity : public Entity
	{

	public:
		/*
		@param filename - name of file to use for texture (ex: image.png) [Passed to base class]*/
		ShapeEntity(std::string& textureName, sf::Shape* const shape);
		virtual ~ShapeEntity();

		// Inherited via Entity
		virtual void Render(sf::RenderWindow & window) override;

		// Inherited via Entity
		virtual void Update(const double deltatime) override;

		/*Return the entity's Shape object*/
		virtual sf::Shape* const GetShape() const { return shape; }

	protected:
		sf::Shape* shape;
		std::unique_ptr<sf::Texture> texture;
	};

}