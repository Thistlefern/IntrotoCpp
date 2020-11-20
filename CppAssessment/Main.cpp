#include <iostream>
#include "tictactoe.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int input = 0;
	cout << "Welcome! Which game would you like to play?" << endl;
	cout << "1: Tic-Tac-Toe" << endl;
	cout << "2: Battle Arena" << endl;
	cout << "3: Number Guessing Game" << endl;
	cin >> input;
	switch (input)
	{
		case 1:
			ticTacToe();
			break;
		case 2:
			break;
		case 3:
			break;
		default:		// TODO add a game loop, a response if the input isn't a number between 1-3, and an option to quit
			break;
	}

}