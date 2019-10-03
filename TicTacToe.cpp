#include <iostream>
#include <cstring>

using namespace std;

void printBoard() {
  int board[3][3];
  int BLANK = 0;
  int X_MOVE = 1;
  int O_MOVE = 2;
  //(int)playerMove[0] - 97; row
  //(int)playerMove[0] - 49; column
  cout << "\t1\t2\t3";
  //for (int row = 0; row < 3; row++) {
    //char output = 'a' + row + "\t";
    //for (int column = 0; column < 3; column++) {
    //if (board[row][column] == BLANK) {
    //output += "\t"; 
    //}
    //else if (board[row][column] == X_MOVE) {
    //output += "X\t"; 
    //}
    //else if (board[row][column] == O_MOVE) {
    //output += "O\t";
    //}
    //}
    //cout << output << endl;
  //}
}

bool checkWin(int player) {
  int board[3][3];
  int BLANK = 0;
  int X_MOVE = 1;
  int O_MOVE = 2;
  char input = 0;
  int X_WIN = 0;
  int O_WIN = 0;
  if (board[0][0] == X_MOVE && board[0][1] == X_MOVE && board[0][2] == X_MOVE) {
    printBoard();
    cout << "X Wins!" << endl;
    X_WIN += 1;
    cout << "Number of times X won: " << X_WIN << endl;
    cout << "Number of times O won: " << O_WIN << endl;
    cout << "Play Again? (y/n)" << endl;
    cin >> input;
    if (input == 'y') {
      return false;
    }
    else if (input == 'n') {
      return true;
    }
  }
  else if (board[0][0] == O_MOVE && board[0][1] == O_MOVE && board[0][2] == O_MOVE) {
    printBoard();
    cout << "O Wins!" << endl;
    O_WIN++;
    cout << "Number of times X won: " << X_WIN << endl;
    cout << "Number of times O won: " << O_WIN << endl;
    cout << "Play Again? (y/n)" << endl;
    cin >> input;
    if (input == 'y') {
      return false;
    }
    else if (input == 'n') {
      return true;   
    }
  }
  return false;
}

bool checkTie() {
  int board[3][3];
  int BLANK = 0;
  if (board[0][0] == BLANK && board[0][1] == BLANK && board[0][2] == BLANK && board[1][0] == BLANK && board[1][1] == BLANK && board[1][2] == BLANK && board[2][0] == BLANK && board[2][1] == BLANK && board[2][2] == BLANK) {
    return false;
  }
  return true;
}

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
  char input[2];
  int inputlen = strlen(input);
  bool stillPlaying = true;
  while (stillPlaying == true) {
    while (checkWin(X_MOVE) == false && checkWin(O_MOVE) == false && checkTie() == false) {
      printBoard();
      cin >> input;
      if (inputlen != 2) {
	cout << "Enter a letter followed by a number" << endl;
      }
      if (input[0] != 'a' && input[0] != 'b' && input[0] != 'c') {
	cout << "Row must be an a, b, or c" << endl;
      }
      else if (input[1] != '1' && input[1] != '2' && input[1] != '3') {
	cout << "Column must be a 1, 2, or 3" << endl;
      }
      else {
	if (input[0] = 'a')
	{
	  if (input[1] = '1')
	  {
	    if (board[0][0] == BLANK)
	    {
	      if (turn == X_TURN)
	      {
		board[0][0] = X_MOVE;
		turn = O_TURN;
	      }
	      else
	      {
		board[0][0] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else
	    {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	  else if (input[1] = '2')
	  {
	    if (board[0][1] == BLANK)
	    {
	      if (turn == X_TURN)
	      {
		board[0][1] = X_MOVE;
		turn = O_TURN;
	      }
	      else
	      {
		board[0][1] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else
	    {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	  else if (input[1] = '3') {
	    if (board[0][2] == BLANK) {
	      if (turn == X_TURN) {
		board[0][2] = X_MOVE;
		turn = O_TURN;
	      }
	      else {
		board[0][2] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	}
	else if (input[0] = 'b') {
	  if (input[1] = '1') {
	    if (board[1][0] == BLANK) {
	      if (turn == X_TURN) {
		board[1][0] = X_MOVE;
		turn = O_TURN;
	      }
	      else {
		board[1][0] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	  else if (input[1] = '2') {
	    if (board[1][1] == BLANK) {
	      if (turn == X_TURN) {
		board[1][1] = X_MOVE;
		turn = O_TURN;
	      }
	      else {
		board[1][1] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	  else if (input[1] = '3') {
	    if (board[1][2] == BLANK) {
	      if (turn == X_TURN) {
		board[1][2] = X_MOVE;
		turn = O_TURN;
	      }
	      else {
		board[1][2] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	}
	else if (input[0] = 'c') {
	  if (input[1] = '1') {
	    if (board[2][0] == BLANK) {
	      if (turn == X_TURN) {
		board[2][0] = X_MOVE;
		turn = O_TURN;
	      }
	      else {
		board[2][0] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	  else if (input[1] = '2') {
	    if (board[2][1] == BLANK) {
	      if (turn == X_TURN) {
		board[2][1] = X_MOVE;
		turn = O_TURN;
	      }
	      else {
		board[2][1] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	  else if (input[1] = '3') {
	    if (board[2][2] == BLANK) {
	      if (turn == X_TURN) {
		board[2][2] = X_MOVE;
		turn = O_TURN;
	      }
	      else {
		board[2][2] = O_MOVE;
		turn = X_MOVE;
	      }
	    }
	    else {
	      cout << "There is already a piece there!" << endl;
	    }
	  }
	}
      }
    }
  }
}
