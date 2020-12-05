#include <iostream>
#include "tictactoe.h"
#include "numbers.h"
#include "arena.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	// main game loop to let you keep playing games
	bool playGamesForever = true;

	cout << "Welcome to the game room!" << endl;
	
	while (playGamesForever == true)
	{
		// input to choose your game
		char input = ' ';

		// input to play again after a game is done
		char playAgain = ' ';

		cout << "Which game would you like to play?" << endl;
		cout << "1: Tic-Tac-Toe" << endl;
		cout << "2: Number Guessing Game" << endl;
		cout << "3: Battle Arena" << endl;
		cout << "4: Leave the Game Room (Note: this is how you quit playing, this is NOT an escape room game!)" << endl;
		cin >> input;

		switch (input)
		{
			case '1':
				ticTacToe();
				cout << endl;
				cout << "Play another game? (y/n)" << endl;
				cin >> playAgain;
				if(playAgain == 'n')
				{
					playGamesForever = false;
				}
				cout << endl;
				break;
			case '2':
				numberGuess();
				cout << endl;
				cout << "Play another game? (y/n)" << endl;
				cin >> playAgain;
				if (playAgain == 'n')
				{
					playGamesForever = false;
				}
				cout << endl;
				break;
			case '3':
				arena();
				cout << endl;
				cout << "Play another game? (y/n)" << endl;
				cin >> playAgain;
				if (playAgain == 'n')
				{
					playGamesForever = false;
				}
				cout << endl;
				break;
			case '4':
				playGamesForever = false;
				break;
			default:
				cout << "That isn't a recognized command. Please enter 1, 2, or 3 to choose your game, or 4 to leave the game room." << endl;
				break;
		}
	}
	cout << "Thank you for checking out my games! Goodbye!" << endl;
}