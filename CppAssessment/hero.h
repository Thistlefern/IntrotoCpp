#pragma once
class Hero
{
public:
	Hero();

	bool isAlive = true;
	const char* name = "Name";
	const char* title = "title";
	int health = 50;
	int maxHealth = 50;
	const char* attackName = "att name";
	int minDamage = 0;
	int maxDamage = 50;
};