#include "Player.h"

Player::Player()
{
	//set player start position
	setPosition(sf::Vector2f(100, 100));
	setSize(sf::Vector2f(100, 100));

	//load player image
	mushroom.loadFromFile("gfx/mushroom.png");

	setVelocity(0.f, 0.f);
}
