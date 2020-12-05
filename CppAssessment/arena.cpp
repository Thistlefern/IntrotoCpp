#include <iostream>
#include "arena.h"
#include "hero.h"
#include <fstream>
#include <time.h>

using std::cout;
using std::endl;
using std::cin;

int arena()
{
	// arena game loop check
	bool isArenaRunning = true;

	// player input
	int input = 0;
	
	// hero team
	Hero teamOne[4];
	// enemy team
	Hero teamTwo[4];

	int round = 1;

	// heroes
	// the tank
	teamOne[0].name = "Tatiana";
	teamOne[0].title = " the tank";
	teamOne[0].health = 70;
	teamOne[0].maxHealth = 70;
	teamOne[0].attackName = "Longsword";
	teamOne[0].minDamage = 5;
	teamOne[0].maxDamage = 15;
	// the striker
	teamOne[1].name = "Stacy";
	teamOne[1].title = " the striker";
	teamOne[1].attackName = "Double Daggers";
	teamOne[1].minDamage = 10;
	teamOne[1].maxDamage = 20;
	// the mage
	teamOne[2].name = "Maddison";
	teamOne[2].title = " the mage";
	teamOne[2].health = 30;
	teamOne[2].maxHealth = 30;
	teamOne[2].attackName = "Fire Spell";
	teamOne[2].minDamage = 1;
	teamOne[2].maxDamage = 30;
	// the healer
	teamOne[3].name = "Heather";
	teamOne[3].title = " the healer";
	teamOne[3].attackName = "Heal";
	teamOne[3].minDamage = 5;
	teamOne[3].maxDamage = 20;

	// enemies
	// the tank
	teamTwo[0].name = "Barbara";
	teamTwo[0].title = " the barbarian";
	teamTwo[0].health = 70;
	teamTwo[0].maxHealth = 70;
	teamTwo[0].attackName = "Maul";
	teamTwo[0].minDamage = 5;
	teamTwo[0].maxDamage = 15;
	// the striker
	teamTwo[1].name = "Alice";
	teamTwo[1].title = " the assassin";
	teamTwo[1].attackName = "Poisoned Sword";
	teamTwo[1].minDamage = 10;
	teamTwo[1].maxDamage = 20;
	// the mage
	teamTwo[2].name = "Winnifred";
	teamTwo[2].title = " the witch";
	teamTwo[2].health = 30;
	teamTwo[2].maxHealth = 30;
	teamTwo[2].attackName = "Black Magic";
	teamTwo[2].minDamage = 1;
	teamTwo[2].maxDamage = 30;
	// the healer
	teamTwo[3].name = "Polly";
	teamTwo[3].title = " the plague doctor";
	teamTwo[3].attackName = "Heal";
	teamTwo[3].minDamage = 5;
	teamTwo[3].maxDamage = 20;

	cout << "------------------- Battle Arena -------------------" << endl;
	cout << endl;

	cout << "WELCOME ONE AND ALL TO THE BATTLE DOME!!!" << endl;
	cout << "MEET TODAY'S CONTENDERS!" << endl;
	cout << endl;
	cout << "     TEAM ONE          VS              TEAM TWO" << endl;
	// print all the contenders and their health totals
	for (int i = 0; i < 4; i++)
	{
		cout << teamOne[i].name << teamOne[i].title << "		" << teamTwo[i].name << " " << teamTwo[i].title << endl;
		cout << "Health: " << teamOne[i].health << "			" << "Health: " << teamTwo[i].health << endl;
		cout << endl;
	}

	cout << "AAAND...FIGHT!!!" << endl;


	while(isArenaRunning == true)
	{
		srand(time(NULL));
		// sorting heroes by health, putting least health at the start of the array and most at the end
		bool sortedByHealthHeroes = false;
		while(sortedByHealthHeroes == false)
		{
			for(int i = 1; i < 4; i++)
			{
				if(teamOne[i].health < teamOne[i-1].health)
				{
					std::swap(teamOne[i], teamOne[i - 1]);
				}
			}
			if(teamOne[0].health <= teamOne[1].health && teamOne[1].health <= teamOne[2].health && teamOne[2].health <= teamOne[3].health)
			{
				sortedByHealthHeroes = true;
			}
		}
		// sorting enemies by health, putting least health at the start of the array and most at the end
		bool sortedByHealthEnemies = false;
		while (sortedByHealthEnemies == false)
		{
			for (int i = 1; i < 4; i++)
			{
				if (teamTwo[i].health < teamTwo[i - 1].health)
				{
					std::swap(teamTwo[i], teamTwo[i - 1]);
				}
			}
			if (teamTwo[0].health <= teamTwo[1].health && teamTwo[1].health <= teamTwo[2].health && teamTwo[2].health <= teamTwo[3].health)
			{
				sortedByHealthEnemies = true;
			}
		}
		cout << "------------ ROUND " << round << " ------------" << endl;
		for(int i = 0; i < 4; i++)
		{
			cout << teamOne[i].name << teamOne[i].title << " has " << teamOne[i].health << " health left." << endl;
		}
		cout << endl;

		// ********************** HERO LOOP **********************
		cout << "-------- TEAM ONE ATTACK --------" << endl;
		// asks the player what the heroes should do one by one
		for (int i = 0; i < 4; i++)
		{
			if(teamOne[i].isAlive == true)
			{
				int heroDamage = rand() % (teamOne[i].maxDamage - teamOne[i].minDamage) + teamOne[i].minDamage;
				// a counter for enemies and allies, to make the choice by number function later
				for (int c = 0; c < 4; c++)
				{
					teamOne[c].count = 0;
					teamTwo[c].count = 0;
				}

				bool sortedByHealthEnemies = false;
				while (sortedByHealthEnemies == false)
				{
					for (int i = 1; i < 4; i++)
					{
						if (teamTwo[i].health < teamTwo[i - 1].health)
						{
							std::swap(teamTwo[i], teamTwo[i - 1]);
						}
					}
					if (teamTwo[0].health <= teamTwo[1].health && teamTwo[1].health <= teamTwo[2].health && teamTwo[2].health <= teamTwo[3].health)
					{
						sortedByHealthEnemies = true;
					}
				}

				if (teamOne[i].name == "Heather")
				{
					int allyCount = 1;
					if ((teamOne[0].health == teamOne[0].maxHealth || teamOne[0].health == 0) && (teamOne[1].health == teamOne[1].maxHealth || teamOne[1].health == 0) && (teamOne[2].health == teamOne[2].maxHealth || teamOne[2].health == 0) && (teamOne[3].health == teamOne[3].maxHealth || teamOne[3].health == 0))
					{
						cout << "There is no one for Heather to heal, so she stays back." << endl;
					}
					else
					{
						cout << "Who should Heather heal?" << endl;
						for (int h = 0; h < 4; h++)
						{
							if (teamOne[h].health < teamOne[h].maxHealth && teamOne[h].isAlive == true)
							{
								cout << allyCount << ": " << teamOne[h].name << endl;
								teamOne[h].count = allyCount;
								allyCount++;
							}
						}
						cin >> input;
						cout << endl;

						for (int a = 0; a < 4; a++)
						{
							if (teamOne[a].count == input)
							{
								cout << "Heather heals " << teamOne[a].name << " for " << heroDamage << " points of health." << endl;
								teamOne[a].health += heroDamage;
								if (teamOne[a].health > teamOne[a].maxHealth)
								{
									teamOne[a].health = teamOne[a].maxHealth;
								}
								cout << teamOne[a].name << " has " << teamOne[a].health << " points of health remaining." << endl;
							}
						}
					}
				}
				else
				{
					int enemyCount = 1;
					cout << "Who should " << teamOne[i].name << " attack? (She will deal between " << teamOne[i].minDamage << " and " << teamOne[i].maxDamage << " points of damage.)" << endl;
					for (int e = 0; e < 4; e++)
					{
						if (teamTwo[e].isAlive == true)
						{
							cout << enemyCount << ": " << teamTwo[e].name << ", who has " << teamTwo[e].health << " health remaining." << endl;
							teamTwo[e].count = enemyCount;
							enemyCount++;
						}
					}

					cin >> input;
					cout << endl;

					for (int a = 0; a < 4; a++)
					{
						if (teamTwo[a].count == input)
						{
							cout << teamOne[i].name << " uses her " << teamOne[i].attackName << " to attack " << teamTwo[a].name << " for " << heroDamage << " points of damage." << endl;
							teamTwo[a].health -= heroDamage;
							if (teamTwo[a].health < 0)
							{
								teamTwo[a].health = 0;
							}
							cout << teamTwo[a].name << " has " << teamTwo[a].health << " points of health remaining." << endl;
							if (teamTwo[a].health == 0)
							{
								cout << teamTwo[a].name << " succumbs to her wounds, and falls!" << endl;
								teamTwo[a].isAlive = false;
							}
						}
					}
				}
				cout << endl;
			}
			if(teamTwo[0].health == 0 && teamTwo[1].health == 0 && teamTwo[2].health == 0 && teamTwo[3].health == 0)
			{
				isArenaRunning = false;
				goto GameOver;
			}
		}

		// ********************** ENEMY LOOP **********************
		cout << "-------- TEAM TWO ATTACK --------" << endl;
		for(int i = 0; i < 4; i++)
		{
			if (teamTwo[i].isAlive == true)
			{
				int enemyDamage = rand() % (teamTwo[i].maxDamage - teamTwo[i].minDamage) + teamTwo[i].minDamage;
				int heroesAlive = 0;
				int enemiesAlive = 0;
				//a check for how many heroes are left alive
				for(int h = 0; h < 4; h++)
				{
					if(teamOne[h].isAlive == true)
					{
						heroesAlive++;
					}
					if (teamTwo[h].isAlive == true)
					{
						enemiesAlive++;
					}
				}
				// random number to determine who the enemy attacks
				int whoToFight = 3 - (rand() % heroesAlive);
				// resetting the count
				for (int c = 0; c < 4; c++)
				{
					teamOne[c].count = 0;
					teamTwo[c].count = 0;
				}

				// sorting heroes by health, putting least health at the start of the array and most at the end
				bool sortedByHealthHeroes = false;
				while (sortedByHealthHeroes == false)
				{
					for (int i = 1; i < 4; i++)
					{
						if (teamOne[i].health < teamOne[i - 1].health)
						{
							std::swap(teamOne[i], teamOne[i - 1]);
						}
					}
					if (teamOne[0].health <= teamOne[1].health && teamOne[1].health <= teamOne[2].health && teamOne[2].health <= teamOne[3].health)
					{
						sortedByHealthHeroes = true;
					}
				}

				// the enemy attacks
				if (teamTwo[i].name == "Polly")
				{
					int allyCount = 1;
					if ((teamTwo[0].health == teamTwo[0].maxHealth || teamTwo[0].health == 0) && (teamTwo[1].health == teamTwo[1].maxHealth || teamTwo[1].health == 0) && (teamTwo[2].health == teamTwo[2].maxHealth || teamTwo[2].health == 0) && (teamTwo[3].health == teamTwo[3].maxHealth || teamTwo[3].health == 0))
					{
						cout << "There is no one for Polly to heal, so she stays back." << endl;
					}
					else
					{
						for (int h = 0; h < 4; h++)
						{
							if (teamTwo[h].health < teamTwo[h].maxHealth && teamTwo[h].isAlive == true)
							{
								teamTwo[h].count = allyCount;
								allyCount++;
							}
						}

						for (int a = 0; a < 4; a++)
						{
							if (teamTwo[a].count == 1)
							{
								cout << "Polly heals " << teamTwo[a].name << " for " << enemyDamage << " points of health." << endl;
								teamTwo[a].health += enemyDamage;
								if (teamTwo[a].health > teamTwo[a].maxHealth)
								{
									teamTwo[a].health = teamTwo[a].maxHealth;
								}
								cout << teamTwo[a].name << " has " << teamTwo[a].health << " points of health remaining." << endl;
							}
						}
					}
				}
				else
				{
					cout << teamTwo[i].name << " attacks " << teamOne[whoToFight].name << " with her " << teamTwo[i].attackName << ", dealing " << enemyDamage << " points of damage." << endl;
					teamOne[whoToFight].health -= enemyDamage;
					if (teamOne[whoToFight].health < 0)
					{
						teamOne[whoToFight].health = 0;
					}
					cout << teamOne[whoToFight].name << " has " << teamOne[whoToFight].health << " points of health remaining." << endl;
					if (teamOne[whoToFight].health == 0)
					{
						cout << teamOne[whoToFight].name << " succumbs to her wounds, and falls!" << endl;
						teamOne[whoToFight].isAlive = false;
					}
				}
				cout << endl;
			}
			if (teamOne[0].health == 0 && teamOne[1].health == 0 && teamOne[2].health == 0 && teamOne[3].health == 0)
			{
				isArenaRunning = false;
				goto GameOver;
			}
		}
		round++;
	}
GameOver:
	if (teamTwo[0].health == 0 && teamTwo[1].health == 0 && teamTwo[2].health == 0 && teamTwo[3].health == 0)
	{
		cout << "	  VICTORY FOR TEAM ONE!!!" << endl;
		cout << "----------- GAME OVER -----------" << endl;
	}
	else
	{
		cout << "	  VICTORY FOR TEAM ONE!!!" << endl;
		cout << "----------- GAME OVER -----------" << endl;
	}
	return 0;
}