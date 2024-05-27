#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';
char PLAYER1;
char PLAYER2;
char player1Name[25], player2Name[25];
int chooseLevel, chooseCategory;

void resetBoard();
void printBoard();
int checkFreeSpaces();
void player1Move();
void player2Move();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char winner);
void singlePlayer();
void multiPlayer();
void winnerFrom2(char humanWinner);
int problem();
void play();
void level();
void category();
void ticabout();
void ticTitle();

void ticTitle()
{
    printf("\t\t ||||||||||||||  ||||  ||||||||||       ||||||||||||||  |||||||||||||  ||||||||||       |||||||||||||| ||||||||||||  |||||||||\n");
    printf("\t\t      ||||       ||||  ||||                  ||||       ||||     ||||  ||||                  ||||      ||||    ||||  ||||     \n");
    printf("\t\t      ||||       ||||  ||||                  ||||       ||||     ||||  ||||                  ||||      ||||    ||||  ||||     \n");
    printf("\t\t      ||||       ||||  ||||       _____      ||||       ||||_____||||  ||||       _____      ||||      ||||    ||||  |||||||||\n");
    printf("\t\t      ||||       ||||  ||||                  ||||       |||||||||||||  ||||                  ||||      ||||    ||||  ||||     \n");
    printf("\t\t      ||||       ||||  ||||                  ||||       ||||     ||||  ||||                  ||||      ||||    ||||  ||||     \n");
    printf("\t\t      ||||       ||||  ||||||||||            ||||       ||||     ||||  ||||||||||            ||||      ||||||||||||  |||||||||\n");
}

int Tictactoe()
{
	system("cls");
    int choice;
 	printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
    printf("\n\n");
    printf("\n\n");
    ticTitle();
    printf("\n\n");
	printf("\n\t\t\t--------------------------------------------- TIC-TAC-TOE MENU ---------------------------------------------------");
	printf("\n\n");
	printf("\n\n");
    printf("\n\t\t\t  1.PLAY\n\t\t\t  2.ABOUT\n\t\t\t  3.QUIT\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tEnter your choice, Mr.player: ");
	 scanf("%d", &choice);
    fgetc(stdin);

    switch (choice)
    {
    case 1:
        play();
        break;

    case 2:
        ticabout();
        Tictactoe();
        break;

    case 3:
    	system("cls");
    	menu();
        break;

    default:
        printf("\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t");
        printf("Invalid comand!");
        Sleep(1500);
        system("cls");
        Tictactoe();
    }

    return 0;
}

// about functon---------------------------------------------

void ticabout()
{
	system("cls");
	printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
	printf("\n\n");
    printf("\n\n");
    printf("\n\n");
    
	ticTitle();
    printf("\n\n");
	printf("\n\t\t\t--------------------------------------------- ABOUT SECTION ---------------------------------------------------");
	printf("\n\n");
    Sleep(1000);
    printf("\n\n");
    printf(" \t\t     About the game:::                              \n");
    printf(" \t\t=====================================================================================================================================\n");
    printf(" \t\t|  -The goal of the game is for players to position their marks so that they make a continuous line of three cells vertically,      |\n");
    printf(" \t\t|   horizontally, or diagonally.                                                                                                    |\n");
    printf(" \t\t|  -The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row is the winner,               |\n");
    printf(" \t\t|  -TicTacToe can be played both single and multi Player, In single Player you play with Computer and in multi Player,              |\n");
    printf(" \t\t|   Player needs a partner to play,                                                                                                 |\n");
    printf(" \t\t|  -In multi Player, the Player's have to solve mathematical problems to make a move,                                               |\n");
    printf(" \t\t|  -For every wrong answer, If player answer is wrong then individual have to skip a particular problem move,                       |\n");
    printf(" \t\t=====================================================================================================================================\n");
    printf("\n");
    printf("\n");
    Sleep(500);
    printf(" \t\t How to play:::\n");
    printf(" \t\t====================================================================================\n");
    printf(" \t\t| -> Select to play with computer or human,                                        |\n");
    printf(" \t\t| -> While playing with computer if player succeeds in placing three of their      |\n");
    printf(" \t\t|    marks a horizontal, vertical, or diagonal row the players win,                |\n");
    printf(" \t\t| -> While playing with human, Enter your names(Optional),                         |\n");
    printf(" \t\t| -> Choose category Addition,Subtraction or Multiplication,                       |\n");
    printf(" \t\t| -> Choose Level Easy, Medium or Hard,                                            |\n");
    printf(" \t\t| -> Choose your sign i.e 'X' || 'O',                                              |\n");
    printf(" \t\t| -> Solve the given problem to make your, if answer is wrong you would have to    |\n");
    printf(" \t\t|    skip the move.                                                                |\n");
    printf(" \t\t| -> ENJOY PLAYING!                                                                |\n");
    printf(" \t\t====================================================================================\n");
    Sleep(500);
    printf("\n");
    printf("\n");
    printf(" \t\t Rules for the game:::                               \n");
    printf(" \t\t======================================================================\n");
    printf(" \t\t|  <1> You cannot redo your move,                                    |\n");
    printf(" \t\t|  <2> While entring name only enter first name,                     |\n");
    printf(" \t\t|  <3> Under division category only enter your answer before decimal,|\n");
    printf(" \t\t|  <4> player can't make a move if they couldn't solve the problem,  |\n");
    printf(" \t\t|  <5> Player are not expected to quit the running game.             |\n");
    printf(" \t\t======================================================================");
    printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
    getch();
    printf("\n\n");
}

// play function--------------------------------------------------------------------
void play()
{
    system("cls");
    printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
    int playChoice;
    printf("\n\n");
    printf("\n\n");
    
	ticTitle();
    printf("\n\n");
	printf("\n\t\t\t    ------------------------------------------------ MODES ---------------------------------------------------");
	printf("\n\n");
    printf("\n\n");
    printf("\n\t\t\t  1.COMPUTER\n\t\t\t  2.HUMAN\n\t\t\t  3.BACK\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t\tWhom do you want to play with ... : ");
    

    scanf("%d", &playChoice);
    fgetc(stdin);

    switch (playChoice)
    {
    case 1:
        singlePlayer();
        break;

    case 2:
        multiPlayer();
        break;
    case 3:
        Tictactoe();
        break;

    default:
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t");
        printf("Invalid command!");
        Sleep(1000);
        system("cls");
        play();
    }
}

void level()
{

    system("cls");
    printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
   	printf("\n\n\n\n");
   	printf("\t\t\t---------------------------------------------- LEVELS --------------------------------------------------------");
 	printf("\n");
    printf("\n");
    printf("\n\n");
    printf("\t\t\t  1.Easy");
    printf("\n");
    printf("\t\t\t  2.Medium");
    printf("\n");
    printf("\t\t\t  3.Hard");
    printf("\n");
    printf("\t\t\t  4.Back");
    printf("\n");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t  Enter your choice ... :");
    scanf("%d", &chooseLevel);
    fgetc(stdin);

    switch (chooseLevel)
    {
    case 1:
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        category();
        break;

    default:
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t");
        printf("Invalid command!");
        Sleep(1000);
        system("cls");
        level();
    }
}

// to choose the category of the game-------------------------------------------------------------
void category()
{
    system("cls");
    printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
   	printf("\n\n\n\n");
   	printf("\t\t\t---------------------------------------------- CATAGORIES --------------------------------------------------------");
 	printf("\n");
    printf("\n");
    printf("\t\t\t  1.Addition");
    printf("\n");
    printf("\t\t\t  2.Subtraction");
    printf("\n");
    printf("\t\t\t  3.Multiplication");
    printf("\n");
    printf("\t\t\t  4.Division");
    printf("\n");
    printf("\t\t\t  5.Back");
    printf("\n");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t  Enter your choice ... :");
    scanf("%d", &chooseCategory);
    fgetc(stdin);
    switch (chooseCategory)
    {
    case 1:

        level();
        break;

    case 2:
        level();
        break;

    case 3:
        level();
        break;

    case 4:
        level();
        break;

    case 5:
        play();
        break;

    default:
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t");
        printf("Invalid command!");
        Sleep(1000);
        system("cls");
        category();
    }
}

// single user human and computer-------------------------------------------------------------------------------------------------------------
void singlePlayer()
{
    char winner = ' ';
    char response;
    do
    {
        if (response == 'Y')
        {
            system("cls");
            singlePlayer();
        }
        winner = ' ';
        response = ' ';
        resetBoard();

        while (winner == ' ' && checkFreeSpaces() != 0)
        {
            system("cls");
            printBoard();

            playerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }

            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }
        }
        system("cls");
      
        printBoard();
        printWinner(winner);
        printf("\n\n\n");
        printf("\t\t\t\t\t\t\t     Would you like to play again? (Y/N):");
        scanf(" %c", &response);
        response = toupper(response);

    } while (response == 'Y');
	play();
}

// playing 2 peron with math problems----------------------------------------------------------------------------------------------------
void multiPlayer()
{
    char enterNames;
    int xo;
    system("cls");
    printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
    printf("\n\n\n\n");
    printf("\t\t\t----------------------------------------------ENJOY THE GAME WITH FRIENDS--------------------------------------------------------");
    printf("\n\n\n\n");

    // Ask if player wants to give names---------------------------------------------------------------------------------------------------
    printf("\n");
    printf("\n\t\t\t\tDo you want to enter the names of player (y/n) ?");
    scanf(" %c", &enterNames);
    enterNames = toupper(enterNames);

    if (enterNames == 'Y')
    {

        system("cls");
        printf("\n\n");
    	printf("\tTic-Tac-Toe The Mathematical Game.....");
    	printf("\n\n\n\n");
    	printf("\t\t\t---------------------------------------------- AUTHENTICATION --------------------------------------------------------");
        
        printf("\n");
        printf("\n");
        printf(" \t\t\t NOTE:                               \n");
	    printf(" \t\t\t\t============================================================================================\n");
	    printf(" \t\t\t\t|  <1> Only First name is taken,                                                            |\n");
	    printf(" \t\t\t\t|  <2> If space is given while entering the names,it will be considered two different names,|\n");
	    printf(" \t\t\t\t|  <3> Player can't make a move if they couldn't solve the problem,                         |\n");
	    printf(" \t\t\t\t|  <4> Player are not expected to quit the running game.                                    |\n");
	    printf(" \t\t\t\t============================================================================================");
        printf("\n\n\n\n");
        printf("\n\t\t\t\tPlayers Naming Time,");
        printf("\n\n");
        printf("\n\t\t\t\t    Enter Player 1 Name : ");
        scanf("%s", player1Name);
        printf("\n");
        printf("\n\t\t\t\t    Enter Player 2 Name : ");
        scanf("%s", player2Name); 
    }
    else
    {
        strcpy(player1Name, "Player-1");
        strcpy(player2Name, "Player-2");
    }

    category();

chooseMove:
restoringName:
renamePlayer:
    system("cls");
    printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
   	printf("\n\n\n\n");
    printf("\t\t\t---------------------------------------------- DECISION MAKING --------------------------------------------------------");      
    printf("\n");
    printf("\n");
    printf("\n\t\tWho will make a movie first,");
    printf("\n\n");
    printf("\n\t\t\t   1.%s", player1Name);
    printf("\n\t\t\t   2.%s", player2Name);
    printf("\n\t\t\t   3.Back");
    printf("\n\n");
    printf("\n\n\t\t\t  Enter your choice ... :");
    scanf("%d", &xo);
    fgetc(stdin);

    if (xo == 1)
    {

        while (PLAYER1 != 'X' || PLAYER1 != 'O')
        {
			a:
            printf("\n\n");
            printf("\n\t\t\t  %s choose 'x' or 'o' .. :", player1Name);
            scanf(" %c", &PLAYER1);
            PLAYER1 = toupper(PLAYER1);
            if (PLAYER1 == 'X')
            {
                PLAYER2 = 'O';
                break;
            }
            else if (PLAYER1 == 'O')
            {
                PLAYER2 = 'X';
                break;
            }
            else
            {
                printf("\n");
                printf("\t\t\t\t\t\t   Not an default sign!");
                goto a;
            }
        }
    }

    else if (xo == 2)
    {
        do
        {
        	b:
            printf("\n\n");
            printf("\n\t\t\t  %s choose 'x' or 'o' .. :", player2Name);
            scanf(" %c", &PLAYER2);
            PLAYER2 = toupper(PLAYER2);
            if (PLAYER2 == 'X')
            {
                PLAYER1 = 'O';
                break;
            }
            else if (PLAYER2 == 'O')
            {
                PLAYER1 = 'X';
                break;
            }
            else
            {
                printf("\n");
                printf("\t\t\t\t\t\t   Not an default sign!");
                goto b;
            }

        } while (PLAYER2 != 'O' || PLAYER2 != 'X');
    }
    else if (xo == 3)
    {
        play();
    }
    else
    {
        printf("\n\n");
        printf("\t\t\t\t\t\t   Invalid input!");
        printf("\n");
        printf("\t\t\t\t\t\t   Choose 1 || 2");
        printf("\n\n");
        Sleep(2000);
        goto chooseMove;
    }

    char humanWinner = ' ';
    char response = ' ';
    int game = 0;
    do
    {
        if (response == 'Y')
        {
            char restoreName;
            system("cls");
            printf("\n\n");
		    printf("\tTic-Tac-Toe The Mathematical Game.....");
		   	printf("\n\n\n\n");
            printf("\t\t\t---------------------------------------------- DECISION MAKING --------------------------------------------------------"); 
            printf("\n\n");
		    printf("\n\t\t\t  Who is playing?");
            printf("\n\n");
            printf("\t\t\t\t");
            printf("  %s and %s (y/n) ?", player1Name, player2Name);
            scanf(" %c", &restoreName);

            restoreName = toupper(restoreName);
            if (restoreName == 'Y')
            {

                goto restoringName;
            }
            else
            {
                system("cls");
                printf("\n\n");
                printf("\tTic-Tac-Toe The Mathematical Game.....");
		        printf("\n\n\n\n");
                printf("\t\t\t---------------------------------------------- RENAMING --------------------------------------------------------");
                
                printf("\n\n\n\n");
                printf("\n\t\t\t Rename '%s' :", player1Name);
                scanf("%s", player1Name);
                printf("\n\n");
                printf("\n\t\t\t Rename '%s' :", player2Name);
                scanf("%s", player2Name);
                goto renamePlayer;
            }
        }
        humanWinner = ' ';
        response = ' ';
        resetBoard();

        // if no one is the winner and space is left then player one making move----------------------------

        // if player 1 plays first----------------------------------------------------
        if (xo == 1)
        {

            while (humanWinner == ' ' && checkFreeSpaces() != 0)
            {
                system("cls");
                printBoard();

                // if the name is given by the players-------------------------------------------------------------

                printf("\t\t\t\t   Problem for '%c' (%s),", PLAYER1, player1Name);
                printf("\n");
                if (problem() == 1)
                {
                    system("cls");
                    printBoard();
                    printf("\t\t\t\t   '%s' '%c' can now make a move:", player1Name, PLAYER1);
                    printf("\n");
                    player1Move();
                    humanWinner = checkWinner();
                    if (humanWinner != ' ' || checkFreeSpaces() == 0)
                    {
                        break;
                    }
                }
                else
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t");
                    printf("Sorry! (%s) your answer is wrong you have to skip a '%c' move", player1Name, PLAYER1);
                    printf("\n\n");
                    printf("\t\t\t\t\t\t\t\t\t");
                    printf("Enter any key to continue ... ");
                    getch();
                }

                system("cls");
                printBoard();
                printf("\n\n");
                printf("\t\t\t\t   Problem for '%c' (%s),", PLAYER2, player2Name);
                printf("\n");
                if (problem() == 1)
                {
                    system("cls");
                    printBoard();
                    printf("\t\t\t\t   '%s' '%c' can now make a move:", player2Name, PLAYER2);
                    printf("\n");
                    player2Move();
                    humanWinner = checkWinner();
                    if (humanWinner != ' ' || checkFreeSpaces() == 0)
                    {
                        break;
                    }
                }
                else
                {
                   system("cls");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t");
                    printf("Sorry! (%s) your answer is wrong you have to skip a '%c' move", player1Name, PLAYER1);
                    printf("\n\n");
                    printf("\t\t\t\t\t\t\t\t\t");
                    printf("Enter any key to continue ... ");
                    getch();
                }
            }
        }

        // if player 2 wants to play first---------------------------------------------------
        else
        {

            while (humanWinner == ' ' && checkFreeSpaces() != 0)
            {
                system("cls");
                printBoard();

                // if the name is given by the players-------------------------------------------------------------

                system("cls");
                printBoard();
                printf("\n\n");
                printf("\t\t\t\t   Problem for '%c' (%s),", PLAYER2, player2Name);
                printf("\n");
                if (problem() == 1)
                {
                    system("cls");
                    printBoard();
                    printf("\t\t\t\t   '%s' '%c' can now make a move:", player2Name, PLAYER2);
                    printf("\n");
                    player2Move();
                    humanWinner = checkWinner();
                    if (humanWinner != ' ' || checkFreeSpaces() == 0)
                    {
                        break;
                    }
                }
                else
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t");
                    printf("Sorry! (%s) your answer is wrong you have to skip a '%c' move", player2Name, PLAYER2);
                    printf("\n\n");
                    printf("\t\t\t\t\t\t\t\t\t\t");
                    printf("Enter any key to continue ...  ");
                    getch();
                }

                printf("\n\n");
                printf("\t\t\t\t   Problem for '%c' (%s):", PLAYER1, player1Name);
                printf("\n");
                if (problem() == 1)
                {
                    system("cls");
                    printBoard();
                    printf("\t\t\t\t   '%s' '%c' can now make a move:", player1Name, PLAYER1);
                    printf("\n");
                    player1Move();
                    humanWinner = checkWinner();
                    if (humanWinner != ' ' || checkFreeSpaces() == 0)
                    {
                        break;
                    }
                }
                else
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t");
                    printf("Sorry! (%s) your answer is wrong you have to skip a '%c' move", player1Name, PLAYER1);
                    printf("\n\n");
                    printf("\t\t\t\t\t\t\t\t\t\t");
                    printf("Enter any key to continue ... ");
                    getch();
                }
            }
        }

        system("cls");
        printBoard();
        winnerFrom2(humanWinner);
        printf("\n\n\n");
        printf("\t\t\t\t\t\t\t     Would you like to play again? (Y/N):");
        scanf(" %c", &response);
        response = toupper(response);
        game++;
    } while (response == 'Y');
    play();
}

// single player move against computer-------------------------------------------------------------------------------------------------------
void playerMove()
{

    int x, y;

    do
    {
        printf("\t\t\t\t    Enter row number #(1-3) : ");
        scanf("%d", &x);
        x--;
        printf("\t\t\t\t    Enter column number #(1-3) : ");
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ')
        {
            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t         Invalid move!");
            printf("\n\n");
        }

        else
        {
            board[x][y] = PLAYER;
            break;
        }

    } while (board[x][y] != ' ');
};

// player one move in multiPlayer -----------------------------------------------------------------------------------------------------------
void player1Move()
{

    int x, y;

    do
    {
        printf("\t\t\t\t    Enter row number #(1-3) for '%c' (%s):", PLAYER1, player1Name);
        scanf("%d", &x);
        x--;

        printf("\t\t\t\t    Enter column number #(1-3) for '%c' (%s):", PLAYER1, player1Name);
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ')
        {

            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t         Invalid move!");
            printf("\n\n");
        }

        else
        {
            board[x][y] = PLAYER1;
            break;
        }

    } while (board[x][y] != ' ');
};

// player 2 move in multi player----------------------------------------------------------------------------------------------------------
void player2Move()
{

    int x, y;

    do
    {
        printf("\t\t\t\t    Enter row number #(1-3) for '%c' (%s):", PLAYER2, player2Name);
        scanf("%d", &x);
        x--;

        printf("\t\t\t\t    Enter column number #(1-3) for '%c'(%s):", PLAYER2, player2Name);
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ')
        {

            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t         Invalid move!");
            printf("\n\n");
        }
        else
        {
            board[x][y] = PLAYER2;
            break;
        }

    } while (board[x][y] != ' ');
}

// for printing the board every time the users input their move in multi player ------------------------------------------------
void printBoard()
{

    printf("\n\n");
    printf("\tTic-Tac-Toe The Mathematical Game.....");
    printf("\n\n");
    printf("\n\t\t\t------------------------------------------ CAN YOU BEAT THE OPPONENT ---------------------------------------------------");

    // extra large board----------------------------------------------------------
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t    %c    |    %c    |    %c    \n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t_________|_________|_________\n");
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t    %c    |    %c    |    %c    \n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t_________|_________|_________\n");
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t    %c    |    %c    |    %c   \n", board[2][0], board[2][1], board[2][2]);
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\t\t\t\t\t\t\t\t         |         |         \n");
    printf("\n\n\n");
};

// for resetting the board for new game--------------------------------------------------------------------------
void resetBoard()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
};

// checking spaces if no space left and no one wins--------------------------------------------------------
int checkFreeSpaces()
{
    int freeSpaces = 9, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
};

// checking if anyone won the game------------------------------------------------------------------------------------------------------------
char checkWinner()
{
    int i;

    // check rows
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {

            return board[i][0];
        }
    }

    // check columns
    for (i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {

            return board[0][i];
        }
    }

    // check diagnols

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {

        return board[0][0];
    }

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {

        return board[0][2];
    }

    return ' ';
};

// Random move by the computer-------------------------------------------------------------------------------------------------------------

void computerMove()
{

    // creates a seed based on current time

    srand(time(0));
    int x, y;
    if (checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
};

// printing the winner--------------------------------------------------------------------------------------------------------------------------
void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t  _______ YOU WON! _______");
    }
    else if (winner == COMPUTER)
    {
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t  _______ YOU LOOSE! _______");
    }

    else
    {
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t  _______ ITS A TIE! _______");
    }
}

// winner from multi player-----------------------------------------------------------------------------------------------------------------
void winnerFrom2(char humanWinner)
{

    if (humanWinner == PLAYER1)
    {
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t  _______%s YOU WON! _______",player1Name);
    }
    else if (humanWinner == PLAYER2)
    {
      	printf("\n\n");
    	printf("\t\t\t\t\t\t\t\t  _______%s YOU WON! _______",player2Name);
    }
    else
    {

        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t  _______ ITS A TIE! _______");
}
}

// function creating random math problem--------------------------------------------------------------------------------------------------------

int problem()
{
    int a, b, answer;

    // Generate two random numbers between 1 and 10

    // medium level-----------------------------
    if (chooseLevel == 2)
    {
        srand(time(NULL));
        a = rand() % 10 + 5;
        b = rand() % 10 + 5;
    }
    // hard level-------------------------------
    else if (chooseLevel == 3)
    {
        srand(time(NULL));
        a = rand() % 15 + 10;
        b = rand() % 15 + 10;
    }
    // easy level--------------------------------
    else
    {
        srand(time(NULL));
        a = rand() % 4 + 1;
        b = rand() % 4 + 1;
    }

    // Print the math problem

    if (chooseCategory == 2)
    {
        printf("\n");
        printf("\t\t\t\t   What is the result of %d - %d ? ", a, b);
    }
    else if (chooseCategory == 3)
    {
        printf("\n");
        printf("\t\t\t\t   What is the result of %d * %d ? ", a, b);
    }
    else if (chooseCategory == 4)
    {
        printf("\n");
        printf("\t\t\t\t   What is the result of %d / %d ? ", a, b);
    }
    else
    {
        printf("\n");
        printf("\t\t\t\t   What is the result of %d + %d ? ", a, b);
    }

    // Read the user's answer
    scanf("%d", &answer);

    // Check if the answer is correct

    if (chooseCategory == 2)
    {
        if (answer == a - b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (chooseCategory == 3)
    {
        if (answer == a * b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (chooseCategory == 4)
    {
        if (answer == a / b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {

        if (answer == a + b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
