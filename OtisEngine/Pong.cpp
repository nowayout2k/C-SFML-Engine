#include "Pong.h"
#include "SceneManager.h"
#include "GameScene.h"
#include "stdafx.h"

Pong::Pong()
{
	OE::SceneManager::LoadScene(new GameScene());
}


Pong::~Pong()
{
}
