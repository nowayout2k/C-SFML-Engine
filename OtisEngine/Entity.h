#pragma once

#include "SFML/Graphics.hpp"
namespace OE
{
	/*A tranformable game object*/
	class Entity
	{

	public:
		/*@param filename - name of file to use for texture (ex: image.png)*/
		Entity(sf::Transformable* const gameObject);

		virtual ~Entity();

		virtual void Render(sf::RenderWindow& window) = 0;
		virtual void Update(const double deltatime) = 0;
		sf::Transformable* const GetTransform() const { return transform.get(); }
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

}