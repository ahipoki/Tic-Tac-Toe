#include <iostream>
#include <cstring>

using namespace std;
/*
  Finn McKinley
  10/10/19
  A Tic Tac Toe game
 */
int main()
{
  bool checkWin = false;
  //Checking for wins
  bool checkTie = false;
  //Checking for ties
  char board[3][3] = {0};
  //Board
  int xWins = 0;
  //# of X wins
  int oWins = 0;
  //# of O wins
  int BLANK = 0;
  //Blank spots
  char X_MOVE = 'X';
  //X move
  char O_MOVE = 'O';
  //O move
  int BLANK_MOVE = 3;
  //Blank spots
  int turn = 1;
  //X's turn first 0 for x and 1 for o
  char move[2];
  //2 char long input for the user's move
  char playAgain = 0;
  //Get user input for if they want to play again
  bool stillPlaying = true;
  //Check if they're still playing
  while (stillPlaying == true)
  {//While you're still playing
    while (checkWin == false && checkTie == false)
    {//While there isn't a win and there isn't a tie
      cout << "\t1\t2\t3" << endl;
      cout << "a" << "\t" << board[0][0] << "\t" << board[0][1] << "\t" << board[0][2] << endl;
      cout << " " << endl;
      cout << "b" << "\t" << board[1][0] << "\t" << board[1][1] << "\t" << board[1][2] << endl;
      cout << " " << endl;
      cout << "c" << "\t" << board[2][0] << "\t" << board[2][1] << "\t" << board[2][2] << endl;
      //Print out the board
      cout << "Enter your move" << endl;
      //Ask for a move
      cin >> move;
      //Take in the user's input for a move
      if (move[0] != 'a' && move[0] != 'b' && move[0] != 'c') 
      {//If the first spot of the input is not an a, b, or c
	cout << "Row must be an a, b, or c" << endl;
	//Tell the user that the row must be an a, b, or c
      }
      else if (move[1] != '1' && move[1] != '2' && move[1] != '3') 
      {//If the second spot of the input is not a 1, 2, or 3
	cout << "Column must be a 1, 2, or 3" << endl;
	//Tell the user that the column must be a 1, 2, or 3
      }
      else 
      {//If the input fits all the requirements
	if (move[0] == 'a' && move[1] == '1')
	{//If the input is a1
	  if (turn == 0)
	  {//If it's X's turn
	    board[0][0] = 'X';
	    turn = 1;
	  }
	  else
	  {//If it's O's turn
            board[0][0] = 'O';
            turn = 0;
          }
	}
	else if (move[0] == 'a' && move[1] == '2')
	  {//If the input is a2
	    if (turn == 0)
	    {//If it's X's turn
	      board[0][1] = 'X';
	      turn = 1;
	    }
	    else
	    {//If it's O's turn
	      board[0][1] = 'O';
	      turn = 0;
	    }
        }
        else if (move[0] == 'a' && move[1] == '3')
        {//If the input is a3
	  if (turn == 0)
          {//If it's X's turn
	    board[0][2] = 'X';
	    turn = 1;
	  }
	  else if (turn == 1)
	  {//If it's O's turn
	    board[0][2] = 'O';
	    turn = 0;
	  }
	}
	else if (move[0] == 'b' && move[1] == '1')
	{//If the input is b1
	  if (turn == 0)
	  {//If it's X's turn
	    board[1][0] = 'X';
	    turn = 1;
	  }
	  else if (turn == 1)
	  {//If it's O's turn
	    board[1][0] = 'O';
	    turn = 0;
          }
	}
	else if (move[0] == 'b' && move[1] == '2')
	{//If the input is b2
	  if (turn == 0)
	  {//If it's X's turn
	    board[1][1] = 'X';
	    turn = 1;
	  }
	  else if (turn == 1)
	  {//If it's O's turn
	    board[1][1] = 'O';
	    turn = 1;
	  }
	}
	else if (move[0] == 'b' && move[1] == '3')
	{//If the input is b3
	  if (turn == 0)
	  {//If it's X's turn
	    board[1][2] = 'X';
	    turn = 1;
	  }
	  else if (turn == 1)
	  {//If it's O's turn
	    board[1][2] = 'O';
	    turn = 0;
	  }
	}
	else if (move[0] == 'c' && move[1] == '1')
	{//If the input is c1
	  if (turn == 0)
	  {//If it's X's turn
	    board[2][0] = 'X';
	    turn = 1;
	  }
	  else if (turn == 1)
	  {//If it's O's turn
	    board[2][0] = 'O';
	    turn = 0;
	  }
        }
        else if (move[0] == 'c' && move[1] == '2')
	{//If the input is c2
	  if (turn == 0)
	  {//If it's X's turn
	    board[2][1] = 'X';
	    turn = 1;
	  }
	  else if (turn == 1)
	  {//If it's O's turn
	    board[2][1] = 'O';
	    turn = 0;
	  }
        }
        else if (move[0] == 'c' && move[1] == '3')
        {//If the input is c3
	  if (turn == 0)
	  {//If it's X's turn
	    board[2][2] = 'X';
	    turn = 1;
	  }
	  else if (turn == 1)
          {//If it's O's turn
            board[2][2] = 'O';
            turn = 0;
          }
        }
      }
      if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
      { // x x x
	// - - -
	// - - -
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
	turn = 0;
	//Set it to X's turn
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	//Tell the user that X won
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//Show how many times each player won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask if they want to play again
	cin >> playAgain;
	//Get their answer
	if (playAgain == 'y')
	{//If they say yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
	{//If they say no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}
      }
      else if (board[0][0] == O_MOVE && board[0][1] == O_MOVE && board[0][2] == O_MOVE)
      { // o o o
	// - - -
	// - - -
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}
      }
      else if (board[1][0] == X_MOVE && board[1][1] == X_MOVE && board[1][2] == X_MOVE)
      { // - - -
	// x x x
	// - - -
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
	turn = 0;
	//X's turn
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset the board
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}
      }
      else if (board[1][0] == O_MOVE && board[1][1] == O_MOVE && board[1][2] == X_MOVE)
      { // - - -
	// o o o
	// - - -
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}
      }
      else if (board[2][0] == X_MOVE && board[2][1] == X_MOVE && board[2][2] == X_MOVE)
      { // - - -
	// - - -
	// x x x
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
	turn = 0;
	//X's turn
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}     
      }
      else if (board[2][0] == O_MOVE && board[2][1] == O_MOVE && board[2][2] == O_MOVE)
      { // - - -
	// - - -
	// o o o
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][0] == X_MOVE && board[1][0] == X_MOVE && board[2][0] == X_MOVE)
      { // x - -
	// x - -
	// x - -
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
	turn = 0;
	//X's turn
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][0] == O_MOVE && board[1][0] == O_MOVE && board[2][0] == O_MOVE)
      { // o - -
	// o - -
	// o - -
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][1] == X_MOVE && board[1][1] == X_MOVE && board[2][1] == X_MOVE)
      { // - x -
	// - x -
	// - x -
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
	turn = 0;
	//X's turn
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset the board
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][1] == O_MOVE && board[1][1] == O_MOVE && board[2][1] == O_MOVE)
      { // - o -
	// - o -
	// - o -
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset the game
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][2] == X_MOVE && board[1][2] == X_MOVE && board[2][2] == X_MOVE)
      { // - - x
	// - - x
	// - - x
	board[0][0] = BLANK;
	board[0][1] = BLANK;
	board[0][2] = BLANK;
	board[1][0] = BLANK;
	board[1][1] = BLANK;
	board[1][2] = BLANK;
	board[2][0] = BLANK;
	board[2][1] = BLANK;
	board[2][2] = BLANK;
	turn = 0;
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset the game
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][2] == O_MOVE && board[1][2] == O_MOVE && board[2][2] == O_MOVE)
      { // - - o
	// - - o
	// - - o
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset the game
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][0] == X_MOVE && board[1][1] == X_MOVE && board[2][2] == X_MOVE)
      { // x - -
	// - x -
	// - - x
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
	turn = 0;
	//X's turn
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player's won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][0] == O_MOVE && board[1][1] == O_MOVE && board[2][2] == O_MOVE)
      { // o - -
	// - o -
	// - - o
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player has won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][2] == X_MOVE && board[1][1] == X_MOVE && board[2][0] == X_MOVE)
      { // - - x
	// - x -
	// x - -
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
	turn = 0;
	//X's turn
	xWins++;
	//Add 1 to X's wins
	cout << "X Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask if they want to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      else if (board[0][2] == O_MOVE && board[1][1] == O_MOVE && board[2][0] == O_MOVE)
      { // - - o
	// - o -
	// o - -
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
	turn = 0;
	//X's turn
	oWins++;
	//Add 1 to O's wins
	cout << "O Wins!" << endl;
	cout << "X has won: " << xWins << " times" << endl;
	cout << "O has won: " << oWins << " times" << endl;
	//How many times each player won
	cout << "Do you want to play again? (y/n)" << endl;
	//Ask if they want to play again
	cin >> playAgain;
	if (playAgain == 'y')
        {//If yes
	  checkWin = false;
	  //Reset everything
	}
	else if (playAgain == 'n')
        {//If no
	  checkWin = true;
	  stillPlaying = false;
	  //End the game
	}      
      }
      if ((board[0][0] == X_MOVE || board[0][0] == O_MOVE) && (board[0][1] == X_MOVE || board[0][1] == O_MOVE) && (board[0][2] == X_MOVE || board[0][2] == O_MOVE) && (board[1][0] == X_MOVE || board[1][0] == O_MOVE) && (board[1][1] == X_MOVE || board[1][1] == O_MOVE) && (board[1][2] == X_MOVE || board[1][2] == O_MOVE) && (board[2][0] == X_MOVE || board[2][0] == O_MOVE) && (board[2][1] == X_MOVE || board[2][1] == O_MOVE) && (board[2][2] == X_MOVE || board[2][2] == O_MOVE))
	{//If there are no blanks and no wins it's a tie
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
        turn = 0;
	//X's turn
	cout << "You tied!" << endl;
	//Tell the user they tied
	cout << "X has won: " << xWins << " times" << endl;
	//Tell the user how many times X won
	cout << "O has won: " << oWins << " times" << endl;
	//Tell the user how many times O won
        cout << "Do you want to play again? (y/n)" << endl;
	//Ask the user if they want to play again
        cin >> playAgain;
        if (playAgain == 'y')
        {//If they say yes
	  checkTie = false;
	  //Reset everything
        }
        else if (playAgain == 'n')
	{//If they say no
	  checkTie = true;
	  stillPlaying = false;
	  //End the program
        }
      }
    }
  }
}
