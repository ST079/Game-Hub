#include<stdio.h>
#include<windows.h>
//loading animation
void load(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
	Sleep(1000);
    printf("..");
    
    Sleep(500);                    
      printf("..");

    Sleep(500);
      printf("..");

    Sleep(500);
      printf("...");
    
    system("cls");
	
}


//hide the characters whilw giving input
void takeword(char wd[50]){
	int i;
	char ch;
	while(1){
		ch = getch();
		if(ch == 13 || ch == 9){
			wd[i] = '\0';
			break;
		}
		else if(ch == 8){
			if(i>0){
				i--;
				printf("\b \b");
			}
		}
		else{
			wd[i++] = ch;
			printf("* \b");
		}
	}
}

int multi(){
	 system("cls");
	// VARIABLE DECLERATION.......
		char word[20];//Word to be guessed
		char temp[20];//contains - pattern
		char player_guessed;
		int len,n;
		int i,j;
		int lives,correct;
		int guess=0;
		char hint[25];
		system("cls");
     	load();	
		printf("Hangman The Game...");
    	printf("\n");
	   	printf("\n");
  		printf("\n");
	   	printf(" \t=====================================================================================================================================\n");
		printf(" \t|   WORD GIVING TIME!!!!!!! \n");
		printf(" \t|\n");
		printf(" \t|      Enter any word you want your friend to guess :");
		fflush(stdout);//clears the output buffer
		takeword(word);
		len=strlen(word);
		strlwr(word);
		printf(" \t|\n");
		printf(" \n\t|      Hint :");
		gets(hint);
				    
				    
		system("cls");
		load();
		printf("Hangman The Game...");
		printf("\n");
		printf("\n");
		printf("\n");
		n=len;
		printf("  =====================================================================================================================================\n");
		printf(" |\n");
		printf(" |    AND HERE WE GO......!!!\n");
		printf(" |\n");
		printf(" |    CAN YOU SAVE ME PLESASE?:( \n"); 
		printf(" |\n");
		printf(" |       The number of alphabets in the word : %d\n",n);
		printf("\n");
		//replacting characters with  '-'
		for (i=0;i<n;++i)
			{
				temp[i]='-';
				printf("\t%c",temp[i]);
			}
				    		
		printf(" |\n");
		printf(" |\t   _______________________\n"
			   " |\t   |                      |\n"
		       " |\t   |\n"
			   " |\t   |\n"
			   " |\t   |\n"
		       " |\t   |\n"
               " |\t   |\n"
	           " |\t   |\n"
		       " |\t ----\n");
		printf(" |\n");
		lives=5;
				    		
		while (lives <=5)
			{
				correct=0;
				printf(" | HINT : %s\n",hint);
			    printf(" | Please enter your guess :  ");
				player_guessed=getche();
				for (j=0;j<n;j++)
					{
						
						if (player_guessed == word[j] )//checking if user guessed is correct or not
						    {
						        temp[j]=word[j];
						        correct=1;
						        guess++;
						    }
					}
						        
				if(correct!=1)
					{
						printf(" |\n\tYour letter %c is not in the world, Guess another letter.\n",player_guessed);
						lives--;
						printBody(lives);
					}
								
				printf("\n");
				printf("\n");
				 //replace the correct alphabet
				for (i=0;i<n;i++)
					{
						printf("\t%c",temp[i]);
					}
				printf("\n");
				printf("\n");
		// player successfully guessed		        
				if(guess==n){
				    printf(" |\n");
        			printf(" |  CONGRATULATIONS!!!!!!,You Have Guessed The Word Correctly\n");
        			break;
				    		}
		//player failed to guess						
				if(lives==0)
				 {   
					printf(" |\n\n");
		        	printf(" |  SORRY, YOU ARE HANGED:((\n");
		        	printf(" |  BETTER LUCK NEXT TIME!\n");
        			printf(" |  The word you had to guess was :   %s",word);
		        	break;
				 }
			}
			printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
	        getch();
	        Hangman();	//calling Hangman from hangman.h
	return 0;
}

