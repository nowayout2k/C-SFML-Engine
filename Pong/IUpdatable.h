#pragma once
class IUpdatable
{
public:
	virtual void Update(double deltatime) = 0;
};