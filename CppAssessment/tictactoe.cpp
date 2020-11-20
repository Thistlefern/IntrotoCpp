#include <iostream>
#include "tictactoe.h"
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

int ticTacToe()
{
	// A check for whether the game is still going
	bool isTTTRunning = true;


	// Setting each space to a blank value
	char space1 = ' ';
	char space2 = ' ';
	char space3 = ' ';
	char space4 = ' ';
	char space5 = ' ';
	char space6 = ' ';
	char space7 = ' ';
	char space8 = ' ';
	char space9 = ' ';

	bool playerOne = true;

	cout << "-------------------- Tic-Tac-Toe --------------------" << endl;

	while(isTTTRunning == true)
	{
		// Printing the board
		cout << endl;
		cout << " " << space1 << " | " << space4 << " | " << space7 << " " << endl;
		cout << "-----------" << endl;
		cout << " " << space2 << " | " << space5 << " | " << space8 << " " << endl;
		cout << "-----------" << endl;
		cout << " " << space3 << " | " << space6 << " | " << space9 << " " << endl;
		cout << endl;

		if (playerOne == true)
		{
			char playerOneInputRow[10] = "";
			char playerOneInputColumn[10] = "";

			cout << "Player 1, place an X!" << endl;
			cout << "Which row do you choose? (top, middle, bottom)" << endl;
			cin >> playerOneInputRow;		// TODO add "this isn't an option" text
			cout << "Which column do you choose? (left, middle, right)" << endl;
			cin >> playerOneInputColumn;	// TODO add "this isn't an option" text

			if (strcmp(playerOneInputRow, "top") == 0)
			{
				if (space1 = ' ' && strcmp(playerOneInputColumn, "left") == 0)
				{
					space1 = 'X';
					playerOne = false;
				}
				else if (space1 = ' ' && strcmp(playerOneInputColumn, "middle") == 0)
				{
					space4 = 'X';
					playerOne = false;
				}
			}
		}

		//isTTTRunning = false;
	}

	return 0;
}
