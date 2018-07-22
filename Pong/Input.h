#pragma once
#include "Subject.h"
#include "InputEvent.h"

/*Handles User input*/
class Input : public Subject
{
public:
	Input();
	~Input();

	/*stores keys being pressed and then brodcasts them*/
	void HandleInput();
};

