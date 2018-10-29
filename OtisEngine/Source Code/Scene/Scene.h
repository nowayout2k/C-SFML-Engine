#pragma once
#include <vector>
#include <unordered_map>
#include "Entity.h"

namespace OE
{
	/*Extendable class for Scenes*/
	class Scene
	{
	public:
		Scene() {};
		virtual ~Scene() {};

		/*Draw Objects in scene*/
		virtual void Render(sf::RenderWindow & window);

		/*Update objects in scene*/
		virtual void Update(const double deltatime);

		/*Add an object to the scene*/
		void AddEntity(Entity* const entity);

		/*Remove an object from the scene*/
		void RemoveEntity(const int id);

		/*Return an object matching the id param*/
		Entity* GetEntity(const int id);

		//return name of scene
		std::string GetName() const { return name; }
	protected:
		std::string name;
		std::unordered_map<int, std::unique_ptr<Entity>> entities;
		std::vector<int> deadEntities;
	};
}

