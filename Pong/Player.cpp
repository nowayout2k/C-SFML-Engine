#include "stdafx.h"
#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

void Player::Update()
{
}

void Player::Render(sf::RenderWindow & window)
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	window.draw(shape);
}

