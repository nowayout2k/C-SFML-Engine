
#include "Scene.h"
namespace OE
{

	void Scene::Render(sf::RenderWindow & window)
	{
		/*Draw each object in the scene*/
		for (auto itr = entities.begin(); itr != entities.end(); ++itr)
		{
			if (itr->second->GetIsActive())
			{
				itr->second->Render(window);
			}

		}
	}

	void Scene::Update(const double deltatime)
	{
		//Remove entities that died last frame
		if (deadEntities.size() > 0)
		{
			for (auto itr = deadEntities.begin(); itr != deadEntities.end(); ++itr)
			{
				entities.erase(*itr);
			}
			deadEntities.clear();
		}

		/*Update objects in the scene*/
		for (auto itr = entities.begin(); itr != entities.end(); ++itr)
		{
			if (itr->second->IsAlive())
			{
				itr->second->Update(deltatime);
			}
			else
			{
				//add to dead list
				deadEntities.push_back(itr->second->GetId());
			}
		}
	}

	void Scene::AddEntity(Entity* const entity)
	{
		entities[entity->GetId()] = std::unique_ptr<Entity>(entity);
	}

	void Scene::RemoveEntity(int id)
	{
		entities.erase(id);
	}

	Entity* Scene::GetEntity(int id)
	{
		if (entities.find(id) != entities.end())
		{
			return entities[id].get();
		}
		else
		{
			return nullptr;
		}
	}
}