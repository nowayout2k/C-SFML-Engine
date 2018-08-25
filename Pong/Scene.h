#pragma once
#include <vector>
#include <unordered_map>
#include "Entity.h"

/*Extendable class for Scenes*/
class Scene
{
public:
	Scene() {};
	virtual ~Scene() {};

	virtual void Render(sf::RenderWindow & window);
	virtual void Update(double deltatime);

	void AddEntity(Entity* const entity);
	void RemoveEntity(int id);
	Entity* GetEntity(int id);
	//return name of scene
	std::string GetName() { return name; }
protected:
	std::string name;
	std::unordered_map<int, std::unique_ptr<Entity>> entities;
	std::vector<int> deadEntities;
};

