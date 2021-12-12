#pragma once
#include<iostream>
class c_player
{
	int health;
	int power;
public:
	c_player();
	void setHealth(int);
	int getHealth();
	void setPower(int);
	int getPower();
	void Print();
};

