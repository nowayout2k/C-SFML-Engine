#pragma once

#include "SFML/Graphics.hpp"
namespace OE
{
	/*A tranformable game object
	Updates and stores State Info for basic game objects*/
	class Entity
	{
 


	public:
		/*@param filename - name of file to use for texture (ex: image.png)*/
		Entity(sf::Transformable* const gameObject);

		virtual ~Entity();

		/*Render Entity*/
		virtual void Render(sf::RenderWindow& window) = 0;

		/*Update Entity*/
		virtual void Update(const double deltatime) = 0;
 
		/*Get Transform for Entity*/
		sf::Transformable* const GetTransform() const { return transform.get(); }

		/*Mark as dead*/
		void Kill();

		/*Is object in alive state?*/
		bool IsAlive() const { return isAlive; };
		
		/*Return unique id for Entity*/
		int GetId() const { return id; }

		/*Return whether or not entity is active*/
		int GetIsActive() const { return isActive; }

	protected:
		bool isAlive;
		bool isActive;
		std::unique_ptr<sf::Transformable> transform;
		int id;
	private:
		static int _nextID;
	};

}