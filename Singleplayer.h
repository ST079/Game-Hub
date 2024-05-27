#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

//loading Animation
void loading(){
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

//mistake calculator
void printBody(int mistakes)
{
  switch (mistakes)
    {
    case 4:
    printf(" \t|\n");
    printf(" \t|\t   _______________________\n"
           " \t|\t   |                      |\n"
           " \t|\t   |                     ( )\n"
           " \t|\t   |\n"
           " \t|\t   |\n"
           " \t|\t   |\n"
           " \t|\t   |\n"
           " \t|\t   |\n"
           " \t|\t ----\n");
    printf(" \t|\n");
    break;


    case 3:

        printf(" \t|\n");
	    printf(" \t|\t   _______________________\n"
	           " \t|\t   |                      |\n"
	           " \t|\t   |                     ( )\n"
	           " \t|\t   |                      |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t ----\n");
   		printf(" \t|\n");
    break;


    case 2:

         printf(" \t|\n");
    printf(" \t|\t   _______________________\n"
           " \t|\t   |                      |\n"
           " \t|\t   |                     ( )\n"
           " \t|\t   |                     /|\\ \n"
           " \t|\t   |\n"
           " \t|\t   |\n"
           " \t|\t   |\n"
           " \t|\t ----\n");
    printf(" \t|\n");
    break;


    case 1:

         printf(" \t|\n");
    printf(" \t|\t   _______________________\n"
           " \t|\t   |                      |\n"
           " \t|\t   |                     ( )\n"
           " \t|\t   |                     /|\\ \n"
           " \t|\t   |                      |   \n"
           " \t|\t   |\n"
           " \t|\t   |\n"
           " \t|\t ----\n");
    printf(" \t|\n");
    break;


    case 0:
    printf(" \t|\n");
    printf(" \t|\t   _______________________\n"
           " \t|\t   |                      |\n"
           " \t|\t   |                     ( )\n"
           " \t|\t   |                     /|\\ \n"
           " \t|\t   |                      |   \n"
           " \t|\t   |                     / \\\n"
           " \t|\t   |\n"
           " \t|\t ----\n");
    printf(" \t|\n");
    break;
	}   
}

//function that return string 
char *personality();
char *personalityHint(char[]);
char *MedicalName();
char *MedicalNameHint(char[]);


int single(){
			system("cls");
		
			char player_guessed;
			int lives,correct;
			int len,n,i,temp[20],j;
			int guess=0;
			char *word;
			char *hint;
			system("cls");
			int ch;
			printf("\n\n");
		    printf("\n\n");
		    printf("\n\n");
		//header
			printf("\t\t\t  &&      &&       &&&&&        &&&&       &&    &&&&&&&&&&&&&   &&&&       &&&&        &&&&&        &&&&&       &&\n");
		    printf("\t\t\t  &&      &&      &&   &&       && &&      &&    &&              &&  &     &  &&       &&   &&       &&  &&      &&\n");
		    printf("\t\t\t  &&      &&     &&     &&      &&  &&     &&    &&   &&&&&&&&   &&   &&  &&  &&      &&     &&      &&   &&     &&\n");
		    printf("\t\t\t  &&&&&&&&&&    &&&&&&&&&&&     &&   &&    &&    &&   &&&&&  &   &&    &&&&   &&     &&&&&&&&&&&     &&    &&    &&\n");
		    printf("\t\t\t  &&      &&   &&         &&    &&    &&   &&    &&      &&  &   &&           &&    &&         &&    &&     &&   &&\n");
		    printf("\t\t\t  &&      &&  &&           &&   &&      && &&    &&      &&  &   &&           &&   &&           &&   &&      &&  &&\n");
		    printf("\t\t\t  &&      && &&             &&  &&       &&&&    &&&&&&&&&&  &   &&           &&  &&             &&  &&       &&&&&\n");
		
				    
			printf("\n\n");
			printf("\n\t\t\t -------------------------------------------------- CATAGORIES ----------------------------------------------------- ");
			printf("\n\n");
		    printf("\n\t\t\t\t1:PERSONALITY \n\t\t\t\t2:Medical NAME OF DOCTOR \n\t\t\t\t3:BACK ");
			printf("\n\n");
			printf("\n\n");
			printf("\n\n");
			printf("\n\n\n\t\t\t\t\t\t\t\t\tEnter your choice,Mr palayer... : ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					word=personality();
					len=strlen(word);
					n=len;
					hint=personalityHint(word);
					break;
					
				case 2:
					word=MedicalName();
					len=strlen(word);
					n=len;
					hint=MedicalNameHint(word);
					break;
					
					
				case 3:
					Hangman();
					
				default:
					printf("\n\n\t\t\t\t\t     Invalid Input\t");
					Sleep(1000);
					system("cls");
					single();
					
			}
			system("cls");
	     	loading();	
			printf("Hangman The Vocabulary Test...");
	    	printf("\n");
		   	printf("\n");
	  		printf("\n");
		   	printf("  \t==============================================================================================================================\n");
			printf(" \t|\n");
    		printf(" \t|    CAN YOU SAVE ME PLESASE ? \n"); 
    		printf(" \t|\n");
    		printf(" \t|       The number of alphabets in the word : %d\n",n);
    		printf(" \t|\n");
    		//replacting characters with  '-' 
    		for (i=0;i<n;++i)
    		{
        		temp[i]='-';
        		printf("\t    %c",temp[i]);
    		}
    		printf(" \t|\n");
	    printf(" \t|\t   _______________________\n"
	           " \t|\t   |                      |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t   |\n"
	           " \t|\t ----\n");
    	printf(" \t|\n");
    	lives=5;
    		while (lives <=5)
		    {
		    	correct=0;
		    	printf(" \t| HINT : %s\n",hint);
		        printf(" \t| Please enter your guess :  ");
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
		            printf(" \t|\n");
		        	printf(" \n\t|\tYour letter %c is not in the world, Guess another letter.\n",player_guessed);
		        	lives--;
		        	printBody(lives);
				}
				printf("\n");
		        printf("\n");
		        
		        //replace the correct alphabet
		        for (i=0;i<n;i++)
		        {
		            printf("\t   %c",temp[i]);
		        }
		        printf("\n");
		        printf("\n");
		// player successfully guessed		
				if(guess==n){
					printf(" \t|\n");
        			printf(" \t|  CONGRATULATIONS!!!!!!,You Have Guessed The Word %s Correctly\n",word);
        			break;
    			}
		//player failed to guess		
		        if(lives==0)
		        {   
		        	printf(" \t|\n\n");
		        	printf(" \t|  SORRY, YOU ARE HANGED:((\n");
		        	printf(" \t|  BETTER LUCK NEXT TIME!\n");
        			printf(" \t|  The word you had to guess was : %s",word);
		        	break;
				}
		    }
		    printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
	        getch();
	        Hangman();//calling Hangman from hangman.h
	
	return 0;
}


char *personality(){
		srand(time(0));
	static char word[20];
	char words[][16]={
					"timid",
					"cranky",
					"boaster",
					"gullible",
					"stubborn",
					"braggart",
					"bigmouth",
					"tattletale",
					"babbler",
					"sidekick",
					"arrogant",
					"exaggerate",
					"affable",
					"understate",
					"blabbermouth"
					};
					int randomindex = rand() % 15;
					strcpy(word,words[randomindex]);
					return word;
}


char *personalityHint(char word[]){
	static char hint[100];
	if(strcmp(word,"timid")==0){
		strcpy(hint,"Lajalu,darpok");
	}
	else if(strcmp(word,"cranky")==0){
		strcpy(hint,"Jhagadalu.");
	}
	else if(strcmp(word,"boaster")==0){
		strcpy(hint,"Gafadi manxe");
	}
	else if(strcmp(word,"gullible")==0){
		strcpy(hint,"Sajilai thagine manxe.");
	}
	else if(strcmp(word,"stubborn")==0){
		strcpy(hint,"Jidii...");
	}
	else if(strcmp(word,"braggart")==0){
		strcpy(hint,"Dhag dhekhaune manxe..");
	}
	else if(strcmp(word,"tattletale")==0){
		strcpy(hint,"Kuraute.");
	}
	else if(strcmp(word,"babbler")==0){
		strcpy(hint,"Bhakbhake...");
	}
	else if(strcmp(word,"sidekick")==0){
		strcpy(hint,"Kunai manxe ko chamcha..");
	}
	else if(strcmp(word,"arrogant")==0){
		strcpy(hint,"Ghamandi");
	}
	else if(strcmp(word,"exaggerate")==0){
		strcpy(hint,"Sano kura lai thulo banaune");
	}
	else if(strcmp(word,"affable")==0){
		strcpy(hint,"milne manxe, milan saar");
	}
	else if(strcmp(word,"understate")==0){
		strcpy(hint,"Ghatayera bolne...");
	}
	else if(strcmp(word,"bigmouth")==0){
		strcpy(hint,"Thulo kura garne.");
	}
	else if(strcmp(word,"blabbermouth")==0){
		strcpy(hint,"Secret kura bhani halne.");
	}
	return hint;
}
char *MedicalName(){
		srand(time(0));
	static char word[20];
	char words[][20]={
					"opthalmologist",
					"dermatologist",
					"cardiologist",
					"pendiatrician",
					"geriatricial",
					"orthopedic",
					"gastroenterologist",
					"psyciatrist",
					"hematologist",
					"radiologist",
					"pulmonologist",
					"oncologist",
					"neurologist",
					"dentist"
					};
					int randomindex = rand() % 14;
					strcpy(word,words[randomindex]);
					return word;
	}
	
char *MedicalNameHint(char word[]){
	static char hint[100];
	if(strcmp(word,"opthalmologist")==0){
		strcpy(hint,"Eye doctor");
	}
	else if(strcmp(word,"dermatologist")==0){
		strcpy(hint,"Skin and Hair doctor");
	}
	else if(strcmp(word,"cardiologist")==0){
		strcpy(hint,"Heart doctor");
	}
	else if(strcmp(word,"pendiatrician")==0){
		strcpy(hint,"Children doctor.");
	}
	else if(strcmp(word,"geriatricial")==0){
		strcpy(hint,"Eldery people doctor.");
	}
	else if(strcmp(word,"orthopedic")==0){
		strcpy(hint,"Bone doctor.");
	}
	else if(strcmp(word,"gastroenterologist")==0){
		strcpy(hint,"Digestive System doctor.");
	}
	else if(strcmp(word,"psyciatrist")==0){
		strcpy(hint,"Doctor who treats mental/lunatic/mad people.");
	}
	else if(strcmp(word,"hematologist")==0){
		strcpy(hint,"Doctor who treats blood related disease.");
	}
	else if(strcmp(word,"radiologist")==0){
		strcpy(hint,"One who performs X-ray.");
	}
	else if(strcmp(word,"pulmonologist")==0){
		strcpy(hint,"Doctor who treats respiratory disease.");
	}
	else if(strcmp(word,"oncologist")==0){
		strcpy(hint,"Doctor who treats Cancer patients.");
	}
	else if(strcmp(word,"neurologist")==0){
		strcpy(hint,"Doctor who treats nerve related disease.");
	}
	else if(strcmp(word,"dentist")==0){
		strcpy(hint,"Doctor who treats teeth disease.");
	}
	return hint;
}

