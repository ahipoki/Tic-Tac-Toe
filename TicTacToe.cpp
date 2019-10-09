#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  bool checkWinX = false;
  bool checkWinO = false;
  bool checkTie = false;
  int board[3][3] = {0};
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
  char playAgain = 0;
  //Get user input for a move
  int movelen = strlen(move);
  //Get the length of the user's input
  bool stillPlaying = true;
  while (stillPlaying == true) {//While you're still playing
    while (checkWinX == false && checkWinO == false && checkTie == false) {//While there isn't a win and there isn't a tie
      cout << "\t1\t2\t3" << endl;
      cout << "a" << "\t" << board[0][0] << "\t" << board[0][1] << "\t" << board[0][2] << endl;
      cout << " " << endl;
      cout << "b" << "\t" << board[1][0] << "\t" << board[1][1] << "\t" << board[1][2] << endl;
      cout << " " << endl;
      cout << "c" << "\t" << board[2][0] << "\t" << board[2][1] << "\t" << board[2][2] << endl;
      //Print out the board
      cout << "Enter your move" << endl;
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
	if (move[0] == 'a' && move[1] == '1' && board[0][0] != X_MOVE && board[0][0] != O_MOVE)
	{//If the first spot in the input is an a
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
	    turn = X_TURN;
	  }
	}
	else if (move[0] == 'a' && move[1] == '2' && board[0][1] != X_MOVE && board[0][1] != O_MOVE)
	{
	  if (turn == X_TURN)
	  {
	    board[0][1] = X_MOVE;
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	  {
	    board[0][1] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
        else if (move[0] == 'a' && move[1] == '3' && board[0][2] != X_MOVE && board[0][2] != O_MOVE)
	{
	  if (turn == X_TURN)
	  {
	    board[0][2] = X_MOVE;
	    cout << "X";
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	  {
	    board[0][2] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
	else if (move[0] == 'b' && move[1] == '1' && board[1][0] != X_MOVE && board[1][0] != O_MOVE)
	{
	  if (turn == X_TURN)
	    {//15.1851852
	    board[1][0] = X_MOVE;
	    cout << "X";
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	    {//735
	    board[1][0] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
	else if (move[0] == 'b' && move[1] == '2' && board[1][1] != X_MOVE && board[1][1] != O_MOVE)
	{
	  if (turn == X_TURN)
	  {
	    board[1][1] = X_MOVE;
	    cout << "X";
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	  {
	    board[1][1] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
	else if (move[0] == 'b' && move[1] == '3' && board[1][2] != X_MOVE && board[1][2] != O_MOVE)
	{
	  if (turn == X_TURN) {
	    board[1][2] = X_MOVE;
	    cout << "X";
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	  {
	    board[1][2] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
	else if (move[0] == 'c' && move[1] == '1' && board[2][0] != X_MOVE && board[2][0] != O_MOVE)
	{
	  if (turn == X_TURN)
	  {
	    board[2][0] = X_MOVE;
	    cout << "X";
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	  {
	    board[2][0] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
        else if (move[0] == 'c' && move[1] == '2' && board[2][1] != X_MOVE && board[2][1] != O_MOVE)
	{
	  if (turn == X_TURN)
	  {
	    board[2][1] = X_MOVE;
	    cout << "X";
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	  {
	    board[2][1] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
	else if (move[0] == 'c' && move[1] == '3' && board[2][2] != X_MOVE && board[2][2] != O_MOVE)
	{
	  if (turn == X_TURN)
	  {
	    board[2][2] = X_MOVE;
	    cout << "X";
	    turn = O_TURN;
	  }
	  else if (turn == O_TURN)
	  {
	    board[2][2] = O_MOVE;
	    cout << "O";
	    turn = X_TURN;
	  }
	}
      }
      if (board[0][0] == X_MOVE && board[0][1] == X_MOVE && board[0][2] == X_MOVE)
      {
	board[0][0] = BLANK;
	board[0][1] = BLANK;
	board[0][2] = BLANK;
	board[1][0] = BLANK;
	turn = X_TURN;
	cout << "Do you want to play again? (y/n)" << endl;
	cin >> playAgain;
	if (playAgain = 'y')
	{
	  checkWinX = false;
	}
	else
	{
	  checkWinX = true;
	}
      }
      else if (board[0][0] == O_MOVE && board[0][1] == O_MOVE && board[0][2] == O_MOVE)
      {
	board[0][0] = BLANK;
	cout << "If 
	checkWinO = true;     
      }
      else if (board[1][0] == X_MOVE && board[1][1] == X_MOVE && board[1][2] == X_MOVE)
      {
	resetBoard();
	checkWinX = true;
      }
      else if (board[1][0] == O_MOVE && board[1][1] == O_MOVE && board[1][2] == X_MOVE)
      {
	resetBoard();
	checkWinO = true;
      }
      if (board[0][0] == BLANK && board[0][1] == BLANK && board[0][2] == BLANK && board[1][0] == BLANK && board[1][1] == BLANK && board[1][2] == BLANK && board[2][0] == BLANK && board[2][1] == BLANK && board[2][2] == BLANK)
      {
	resetBoard();
	checkTie = true;     
      }
      else {
	 checkTie = false;     
      }
    }
  }
}
