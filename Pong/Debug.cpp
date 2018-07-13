#include "stdafx.h"
#include "Debug.h"
#include <iostream>

Debug::Debug()
{
}


Debug::~Debug()
{
}

void Debug::Log(std::string message)
{
	std::cout << message << std::endl;
}

void Debug::LogError(std::string message)
{
	throw std::exception(message.c_str());
}
