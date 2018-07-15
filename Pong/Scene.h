#pragma once
#include "IRenderable.h"
#include "IUpdatable.h"

class Scene : public IRenderable, public IUpdatable
{
public:
	Scene() {};
	virtual ~Scene() {};

	// Inherited via IRenderable
	virtual void Render(sf::RenderWindow & window) override = 0;

	// Inherited via IUpdatable
	virtual void Update(double deltatime) override = 0;
	std::string GetName() { return name; }
protected:
	std::string name;
};

