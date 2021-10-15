#pragma once
#include "includes.h"
class Player
{
private:
	bool isAlive = true;
	float speed = 100;
public:
	float getSpeed() {
		return speed;
	}
};

