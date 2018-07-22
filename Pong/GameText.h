#pragma once
#include "ITransformable.h"
#include "IRenderable.h"

/*Wrapper for the SFML Text class which also renders the Text*/
class GameText :public ITransformable, public IRenderable
{
public:
	/*@param filename - name of file to use for font (ex: arial.ttf)
	@param position - positioning of the Text
	@param rotation - angle to rotate Text
	@parma scale - size factor based on inital size of Text*/
	GameText(std::string filename, sf::Vector2f position, float rotation, sf::Vector2f scale);
	virtual ~GameText();


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

	// Inherited via ITransformable
	virtual void SetText(std::string text);

	// Inherited via ITransformable
	virtual void SetColor(sf::Color color);

	// Inherited via IRenderable
	virtual void Render(sf::RenderWindow & window) override;

private:
	sf::Text text;
	sf::Font font;
};

