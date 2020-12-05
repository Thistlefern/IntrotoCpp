#include <iostream>
#include "arena.h"
#include "hero.h"
#include <fstream> 

using std::cout;
using std::endl;
using std::cin;

int arena()
{
	// arena game loop check
	bool isArenaRunning = true;

	// player input
	char input = ' ';
	
	// hero team
	Hero teamOne[4];
	// enemy team
	Hero teamTwo[4];

	// heroes
	// the tank
	teamOne[0].name = "Tatiana";
	teamOne[0].title = " the tank";
	teamOne[0].health = 100;
	teamOne[0].maxHealth = 100;
	teamOne[0].attackName = "Longsword";
	teamOne[0].minDamage = 5;
	teamOne[0].maxDamage = 15;
	// the striker
	teamOne[1].name = "Stacy";
	teamOne[1].title = " the striker";
	teamOne[1].attackName = "Double daggers";
	teamOne[1].minDamage = 10;
	teamOne[1].maxDamage = 20;
	// the mage
	teamOne[2].name = "Maddison";
	teamOne[2].title = " the mage";
	teamOne[2].health = 30;
	teamOne[2].maxHealth = 30;
	teamOne[2].attackName = "Random magic";
	teamOne[2].minDamage = 0;
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
	teamTwo[0].health = 100;
	teamTwo[0].maxHealth = 100;
	teamTwo[0].attackName = "Maul";
	teamTwo[0].minDamage = 5;
	teamTwo[0].maxDamage = 15;
	// the striker
	teamTwo[1].name = "Alice";
	teamTwo[1].title = " the assassin";
	teamTwo[1].attackName = "Poisoned sword";
	teamTwo[1].minDamage = 10;
	teamTwo[1].maxDamage = 20;
	// the mage
	teamTwo[2].name = "Winnie";
	teamTwo[2].title = " the witch";
	teamTwo[2].health = 30;
	teamTwo[2].maxHealth = 30;
	teamTwo[2].attackName = "Black magic";
	teamTwo[2].minDamage = 0;
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
		bool sortedByHealth = false;
		// sorting by health, putting least health at the start of the array and most at the end
		while(sortedByHealth == false)
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
				sortedByHealth = true;
			}
		}

		// print out heroes after sorting
		for(int i = 0; i < 4; i++)
		{
			cout << teamOne[i].name << teamOne[i].title << " has " << teamOne[i].health << " health left." << endl;
		}
		cout << endl;
		// a second for loop, to ask the player what the heroes should do one by one
		for(int i = 0; i < 4; i++)
		{
			if(teamOne[i].name == "Heather")
			{
				int allyCount = 1;
				if (teamOne[0].health == teamOne[0].maxHealth && teamOne[1].health == teamOne[1].maxHealth && teamOne[2].health == teamOne[2].maxHealth && teamOne[3].health == teamOne[3].maxHealth)
				{
					cout << "There is no one for Heather to heal, so she stays back." << endl;
				}
				else
				{
					cout << "Who should Heather heal?" << endl;
					for (int h = 0; h < 4; h++)
					{
						if(teamOne[h].health < teamOne[h].maxHealth && teamOne[h].isAlive == true)
						{
							cout << allyCount << ": " << teamOne[h].name << endl;
							allyCount++;
						}
					}
					// TODO input on who to heal
				}
			}
			else
			{
				int enemyCount = 1;
				cout << "Who should " << teamOne[i].name << " attack?" << endl;
				for (int e = 0; e < 4; e++)
				{
					if(teamTwo[e].isAlive == true)
					{
						cout << enemyCount << ": " << teamTwo[e].name << ", who has " << teamTwo[e].health << " health remaining." << endl;
						enemyCount++;
					}
				}
				// TODO input on who to attack
			}
			cout << endl;
		}

		isArenaRunning = false;
	}

	return 0;
}