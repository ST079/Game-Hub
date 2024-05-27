#include "Hangman.h"
#include "tictactoe.h"
#include "AdvWorld.h"
#include "quiz.h"
#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include "byby.h"
#include<conio.h>
#include<process.h>
#include<windows.h>

void f_header(){
	printf("\t\t\t\t\t\t  &&      &&  &&&&&&&  &&     &&&&&&& &&&&&&&&  &&&      &&& &&&&&&&\n");
    printf("\t\t\t\t\t\t  &&      &&  &&       &&     &&      &&    &&  && &&  && && &&      \n");
    printf("\t\t\t\t\t\t  &&      &&  &&&&&&   &&     &&      &&    &&  &&   &&   && &&&&&& \n");
    printf("\t\t\t\t\t\t  &&  &&  &&  &&       &&     &&      &&    &&  &&        && &&      \n");
    printf("\t\t\t\t\t\t  &&&    &&&  &&&&&&&  &&&&&& &&&&&&& &&&&&&&&  &&        && &&&&&&&\n");
    printf("\n");
    printf("\t\t\t\t\t\t                                GAMERS");
}

int menu(){
	int choice;
	printf("\n\t2B-SDs\n\n");
	printf("\n\n");	
	f_header();
	printf("\n\n");
	printf("\n\t\t\t ----------------------------------------------------- MAIN MENU -------------------------------------------------------- ");
	printf("\n\n");
	printf("\n\n");
	printf("\n\t\t\t\t1.Hangman");
	printf("\n\t\t\t\t2.Tic Tac Toe");
	printf("\n\t\t\t\t3.QUiz");
	printf("\n\t\t\t\t4.Adventurous World");
	printf("\n\t\t\t\t5.Exit");
	//taking the user input.....
	printf("\n\n\t\t\t\t\tEnter your choice : ");
	scanf("%d",&choice);
	fgetc(stdin);// returns the character that is read as an integer.
	
	switch(choice){
		case 1:
			Hangman();
			break;
		
		case 2:
			Tictactoe();
			break;
			
		case 3:
			quiz();
		 	break;
		case 4:
			aworld();
			break;
				
		case 5:
			system("cls");
			byby();
			exit(0);
			break;
			
		default:
			system("color 04");
			printf("\n\n\t\t\t\t\t     Invalid Input\t");
			Sleep(2000);
			system("cls");
			menu();
	}
	
	return 0;
}
