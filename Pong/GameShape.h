#pragma once
#include "IEntity.h"
#include "IRenderable.h"
#include <memory>

class GameShape : public IEntity, public IRenderable
{
public:
	GameShape(std::string filename, sf::Shape* shape, sf::Vector2f position, float rotation, sf::Vector2f scale);
	virtual ~GameShape();

	// Inherited via IEntity
	virtual sf::Vector2f GetPosition() const override;
	virtual void SetPosition(const sf::Vector2f& pos) override;
	virtual float GetRotation() const override;
	virtual void SetRotation(const float rotation) override;
	virtual sf::Vector2f GetScale() const override;
	virtual void SetScale(const sf::Vector2f& scale) override;

	// Inherited via IRenderable
	virtual void Render(sf::RenderWindow & window) override;

private:
	std::unique_ptr<sf::Shape> shape;
	std::unique_ptr<sf::Texture> texture;
};

