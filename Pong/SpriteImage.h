#pragma once
#include "IEntity.h"
#include "IRenderable.h"

class SpriteImage : public IEntity, public IRenderable
{
public:
	SpriteImage(sf::Vector2f position, float rotation, sf::Vector2f scale);
	virtual ~SpriteImage();

	// Inherited via IEntity
	virtual sf::Vector2f GetPosition() const override;
	virtual void SetPosition(const sf::Vector2f& pos) override;
	virtual float GetRotation() const override;
	virtual void SetRotation(const float rotation) override;
	virtual sf::Vector2f GetScale() const override;
	virtual void SetScale(const sf::Vector2f& scale) override;
	virtual void SetTexture(const sf::Texture& texture);
	// Inherited via IRenderable
	virtual void Render(sf::RenderWindow & window) override;
private:
	sf::Sprite sprite;
};

