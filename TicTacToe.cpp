#include <iostream>
#include <cstring>

using namespace std;

void printBoard() {//Printing the board
  int board[3][3];
  int BLANK = 0;
  int X_MOVE = 1;
  int O_MOVE = 2;
  //Set up the 3x3 board
  cout << "\t1\t2\t3";
  //Print out the board
  cout << "a" << endl;
  cout << " " << endl;
  cout << "b" << endl;
  cout << " " << endl;
  cout << "c" << endl;
  for (int i = 0; i < 3; i++)
  {//For the length of the board
    for (int j = 0; j < 3; j++)
    {//For the width of the board
      if (board[i][j] == X_MOVE)
      {//If the spot is an X
        cout << "X" << endl;
	//Print out an X
      }
      else if (board[i][j] == O_MOVE)
      {//If the spot is an O
	cout << "O" << endl;
	//Print out an O
      }
      else if (board[i][j] == BLANK)
      {//If the spot is blank
	cout << " " << endl;
	//Print out a blank spot
      }
    }
  }
  //std::cout   << std::endl
                //<< board[0][0] << " │ " << board[0][1] << " │ " << board[0][2]
                //<< "\n──┼───┼──\n"
                //<< board[1][0] << " │ " << board[1][1] << " │ " << board[1][2]
                //<< "\n──┼───┼──\n"
                //<< board[2][0] << " │ " << board[2][1] << " │ " << board[2][2]
                //<< std::endl;
}

bool checkWin(int player) {//Checking for wins
  int board[3][3];
  //Board
  int BLANK = 0;
  //Blanks
  int X_MOVE = 1;
  //X's
  int O_MOVE = 2;
  //O's
  char input = 0;
  //Input
  int X_WIN = 0;
  //# of X wins
  int O_WIN = 0;
  //# of O wins
  if (board[0][0] == X_MOVE && board[0][1] == X_MOVE && board[0][2] == X_MOVE) {//Win Con
    printBoard();
    //Print out the board
    cout << "X Wins!" << endl;
    //Print out that X won
    X_WIN += 1;
    //Add 1 to X wins
    cout << "Number of times X won: " << X_WIN << endl;
    //Print out how many times X won
    cout << "Number of times O won: " << O_WIN << endl;
    //Print out how many times O won
    cout << "Play Again? (y/n)" << endl;
    //Ask the users if they want to play again
    cin >> input;
    //Take in their input
    if (input == 'y') {//If they answer yes
      return false;
      //Return false
    }
    else if (input == 'n') {//If they answer no
      return true;
      //Return true
    }
  }
  else if (board[0][0] == O_MOVE && board[0][1] == O_MOVE && board[0][2] == O_MOVE) {//Win Con
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

bool checkTie() {//Check for ties
  int board[3][3];
  int BLANK = 0;
  //Blanks
  if (board[0][0] == BLANK || board[0][1] == BLANK || board[0][2] == BLANK || board[1][0] == BLANK || board[1][1] == BLANK || board[1][2] == BLANK || board[2][0] == BLANK || board[2][1] == BLANK || board[2][2] == BLANK) {//If there's any blank spots
    return false;
    //Return false
  }
  return true;
  //If there are no blanks, return true
}

void resetBoard() {//Resetting the board
  int board[3][3];
	//Board
  int BLANK = 0;
	//Blanks
  int X_MOVE = 1;
	//X moves
  int O_MOVE = 2;
	//O moves
  int BLANK_MOVE = 3;
	//Blank spots
  int X_TURN = 0;
	//X's turn
  int turn = X_TURN;
	//First turn is X's turn
  if (board[0][0] == X_MOVE && board[0][1] == X_MOVE && board[0][2] == X_MOVE)
  {//Check for win con
    board[0][0] = BLANK;
    board[0][1] = BLANK;
    board[0][2] = BLANK;
    board[1][0] = BLANK;
    board[1][1] = BLANK;
    board[1][2] = BLANK;
    board[2][0] = BLANK;
    board[2][1] = BLANK;
    board[2][2] = BLANK;
	  //Reset the board
    turn = X_TURN;
	  //Set it to X's turn
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
  bool checkWinX = false;
  bool checkWinO = false;
  bool checkTie = false;
  int board[3][3];
	//Board
  int xWins = 0;
  //# of X wins
  int oWins = 0;
  //# of O wins
  int BLANK = 0;
	//Blank spots
  int X_MOVE = 1;
	//X move
  int O_MOVE = 2;
	//O move
  int BLANK_MOVE = 3;
	//Blank spots
  int X_TURN = 0;
  int O_TURN = 1;
  int turn = X_TURN;
	//X's turn first
  char move[2];
	//Get user input for a move
  int movelen = strlen(move);
	//Get the length of the user's input
  bool stillPlaying = true;
  while (stillPlaying == true) {//While you're still playing
    while (checkWin(X_MOVE) == false && checkWin(O_MOVE) == false && checkTie() == false) {//While there isn't a win and there isn't a tie
      printBoard();
	    //Print out the board
      cin >> move;
	    //Take in the user's input for a move
      if (movelen != 2) {//If the input length is not 2
	cout << "Enter a letter followed by a number" << endl;
	      //Tell the user to input a letter followed by a number
      }
      if (move[0] != 'a' && move[0] != 'b' && move[0] != 'c') {//If the first spot of the input is not an a, b, or c
	cout << "Row must be an a, b, or c" << endl;
	      //Tell the user that the row must be an a, b, or c
      }
      else if (move[1] != '1' && move[1] != '2' && move[1] != '3') {//If the second spot of the input is not a 1, 2, or 3
	cout << "Column must be a 1, 2, or 3" << endl;
	      //Tell the user that the column must be a 1, 2, or 3
      }
      else {//If the input fits all the requirements
	if (move[0] = 'a')
	{//If the first spot in the input is an a
	  if (move[1] = '1')
	  {//If the second spot is a 1
	    if (board[0][0] != X_MOVE && board[0][0] != O_MOVE)
	    {//If the spot on the board is empty
	      if (turn == X_TURN)
	      {//If it's X's turn
		board[0][0] = X_MOVE;
		      //Set the spot to an X
		turn = O_TURN;
		      //It's now O's turn
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
	    if (board[0][1] != X_MOVE && board[0][1] != O_MOVE)
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
	    if (board[0][2] != X_MOVE && board[0][2] != O_MOVE) {
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
	    if (board[1][0] != X_MOVE && board[1][0] != O_MOVE) {
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
	    if (board[1][1] != X_MOVE && board[1][1] != O_MOVE) {
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
	    if (board[1][2] != X_MOVE && board[1][2] != O_MOVE) {
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
	    if (board[2][0] != X_MOVE && board[2][0] != O_MOVE) {
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
	    if (board[2][1] != X_MOVE && board[2][1] != O_MOVE) {
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
	    if (board[2][2] != X_MOVE && board[2][2] != O_MOVE) {
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
      if (board[0][0] == X_MOVE && board[0][1] == X_MOVE && board[0][2] == X_MOVE)
      {
	 checkWinX = true;     
      }
      else if (board[0][0] == O_MOVE && board[0][1] == O_MOVE && board[0][2] == O_MOVE)
      {
	 checkWinO = true;     
      }
      if (board[0][0] == BLANK && board[0][1] == BLANK && board[0][2] == BLANK && board[1][0] == BLANK && board[1][1] == BLANK && board[1][2] == BLANK && board[2][0] == BLANK && board[2][1] == BLANK && board[2][2] == BLANK)
      {
	 checkTie = true;     
      }
      else {
	 checkTie = false;     
      }
    }
  }
  printBoard();
}
