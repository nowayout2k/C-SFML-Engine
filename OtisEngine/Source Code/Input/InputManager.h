#pragma once
#include "Subject.h"
#include "InputEvent.h"
namespace OE
{
	/*Handles User input*/
	class InputManager : public Subject
	{
	public:
		InputManager();
		~InputManager();

		static InputManager* GetInstance() { return _instance; }

		/*stores keys being pressed and then brodcasts them*/
		void HandleInput();

	private:
		static InputManager* _instance;
	};

}