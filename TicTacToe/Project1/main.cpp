#include <iostream>
using namespace std;

//class Board
//{
//private:
//	const int height;
//	const int width;
//	const int winLine;
//
//public:
//	Board(int h, int w, int l) : height(h), width(w), winLine(l)
//	{
//	}
//
//	void Print()
//	{
//		for (int i = 0; i < height; ++i)
//		{
//			cout << ('|');
//			for (int j = 0; j < width; ++j)
//			{
//				//Printejar Cell
//				cout << ('|');
//			}
//		}
//	}
//
//	int CheckSolution(){
//	if(true)
//		return 0;
//	else
//		return 1;
//	}
//};
//
//class Cell
//{
//private:
//	char value;
//
//public:
//	Cell()
//	{
//		value = 'U';
//	}
//};
void PrintBoard(char matrix[][3]);
void Place(int& pos, int& player, char matrix[][3]);
bool CheckWin(int& player, char matrix[][3]);

int main()
{
	cout << " --- Start TicTacToe game --- " << endl;
	char board[3][3];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			board[i][j] = '?';
		}
	}

	PrintBoard(board);

	int i = 0;
	int player = 1;
	bool win = false;
	while (true)
	{
		if (i % 2)
			player = 2;
		else
			player = 1;

		int position = 0;
		while (position < 1 || position > 9)
		{
			cout << "Player " << player << " place an X in a square 1 - 9:" << '\t';
			cin >> position;
			cout << endl;

			if (position < 1 || position > 9)
			{
				cout << "Wrong position, try again!" << endl;
			}
		}

		Place(position, player, board);
		PrintBoard(board);
		win = CheckWin(player, board);

		if (win)
			break;
		i++;
	}
}
bool CheckWin(int& player, char matrix[][3]) {
	char letter;
	if (player % 2)
		letter = 'X';
	else
		letter = 'O';

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			char value = matrix[i][j];
			if (value == letter)
			{

			}
		}
	}

	return false;
}

void CheckNext()
{

}

void Place(int& pos, int& player, char matrix[][3])
{
	char letter;
	if (player % 2)
		letter = 'X';
	else
		letter = 'O';
	int i = (pos - 1) / 3;
	int j = (pos - 1) % 3;
	matrix[i][j] = letter;
}

void PrintBoard(char matrix[][3])
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << "[";
			cout << matrix[i][j];
			cout << "]";
			cout << '\t';
		}
		cout << endl;
		cout << endl;
	}
}