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

	char ticTacToeBoard[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

	bool playerOne = true;

	cout << "-------------------- Tic-Tac-Toe --------------------" << endl;

	while (isTTTRunning == true)
	{
		// Printing the board
		cout << endl;
		cout << " " << ticTacToeBoard[0] << " | " << ticTacToeBoard[3] << " | " << ticTacToeBoard[6] << " " << endl;
		cout << "-----------" << endl;
		cout << " " << ticTacToeBoard[1] << " | " << ticTacToeBoard[4] << " | " << ticTacToeBoard[7] << " " << endl;
		cout << "-----------" << endl;
		cout << " " << ticTacToeBoard[2] << " | " << ticTacToeBoard[5] << " | " << ticTacToeBoard[8] << " " << endl;
		cout << endl;



		// Player One's turn
		if (playerOne == true)
		{
			// reset input for row and column to blank
			char playerInputRow[10] = "";
			char playerInputColumn[10] = "";

			cout << "Player 1, place an X!" << endl;
			cout << "Which row do you choose? (top, middle, bottom)" << endl;
			cin >> playerInputRow;		// TODO add "this isn't an option" text
			cout << "Which column do you choose? (left, middle, right)" << endl;
			cin >> playerInputColumn;	// TODO add "this isn't an option" text

			// logic for the top row, and for each column therein
			if (strcmp(playerInputRow, "top") == 0)
			{
				if (strcmp(playerInputColumn, "left") == 0)
				{
					if (ticTacToeBoard[0] == ' ')
					{
						ticTacToeBoard[0] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "middle") == 0)
				{
					if (ticTacToeBoard[3] == ' ')
					{
						ticTacToeBoard[3] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "right") == 0)
				{
					if (ticTacToeBoard[6] == ' ')
					{
						ticTacToeBoard[6] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
			}
			// logic for the middle row, and for each column therein
			else if (strcmp(playerInputRow, "middle") == 0)
			{
				if (strcmp(playerInputColumn, "left") == 0)
				{
					if (ticTacToeBoard[1] == ' ')
					{
						ticTacToeBoard[1] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "middle") == 0)
				{
					if (ticTacToeBoard[4] == ' ')
					{
						ticTacToeBoard[4] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "right") == 0)
				{
					if (ticTacToeBoard[7] == ' ')
					{
						ticTacToeBoard[7] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
			}
			// logic for the bottom row, and for each column therein
			else if (strcmp(playerInputRow, "bottom") == 0)
			{
				if (strcmp(playerInputColumn, "left") == 0)
				{
					if (ticTacToeBoard[2] == ' ')
					{
						ticTacToeBoard[2] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "middle") == 0)
				{
					if (ticTacToeBoard[5] == ' ')
					{
						ticTacToeBoard[5] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "right") == 0)
				{
					if (ticTacToeBoard[8] == ' ')
					{
						ticTacToeBoard[8] = 'X';
						playerOne = false;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Pleae choose a different space." << endl;
					}
				}
			}
		}
		// Player Two's turn
		else if (playerOne == false)
		{
			char playerInputRow[10] = "";
			char playerInputColumn[10] = "";

			cout << "Player 2, place an O!" << endl;
			cout << "Which row do you choose? (top, middle, bottom)" << endl;
			cin >> playerInputRow;		// TODO add "this isn't an option" text
			cout << "Which column do you choose? (left, middle, right)" << endl;
			cin >> playerInputColumn;	// TODO add "this isn't an option" text

			// logic for the top row, and for each column therein
			if (strcmp(playerInputRow, "top") == 0)
			{
				if (strcmp(playerInputColumn, "left") == 0)
				{
					if (ticTacToeBoard[0] == ' ')
					{
						ticTacToeBoard[0] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "middle") == 0)
				{
					if (ticTacToeBoard[3] == ' ')
					{
						ticTacToeBoard[3] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "right") == 0)
				{
					if (ticTacToeBoard[6] == ' ')
					{
						ticTacToeBoard[6] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
			}
			// logic for the middle row, and for each column therein
			else if (strcmp(playerInputRow, "middle") == 0)
			{
				if (strcmp(playerInputColumn, "left") == 0)
				{
					if (ticTacToeBoard[1] == ' ')
					{
						ticTacToeBoard[1] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "middle") == 0)
				{
					if (ticTacToeBoard[4] == ' ')
					{
						ticTacToeBoard[4] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "right") == 0)
				{
					if (ticTacToeBoard[7] == ' ')
					{
						ticTacToeBoard[7] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
			}
			// logic for the bottom row, and for each column therein
			else if (strcmp(playerInputRow, "bottom") == 0)
			{
				if (strcmp(playerInputColumn, "left") == 0)
				{
					if (ticTacToeBoard[2] == ' ')
					{
						ticTacToeBoard[2] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "middle") == 0)
				{
					if (ticTacToeBoard[5] == ' ')
					{
						ticTacToeBoard[5] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
				else if (strcmp(playerInputColumn, "right") == 0)
				{
					if (ticTacToeBoard[8] == ' ')
					{
						ticTacToeBoard[8] = 'O';
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
			}
			//isTTTRunning = false;*/
		}

		return 0;
	}
}
