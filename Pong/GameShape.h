#pragma once
#include "ITransformable.h"
#include "IRenderable.h"
#include <memory>

/*Wrapper for the SFML Shape class which also renders the shape*/
class GameShape : public ITransformable, public IRenderable
{
public:
	/*@param filename - name of file to use for texture (ex: image.png) 
	@param shape - shape object as defined by SFML used to make the shape 
	@param position - positioning of the shape
	@param rotation - angle to rotate shape
	@parma scale - size factor based on inital size of shape*/
	GameShape(std::string filename, sf::Shape* shape, sf::Vector2f position, float rotation, sf::Vector2f scale);
	virtual ~GameShape();

	// Inherited via ITransformable
	virtual sf::Vector2f GetPosition() const override;

	// Inherited via ITransformable
	virtual void SetPosition(const sf::Vector2f& pos) override;

	// Inherited via ITransformable
	virtual float GetRotation() const override;

	// Inherited via ITransformable
	virtual void SetRotation(const float rotation) override;

	// Inherited via ITransformable
	virtual sf::Vector2f GetScale() const override;

	// Inherited via ITransformable
	virtual void SetScale(const sf::Vector2f& scale) override;

	// Inherited via IRenderable
	virtual void Render(sf::RenderWindow & window) override;

private:
	std::unique_ptr<sf::Shape> shape;
	std::unique_ptr<sf::Texture> texture;
};

