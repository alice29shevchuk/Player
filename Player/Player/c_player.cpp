#include "c_player.h"

c_player::c_player()
{
	this->health = this->power = 100;
}

void c_player::setHealth(int health)
{
	this->health = health;
}

int c_player::getHealth()
{
	return health;
}

void c_player::setPower(int power)
{
	this->power = power;
}

int c_player::getPower()
{
	return power;
}

void c_player::Print()
{
	std::cout << "Здоровье = " << this->health << "\nСила = " << this->power << "\n";
}
