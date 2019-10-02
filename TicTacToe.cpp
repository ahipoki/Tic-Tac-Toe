#include <iostream>
#include <cstring>

using namespace std;

void resetBoard() {
  int board[3][3];
  int BLANK = 0;
  int X_MOVE = 1;
  int O_MOVE = 2;
  int BLANK_MOVE = 3;
  int X_TURN = 0;
  int turn = X_TURN;
  if (board[0][0] == X_MOVE && board[0][1] == X_MOVE && board[0][2] == X_MOVE) 
  {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[0][0] == O_MOVE && board[0][1] == O_MOVE && board[0][2] == O_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[1][0] == X_MOVE && board[1][1] == X_MOVE && board[1][2] == X_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[1][0] == O_MOVE && board[1][1] == O_MOVE && board[1][2] == O_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[2][0] == X_MOVE && board[2][1] == X_MOVE && board[2][2] == X_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[2][0] == O_MOVE && board[2][1] == O_MOVE && board[2][2] == O_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[0][0] == X_MOVE && board[1][1] == X_MOVE && board[2][2] == X_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[0][0] == O_MOVE && board[1][1] == O_MOVE && board[2][2] == O_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[2][0] == X_MOVE && board[1][1] == X_MOVE && board[0][2] == X_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
  else if (board[2][0] == O_MOVE && board[1][1] == O_MOVE && board[0][2] == O_MOVE) {
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
    turn = X_TURN;
  }
}

int main()
{
  int board[3][3];
  int xWins = 0;
  //# of X wins
  int oWins = 0;
  //# of O wins
  int BLANK = 0;
  int X_MOVE = 1;
  int O_MOVE = 2;
  int BLANK_MOVE = 3;
  int X_TURN = 0;
  int O_TURN = 1;
  int turn = X_TURN;
  char input = 0;
  boolean stillPlaying = true;
  while (stillPlaying == true) {
    while (checkWin(X_MOVE) == false && checkWin(O_MOVE) == false && checkTie() == false) {
      printBoard();
      cin >> input;
      if (strlen(input) != 2) {
	cout << "Enter a letter followed by a number" << endl;
      }
      else if (board[0] != 'a' && board[0] != 'b' && board[0] != 'c') {
	cout << "Row must be an a, b, or c" << endl;
      }
      else if (board[1] != '1' && board[1] != '2' && board[1] != '3') {
	cout << "Column must be a 1, 2, or 3" << endl;
      }
      else {
	int row = board[0] - 'a';
	int column = board[1] - '1';
	if (board[row][column] == BLANK) {
	  if (turn == X_TURN) {
	     board[row][column] = X_MOVE;
	     turn = O_TURN;
	  }
	  else {
	    board[row][column] = O_MOVE;
            turn = X_TURN;
	  }
	}
	else {
	  cout << "There is already a piece there!" << endl;
	}
      }
    }
    /*
    if (checkWin(X_MOVE) == true) {
    	printBoard();
	cout << "X Wins!" << endl;
	X_WIN += 1;
	cout << "Number of times X won: " << X_WIN << endl;
	cout << "Number of times O won: " << O_WIN << endl;
    }
    else if (checkWin(O_MOVE) == true) {
    	cout << "O Wins!" << endl;
	O_WIN += 1;
	cout << "Number of times X won: " << X_WIN << endl;
	cout << "Number of times O won: " << O_WIN << endl;
    }
    */
  }
}

void printBoard() {
   cout << "\t1\t2\t3");
}
