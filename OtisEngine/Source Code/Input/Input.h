#pragma once
#include "Subject.h"
#include "InputEvent.h"
namespace OE
{
	/*Handles User input*/
	class Input : public Subject
	{
	public:
		Input();
		~Input();

		static Input* GetInstance() { return _instance; }

		/*stores keys being pressed and then brodcasts them*/
		void HandleInput();

	private:
		static Input* _instance;
	};

}