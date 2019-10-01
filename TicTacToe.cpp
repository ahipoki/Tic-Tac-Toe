#include <iostream>
#include <cstring>

using namespace std;

//bool checkWin(char player, char board[3][3]) {//Method to check for wins
//for (int i = 0; i < 3; i++) {
//if (board[0][0] == player && board[0][1] == player && board[0][2] == player) {
//return true;
//}
//}
//}

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
  //bool xMove = true;
  //X's move
  //bool oMove = false;
  //O's move
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
    }
  }
  //cout << "Enter a move" << endl;
  //Ask user for their move
  //User enters a move
  //Check to see if move is legal
  //If legal, enter the move
  //Start with X
  //After each move, check for wins and ties
  //If there's a win, reset the board and show # of wins
  //Redraw the board
}
