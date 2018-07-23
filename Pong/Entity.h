#pragma once

#include "SFML/Graphics.hpp"

/*A tranformable game object*/
class Entity
{

public:
	/*@param filename - name of file to use for texture (ex: image.png)
	@param position - positioning of the object
	@param rotation - angle to rotate object
	@parma scale - size factor based on inital size of object*/
	Entity(sf::Transformable* gameObject, sf::Vector2f position, float rotation, sf::Vector2f scale);

	virtual ~Entity();

	virtual void Render(sf::RenderWindow & window)=0;
	virtual void Update(double deltatime)=0;
	sf::Transformable* const GetTransform() { return transform.get(); }
	void Kill();
	bool IsAlive() const { return isAlive; };
	int GetId() const { return id; }
protected:
	bool isAlive;
	std::unique_ptr<sf::Transformable> transform;
	int id;
private:
	static int nextID;
};

