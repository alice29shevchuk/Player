#include "c_player.h"

c_player::c_player()
{
	this->health = this->power = 100;
}

void c_player::setHealth(int health)
{
	this->health = this->health + health;
}

int c_player::getHealthMinus()
{
	return this->health = health - 5;
}

void c_player::setPower(int power)
{
	this->power = this->power + power;
}

int c_player::getPowerMinus()
{
	return this->power = power-5;
}

void c_player::Print()
{
	std::cout << "Здоровье = " << this->health << "\nСила = " << this->power << "\n";
}

int c_player::getHealth()
{
	return this->health = health;
}

int c_player::getPower()
{
	return this->power;
}
