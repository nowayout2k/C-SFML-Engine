#pragma once
#include "stdlib.h"
#include <time.h> 
#include "Debug.h"

class RandomNumber
{
public:
	RandomNumber() { srand(time(0)); }
	~RandomNumber() {}
	static int GetRandomNumber(int min, int max) { if (min <= max && min >= 0) return rand() % max + min; else Debug::Log("min <= max && min >= 0");  return 0; }
	static float GetRandomNumber(float min, float max) { return (min + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (max - min)))); }
	static bool IsNegative() { return (rand() % 2 == 0) ? true : false; }
	static void SetSeed(unsigned int seed) { srand(seed); };
};

