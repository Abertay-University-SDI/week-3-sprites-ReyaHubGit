#pragma once
#include "Framework/GameObject.h"
class Player : public GameObject
{
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);

	sf::Texture mushroom;
	Input in;

};

