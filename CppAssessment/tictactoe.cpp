#include <iostream>
#include "tictactoe.h"

using std::cout;
using std::endl;
using std::cin;

int ticTacToe()
{
	// A check for whether the game is still going
	bool isTTTRunning = true;

	char ticTacToeBoard[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

	bool playerOne = true;
	int winner = 0;

	// This array keeps track of the sums of the rows, columns, and diagonals, for easier logic checking
	//						  |  row   | column |diag|
	int ticTacToeWinner[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

	cout << "-------------------- Tic-Tac-Toe -------------------" << endl;
	// Printing the board
	cout << endl;
	cout << " " << ticTacToeBoard[0] << " | " << ticTacToeBoard[3] << " | " << ticTacToeBoard[6] << " " << endl;
	cout << "-----------" << endl;
	cout << " " << ticTacToeBoard[1] << " | " << ticTacToeBoard[4] << " | " << ticTacToeBoard[7] << " " << endl;
	cout << "-----------" << endl;
	cout << " " << ticTacToeBoard[2] << " | " << ticTacToeBoard[5] << " | " << ticTacToeBoard[8] << " " << endl;
	cout << endl;

	while (isTTTRunning == true)
	{
		// the check for a tie game is in the game loop because at the end of each game loop, it is added to, and once it hits the number 9, the game ends
		int tieGame = 0;

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
						ticTacToeWinner[0]++;
						ticTacToeWinner[3]++;
						ticTacToeWinner[6]++;
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
						ticTacToeWinner[0]++;
						ticTacToeWinner[4]++;
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
						ticTacToeWinner[0]++;
						ticTacToeWinner[5]++;
						ticTacToeWinner[7]++;
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
						ticTacToeWinner[1]++;
						ticTacToeWinner[3]++;
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
						ticTacToeWinner[1]++;
						ticTacToeWinner[4]++;
						ticTacToeWinner[6]++;
						ticTacToeWinner[7]++;
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
						ticTacToeWinner[1]++;
						ticTacToeWinner[5]++;
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
						ticTacToeWinner[2]++;
						ticTacToeWinner[3]++;
						ticTacToeWinner[7]++;
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
						ticTacToeWinner[2]++;
						ticTacToeWinner[4]++;
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
						ticTacToeWinner[2]++;
						ticTacToeWinner[5]++;
						ticTacToeWinner[6]++;
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
						ticTacToeWinner[0]--;
						ticTacToeWinner[3]--;
						ticTacToeWinner[6]--;
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
						ticTacToeWinner[0]--;
						ticTacToeWinner[4]--;
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
						ticTacToeWinner[0]--;
						ticTacToeWinner[5]--;
						ticTacToeWinner[7]--;
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
						ticTacToeWinner[1]--;
						ticTacToeWinner[3]--;
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
						ticTacToeWinner[1]--;
						ticTacToeWinner[4]--;
						ticTacToeWinner[6]--;
						ticTacToeWinner[7]--;
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
						ticTacToeWinner[1]--;
						ticTacToeWinner[5]--;
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
						ticTacToeWinner[2]--;
						ticTacToeWinner[3]--;
						ticTacToeWinner[7]--;
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
						ticTacToeWinner[2]--;
						ticTacToeWinner[4]--;
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
						ticTacToeWinner[2]--;
						ticTacToeWinner[5]--;
						ticTacToeWinner[6]--;
						playerOne = true;
					}
					else
					{
						cout << "\nThat space is already taken!" << endl;
						cout << "Please choose a different space." << endl;
					}
				}
			}
		}
		// Printing the board again
		cout << endl;
		cout << " " << ticTacToeBoard[0] << " | " << ticTacToeBoard[3] << " | " << ticTacToeBoard[6] << " " << endl;
		cout << "-----------" << endl;
		cout << " " << ticTacToeBoard[1] << " | " << ticTacToeBoard[4] << " | " << ticTacToeBoard[7] << " " << endl;
		cout << "-----------" << endl;
		cout << " " << ticTacToeBoard[2] << " | " << ticTacToeBoard[5] << " | " << ticTacToeBoard[8] << " " << endl;
		cout << endl;

		// loop to check for a tie
		for (int i = 0; i < 9; i++)
		{
			if(ticTacToeBoard[i] != ' ')
			{
				tieGame++;
			}
		}

		// loop to check for a winner
		for(int i = 0; i < 8; i++)
		{
			if(ticTacToeWinner[i] == 3)
			{
				winner++;
			}

			if (ticTacToeWinner[i] == -3)
			{
				winner--;
			}
		}

		if(tieGame == 9)
		{
			cout << "*** It's a tie! ***" << endl;
			cout << "Did you know that a tied Tic-Tac-Toe game is sometimes calle a cat's game?" << endl;
			cout << "Here's a cat for you, as a consolation prize for neither of you winning!" << endl;
			cout << "=^.^=" << endl;
			isTTTRunning = false;
		}
		else if(winner == 1)
		{
			cout << "*** Player 1 wins! ***" << endl;
			isTTTRunning = false;
		}
		else if(winner == -1)
		{
			cout << "*** Player 2 wins! ***" << endl;
			isTTTRunning = false;
		}
	}
	cout << "\nThanks for playing!" << endl;
	return 0;
}