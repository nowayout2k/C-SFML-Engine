#pragma once

//For classes that can update an object
class IUpdatable
{
public:
	/*Update object properties
	@param deltaTime - Time between frames*/
	virtual void Update(double deltatime) = 0;
};