#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include "Singleplayer.h"
#include "Multiplayer.h"

//title of the game
void title(){
	printf("\t\t\t  &&      &&       &&&&&        &&&&       &&    &&&&&&&&&&&&&   &&&&       &&&&        &&&&&        &&&&&       &&\n");
    printf("\t\t\t  &&      &&      &&   &&       && &&      &&    &&              &&  &     &  &&       &&   &&       &&  &&      &&\n");
    printf("\t\t\t  &&      &&     &&     &&      &&  &&     &&    &&   &&&&&&&&   &&   &&  &&  &&      &&     &&      &&   &&     &&\n");
    printf("\t\t\t  &&&&&&&&&&    &&&&&&&&&&&     &&   &&    &&    &&   &&&&&  &   &&    &&&&   &&     &&&&&&&&&&&     &&    &&    &&\n");
    printf("\t\t\t  &&      &&   &&         &&    &&    &&   &&    &&      &&  &   &&           &&    &&         &&    &&     &&   &&\n");
    printf("\t\t\t  &&      &&  &&           &&   &&      && &&    &&      &&  &   &&           &&   &&           &&   &&      &&  &&\n");
    printf("\t\t\t  &&      && &&             &&  &&       &&&&    &&&&&&&&&&  &   &&           &&  &&             &&  &&       &&&&&\n");
}

// About the game
void about()
{
	system("cls");
	printf("\n\n");
    printf("\n\n");
    printf("\n\n");

    title();
    
	printf("\n\n");
	printf("\n\t\t\t--------------------------------------------- ABOUT SECTION ---------------------------------------------------");
	printf("\n\n");
	Sleep(1000);
    printf("\n\n");
    printf(" \t\t     About the game:::                              \n");
    printf(" \t\t=====================================================================================================================================\n");
    printf(" \t\t|   Hangman can be played between two or more users,where one gives the word and other guesses the alphabets                         |\n");
    printf(" \t\t|   Here, the first user enters a word and after the enter key is pressed, the screen is cleared and second user starts guessing.    |\n");
    printf(" \t\t|   For every wrong guess, the number of mistakes is counted and the game is over if the second user does more than 5 mistakes       |\n");
    printf(" \t\t======================================================================================================================================\n");
	printf("\n");
	printf("\n");
	Sleep(500);
	printf(" \t\t How to play:::\n");
	printf(" \t\t==================================================================================================================================================\n");
    printf(" \t\t|Use your keyboard and guess the word . if you press any letter and the letter is in the word the game will tell you the position of the letter. |\n\n \t\t\t BEST OF LUCK !\n");
	printf(" \t\t==================================================================================================================================================\n");
    Sleep(500);
    printf("\n");
	printf("\n");
	printf(" \t\t     Rules for the game:::                               \n");
    printf(" \t\t===========================================================\n");
    printf(" \t\t|  <1> While guessing lowercase alphabet must be used.     |\n");
    printf(" \t\t|  <2> Maximum 5 mistakes are allowed.                     |\n");
    printf(" \t\t===========================================================\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
	getch();

}

//body
int Hangman(){
	system("cls");
	int ch;
	printf("\n\n");
	printf("\tHangman The Vocabulary Test...");
	
    printf("\n\n");
    printf("\n\n");

	title();
    printf("\n\n");
	printf("\n\t\t\t -------------------------------------------------- MENU ----------------------------------------------------- ");
	printf("\n\n");
	printf("\n\n");
    printf("\n\t\t\t\t1:PLAY \n\t\t\t\t2:ABOUT \n\t\t\t\t3:QUIT ");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n\n\t\t\t\t\t\t\t\t\tEnter your choice,Mr player... : ");
	scanf("%d",&ch);
	fgetc(stdin);// returns the character that is read as an integer.
	switch(ch){
		case 1:;
			system("cls");
			int op;
			inputagain:
			printf("\n\n");
		    printf("\n\n");
		    printf("\n\n");
		
			title();
			printf("\n\n");
			printf("\n\t\t\t -------------------------------------------------- MODE ----------------------------------------------------- ");
		    
			printf("\n\n");
			printf("\n\n");
		    printf("\n\t\t\t\t1:SINGLE PLAYER\n\t\t\t\t2:MULTI PLAYER \n\t\t\t\t3:BACK ");
			printf("\n\n");
			printf("\n\n");
			printf("\n\n");
			printf("\n\n\n\t\t\t\t\t\t\t\t\tEnter your choice : ");
			scanf("%d",&op);
			fgetc(stdin);// returns the character that is read as an integer.
			switch(op){
				case 1: single();  //calling single finction from Singleplayer.h
					break;
					
				case 2: multi();  //calling single finction from Multiplayer.h
					break;
					
				case 3: Hangman(); 
				break;
				
				default:
					printf("\n\n\t\t\t\t\t     Invalid Input\t");
					Sleep(1000);
					system("cls");
					goto inputagain;
				}
				break;
		case 2: about();
				Hangman();
	            break;
	    
	    case 3: system("cls");
				menu();
				break;
		default:	
			printf("\n\n\t\t\t\t\t     Invalid Input\t");
			Sleep(1000);
			system("cls");
			Hangman(); 
}
	
	
	return 0;
}
