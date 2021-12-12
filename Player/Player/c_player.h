#pragma once
#include<iostream>
class c_player
{
	int health;
	int power;
public:
	c_player();
	void setHealth(int);
	int getHealthMinus();
	void setPower(int);
	int getPowerMinus();
	void Print();
	int getHealth();
	int getPower();
};

