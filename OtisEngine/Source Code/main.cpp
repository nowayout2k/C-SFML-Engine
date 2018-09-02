#pragma once

#include "OtisEngine.h"
#include "Pong.h"

int main()
{
	OE::OtisEngine* engine = new OE::OtisEngine();
	Pong* pong = new Pong();
	while (engine->UpdateEngine())
	{

	}
	delete engine, pong;
	return 0;
}
