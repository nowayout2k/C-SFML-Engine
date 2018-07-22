#pragma once
#include "ITransformable.h"
#include "IRenderable.h"

/*Wrapper for the SFML Sprite class which also renders the Sprite*/
class GameSprite : public ITransformable, public IRenderable
{
public:
	/*@param filename - name of file to use for texture (ex: image.png)
	@param position - positioning of the sprite
	@param rotation - angle to rotate sprite
	@parma scale - size factor based on inital size of sprite*/
	GameSprite(std::string filename, sf::Vector2f position, float rotation, sf::Vector2f scale);

	virtual ~GameSprite();

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
	sf::Sprite sprite;
	sf::Texture texture;
};

