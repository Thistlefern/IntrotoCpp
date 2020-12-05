#include <iostream>
#include "numbers.h"

using std::cout;
using std::endl;
using std::cin;

int numberGuess()
{
	// number guessing game loop
	bool isNumbersRunning = true;

	// creating an array of numbers from 0-100
	int numbers[101];
	int arrayStart = 0;
	for(int i = 0; i < 101; i++)
	{
		numbers[i] = arrayStart;
		arrayStart++;
	}

	// boundaries for the search
	int searchStart = 0;
	int searchEnd = 101;

	char input = ' ';
	
	cout << "------------------ Number Guessing -----------------" << endl;
	cout << endl;

	cout << "Start by thinking of a whole number between 0 and 100. (Yes, 0 and 100 are also options!)" << endl;
	system("pause");
	cout << "Ready? Let's play!" << endl;

	while (isNumbersRunning == true)
	{
		int middle = ((searchEnd-searchStart) / 2) + searchStart;
		cout << endl;
		cout << "Is " << middle << " the number that you thought of?" << endl;
		cout << "1: too low" << endl;
		cout << "2: correct" << endl;
		cout << "3: too high" << endl;
		cin >> input;

		if(input == '2')
		{
			cout << "Hooray, I got it! Thanks for playing!" << endl;
			isNumbersRunning = false;
		}
		else if(input == '1')
		{
			cout << "Alright, I'll try again with a higher number." << endl;
			searchStart = (middle + 1);
			
		}
		else if (input == '3')
		{
			cout << "Alright, I'll try again with a lower number." << endl;
			searchEnd = (middle - 1);
		}
		else
		{
			cout << "That isn't a recognized answer, please try again." << endl;
		}
	}
	return 0;
}