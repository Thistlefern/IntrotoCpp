#include <cstdlib>
#include <iostream>
#include <ctime>
#include "sum.h" // include the sum file so we can access its declarations

// declare and define the sum function
//int sum(int a, int b)
//{
//	return a + b;
//}

int main()
{
	//	// modern C++ - C++11/14/17+
	//	std::cout << "The number " << 5 << " is the best number.";
	//
	//	// C++ / classic C++ - C++98/03
	//	printf("The number %d is the best number.", 5);
	//
	//	int age; // warning: this is an uninitialized variable
	//		   // local variables like this are *not* default initialized
	//
	//	int score = 0; // always initialize your variables
	//
	//	int input = 0;
	//	int playerScore = 55;
	//	int bonusPoints = 7;
	//
	//	int finalScore = playerScore + bonusPoints;
	//
	//	// modern C++ - C++11/14/17+
	//	std::cin >> input;
	//
	//	// C++ / classic C++ - C++98/03
	//	scanf("%d", &input);
	//
	//	int num = 9001;
	//	if (num < 100)
	//	{
	//		std::cout << "That's a big number.";
	//	}
	//	else if (num > 0)
	//	{
	//		std::cout << "That's a small number.";
	//	}
	//	else
	//	{
	//		std::cout << "Negatives?!";
	//	}
	//
	//	// let i start off at 0
	//	// as long as i is less than 5
	//	// run the loop
	//	// and then add pre-increment i
	//	for (int i = 0; i < 5; i++)
	//	{
	//		std::cout << i << std::endl;
	//	}
	//
	//	int numA = 0;
	//
	//	//// while numA is less than 5, run this loop
	//	//while (numA < 5)
	//	//{
	//	//	std::cout << i << std::endl;
	//	//}
	//
	//	//// run the do statement, and then run the loop while numB is less than 5
	//	//int numB = 0;
	//	//do
	//	//{
	//	//	std::cout << i << std::endl;
	//	//}
	//	//while (numB < 5);
	//
	//	// this for loop stops when i is 5
	//	for (int i = 1; i < 10; ++i)
	//	{
	//		if (i == 5)
	//		{
	//			break;
	//		}
	//		std::cout << i << std::endl;
	//	}
	//
	//	// this for loop skips the rest of the iteration body
	//	// when i is equal to 5
	//	for (int i = 1; i < 10; ++i)
	//	{
	//		if (i == 5)
	//		{
	//			continue;
	//		}
	//		std::cout << i << std::endl;
	//	}
	//
	//	int total = sum(5, 6);
	//
	//	return 0;

	// =================== GUESSING GAME =================== //

	std::srand(std::time(nullptr)); // sets the time as a seed for random numbers

	int random1 = std::rand(); // just a random number based on the time
	std::cout << "Random number: " << random1 << std::endl;

	int max1 = 0; // setting up a maximum for the next random number
	std::cout << "Enter a maximum for the next random number." << std::endl;
	std::cin >> max1; // getting a new maximum for the second random number
	int random2 = std::rand() % (max1 + 1); // sets the second random number to be between 0 and the maximum number set
	std::cout << "Random number (with chosen maximum): " << random2 << std::endl;

	int min2 = 0; // setting up a minimum for the next random number
	int max2 = 0; // setting up a maximum for the next random number
	std::cout << "Enter a minimum for the next random number." << std::endl;
	std::cin >> min2; // getting a new minimum for the third random number
	std::cout << "Enter a maximum for the next random number." << std::endl;
	std::cin >> max2; // getting a new maximum for the second random number
	int random3 = std::rand() % (max2 - min2 + 1) + min2; // sets the third random number to be between the min and max given
	std::cout << "Random number (with chosen minimum and maximum): " << random3 << std::endl;

	bool game_active = true;
	int random_guess = std::rand() % 100 + 1; // generate a random number between (and including) 1 and 100
	int input = 0;
	//std::cout << "Random number: " << random_guess << std::endl;
	std::cout << "Guess a number between 1 and 100." << std::endl;
	while (game_active == true)
	{
		std::cin >> input;
		if (input == random_guess)
		{
			std::cout << "Correct! Congratulations!" << std::endl;
			game_active = false;
		}
		else if (input < random_guess)
		{
			std::cout << "Too low, guess again." << std::endl;
		}
		else if (input > random_guess)
		{
			std::cout << "Too high, guess again." << std::endl;
		}
	}
}