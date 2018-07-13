#pragma once
#include <string>

class Debug
{
public:
	Debug();
	~Debug();

	static void Log(std::string message);
	static void LogError(std::string message);
};

