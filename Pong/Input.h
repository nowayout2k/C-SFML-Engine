#pragma once
#include "Subject.h"
#include "InputEvent.h"

class Input : public Subject
{
public:
	Input();
	~Input();
	void HandleInput();
};

