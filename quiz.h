#include <stdio.h>
#include <windows.h>
#include<conio.h>
void quiztitle(){
	printf("\t\t\t\t\t\t  QQQQQQQQQQ        UU    UU    IIIIIIII     ZZZZZZZZZZZZZ\n");
    printf("\t\t\t\t\t\t  Q        Q        UU    UU       II                   ZZ\n");
    printf("\t\t\t\t\t\t  Q        Q        UU    UU       II                 ZZ  \n");
    printf("\t\t\t\t\t\t  Q        Q        UU    UU       II               ZZ    \n");
    printf("\t\t\t\t\t\t  Q     QQQQQQQ     UU    UU       II             ZZ      \n");
    printf("\t\t\t\t\t\t  Q     QQ Q QQ     UU    UU       II           ZZ        \n");
    printf("\t\t\t\t\t\t  Q     QQ Q QQQQ   UU    UU       II        ZZ           \n");
    printf("\t\t\t\t\t\t  QQQQQQQ           UUUUUUUU    IIIIIIII     ZZZZZZZZZZZZZ\n");
	
}
int quiz()
{
    int i;
    int ans;
    int choice;
    int count = 0;
// heading
alpha:
	system("cls");
	printf("\n\n");
	printf("\tThe Quiz Game...");
    printf("\n\n");
    printf("\n\n");
    quiztitle();
    	printf("\n\t\t\t--------------------------------------------- QUIZ MENU ---------------------------------------------------");
    Sleep(500);
    printf("\n\n");
	printf("\n\n");
    printf("\n\t\t\t  1.PLAY\n\t\t\t  2.QUIT\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t\tEnter your choice, Mr.player: ");
	scanf("%d", &choice);
    fgetc(stdin);
    
    switch (choice)
    {
    // information and conditions about the game
    case 1:
	   	system("cls");
	    printf("\n\n");
		printf("\tThe Quiz Game...");
	    printf("\n\n");
	    printf("\n\n");
	    quiztitle();
	    printf("\n\t\t\t--------------------------------------------- ABOUT ---------------------------------------------------");
    	printf("\n");
    	printf("\n\n");
	    printf(" \t\t\t\t\t  ================================================================\n");
	    printf(" \t\t\t\t\t  |  <1> There are 5 topics in this quiz ,                       |\n");
	    printf(" \t\t\t\t\t  |  <2> Each topic contains 10 questions ,                      |\n");
	    printf(" \t\t\t\t\t  |  <3> Each question contains 10 points,                       |\n");
	    printf(" \t\t\t\t\t  |  <4> Alphabet input are consider as wrong answer             |\n");
	    printf(" \t\t\t\t\t  ================================================================");
	    printf("\n\n");
	    printf("\n\n");
        printf("\n\n\n\t\t\t\t\t\t\tPress any key to continue......");
		getch();
        goto start;
        break;

    case 2:
    	system("cls");
		menu();
        break;

    default:
    	printf("\n\n");
    	printf("\n\n");
       printf("\n\n\t\t\t\t\t\t\t\t     Invalid Input\t");
		Sleep(1000);
        goto alpha;
    }

//  topics selection
start:
	system("cls");
	printf("\n\n");
	printf("\tThe Quiz Game...");
    printf("\n\n");
    printf("\n\n");
    quiztitle();
    printf("\n\t\t\t--------------------------------------------- TOPIC SECTION ---------------------------------------------------");
    printf("\n\n");
    printf("\t\t\t\t1) Basic computer \n\t\t\t\t2) Computer system \n\t\t\t\t3) Networking \n\t\t\t\t4) C-programming \n\t\t\t\t5) JavaScript \n\t\t\t\t6)Back");
    printf("\n\n\n\t\t\t\t\t\t\t\t\tEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        //  Basic computer quiz starts here
        system("cls");
        printf("\n\n");
		printf("\tAnd Here We go...");
	    printf("\n\n");
	    printf("\n\n");
	     printf("\n\t\t\t--------------------------------------------- Game Started ---------------------------------------------------");
        printf("\n\t\t\t\t________________________Q.no-1_______________________________\n");
        printf("\t\t\t\tWhich one is the first search engine in internet?\n\n");
        printf("\t\t\t\t 1) Google \n\t\t\t\t 2) Archie\n\t\t\t\t 3) Wais\n\t\t\t\t 4)  Altavista\n");
        printf("\t\t\t\tEnter your answer:");
    one:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto one;
            break;
        }

        printf("\t\t\t\t________________________Q.no-2_______________________________\n");
        printf("\t\t\t\t Where are the contents of your computer's hard drive indexed?\n\n");
        printf("\t\t\t\t 1) Yahoo! \n\t\t\t\t 2) Google\n\t\t\t\t 3) MSN \n\t\t\t\t 4) None of the above\n");
        printf("\t\t\t\tEnter your answer : ");
    two:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto two;
            break;
        }

        printf("\t\t\t\t________________________Q.no-3_______________________________\n");
        printf("\t\t\t\t Main circuit board in a computer is:\n\n");
        printf("\t\t\t\t 1) Decoder \n\t\t\t\t 2) Highlight\n\t\t\t\t 3) Select \n\t\t\t\t 4) Mother board\n");
        printf("\t\t\t\tEnter your answer : ");
    three:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto three;
            break;
        }

        printf("\t\t\t\t________________________Q.no-4_______________________________\n");
        printf("\t\t\t\t ISP stands for:\n\n");
        printf("\t\t\t\t 1) Internet Survey Period \n\t\t\t\t 2) Integrated Service Provider\n\t\t\t\t 3) Internet Security Protocol \n\t\t\t\t 4) Internet Service Provider\n");
        printf("\t\t\t\tEnter your answer : ");
    four:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto four;
            break;
        }

        printf("\t\t\t\t________________________Q.no-5_______________________________\n");
        printf("\t\t\t\t Internet Explorer is a:\n\n");
        printf("\t\t\t\t 1) Any person browsing the net \n\t\t\t\t 2) Web Browser\n\t\t\t\t 3) Graphing Package \n\t\t\t\t 4) News Reader\n");
        printf("\t\t\t\tEnter your answer : ");
    five:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto five;
            break;
        }

        printf("\t\t\t\t________________________Q.no-6_______________________________\n");
        printf("\t\t\t\t Lately you hear a clatter from your computer, especially when you load a program or call up information. What's going on? \n\n");
        printf("\t\t\t\t 1) It's infested with reindeer \n\t\t\t\t 2) Your hard disk may be headed for failure\n\t\t\t\t 3) A loose wire is hitting the cooling fanct \n\t\t\t\t 4) A loud metallic clatter is normal\n");
        printf("\t\t\t\tEnter your answer : ");
    six:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto six;
            break;
        }

        printf("\t\t\t\t________________________Q.no-7_______________________________\n");
        printf("\t\t\t\t The 'http' you type at the beginning of any site's address stands for:\n\n");
        printf("\t\t\t\t 1) HTML Transfer Technology Process\n\t\t\t\t 2)  Hyperspace Terms and Tech Protocol\n\t\t\t\t 3)  Hyperspace Techniques & Tech Progress\n\t\t\t\t 4) Hyper Text Transfer Protocol\n");
        printf("\t\t\t\tEnter your answer : ");
    seven:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto seven;
            break;
        }

        printf("\t\t\t\t________________________Q.no-8_______________________________\n");
        printf("\t\t\t\tWhich company created the most used networking software in the 1980's\n\n");
        printf("\t\t\t\t 1) Microsoft \n\t\t\t\t 2) Sun\n\t\t\t\t 3) IBM \n\t\t\t\t 4) Novell\n");
        printf("\t\t\t\tEnter your answer : ");
    eight:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto eight;
            break;
        }

        printf("\t\t\t\t________________________Q.no-9_______________________________\n");
        printf("\t\t\t\tWhich of the following operating systems is produced by IBM?\n\n");
        printf("\t\t\t\t 1) OS-2 \n\t\t\t\t 2) Windows\n\t\t\t\t 3) DOS \n\t\t\t\t 4) UNIX\n");
        printf("\t\t\t\tEnter your answer : ");
    nine:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto nine;
            break;
        }

        printf("\t\t\t\t________________________Q.no-10_______________________________\n");
        printf("\t\t\t\tWhich is the best search tool for finding We sites that have been handpicked and recommended by someone else?\n\n");
        printf("\t\t\t\t 1) Subject directories \n\t\t\t\t 2) Search engines\n\t\t\t\t 3) Meta-search engines \n\t\t\t\t 4) Discussion groups\n");
        printf("\t\t\t\tEnter your answer : ");
    ten:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto ten;
            break;
        }

        printf("\n\n\t\t\t\tEach question holds the value of 10 points\n");
        printf("\t\t\t\tYour score is %d", 10 * count);
        printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
		getch();
		goto start;
        
    case 2:
        system("cls");
        printf("\tAnd Here We go...");
	    printf("\n\n");
	    printf("\n\n");
	     printf("\n\t\t\t--------------------------------------------- Game Started ---------------------------------------------------");

        printf("\n\t\t\t\t________________________Q.no-1_______________________________\n");
        printf("\t\t\t\tWhich of the following statements correctly describes the microcomputer disk drive?\n\n");
        printf("\t\t\t\t 1)  A disk drive is used to transfer data to and from disks.\n\t\t\t\t 2)  The two types of disk drives are hard disks and flexible disks.\n\t\t\t\t 3) Hard disks are permanent storage devices.\n\t\t\t\t 4) All of these\n");
        printf("\t\t\t\tEnter your answer : ");
    eleven:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto eleven;
            break;
        }

        printf("\t\t\t\t________________________Q.no-2_______________________________\n");
        printf("\t\t\t\tRAM chips\n\n");
        printf("\t\t\t\t 1)  Store data indefinitely unless you delete it.\n\t\t\t\t 2)  Allow the computer to store data electronically\n\t\t\t\t 3)  Are always measured in thousand of bytes\n\t\t\t\t 4)  All of these\n");
        printf("\t\t\t\tEnter your answer : ");
    twelve:
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twelve;
            break;
        }

        printf("\t\t\t\t________________________Q.no-3_______________________________\n");
        printf("\t\t\t\t The CPU and memory are located on the\n\n");
        printf("\t\t\t\t 1) Keyboard \n\t\t\t\t 2) Graphics board\n\t\t\t\t 3) Sound board \n\t\t\t\t 4) Motherboard\n");
        printf("\t\t\t\tEnter your answer : ");
    thirteen:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirteen;
            break;
        }

        printf("\t\t\t\t________________________Q.no-4_______________________________\n");
        printf("\t\t\t\t The brain of any computer system is\n\n");
        printf("\t\t\t\t 1) CPU \n\t\t\t\t 2) Memory\n\t\t\t\t 3) ALU \n\t\t\t\t 4) Control unit\n");
        printf("\t\t\t\tEnter your answer : ");
    fourteen:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourteen;
            break;
        }

        printf("\t\t\t\t________________________Q.no-5_______________________________\n");
        printf("\t\t\t\t ALU stands for\n\n");
        printf("\t\t\t\t 1)  Algorithm and logical unit \n\t\t\t\t 2)  Arithmetic and logical unit\n\t\t\t\t 3) Arithmetic and logarithm unit\n\t\t\t\t 4) Algorithm and logarithm unit\n");
        printf("\t\t\t\tEnter your answer : ");
    fifteen:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fifteen;
            break;
        }

        printf("\t\t\t\t________________________Q.no-6_______________________________\n");
        printf("\t\t\t\t Which of the following is the main circuit-board of the system unit? \n\n");
        printf("\t\t\t\t 1) Control unit \n\t\t\t\t 2) Sound board\n\t\t\t\t 3) Motherboard \n\t\t\t\t 4) Graphics board\n");
        printf("\t\t\t\tEnter your answer : ");
    sixteen:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 3:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto sixteen;
            break;
        }

        printf("\t\t\t\t________________________Q.no-7_______________________________\n");
        printf("\t\t\t\t The 'http' you type at the beginning of any site's address stands for:\n\n");
        printf("\t\t\t\t 1) HTML Transfer Technology Process\n\t\t\t\t 2)  Hyperspace Terms and Tech Protocol\n\t\t\t\t 3)  Hyperspace Techniques & Tech Progress\n\t\t\t\t 4) Hyper Text Transfer Protocol\n");
        printf("\t\t\t\tEnter your answer : ");
    seventeen:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto seventeen;
            break;
        }

        printf("\t\t\t\t________________________Q.no-8_______________________________\n");
        printf("\t\t\t\tPCS are considered fourth-generation and contain\n\n");
        printf("\t\t\t\t 1) Microprocessors \n\t\t\t\t 2) Information\n\t\t\t\t 3) Vacuum tubes \n\t\t\t\t 4) Data\n");
        printf("\t\t\t\tEnter your answer : ");
    eighteen:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto eighteen;
            break;
        }

        printf("\t\t\t\t________________________Q.no-9_______________________________\n");
        printf("\t\t\t\tThe hardware in which data may be stored for a computer system is called\n\n");
        printf("\t\t\t\t 1) Memory \n\t\t\t\t 2) Control unit\n\t\t\t\t 3) Bus \n\t\t\t\t 4) Register\n");
        printf("\t\t\t\tEnter your answer : ");
    nineteen:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto nineteen;
            break;
        }

        printf("\t\t\t\t________________________Q.no-10_______________________________\n");
        printf("\t\t\t\tWhich bus is used to connect the monitor to the CPU?\n\n");
        printf("\t\t\t\t 1) SCSI bus \n\t\t\t\t 2) HACK bus\n\t\t\t\t 3) KISS bus\n\t\t\t\t 4) PCI\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty;
            break;
        }

        printf("\t\t\t\tEach question holds the value of 10 points\n");
        printf("\t\t\t\tYour score is %d", 10 * count);
        printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
		getch();
		goto start;

    case 3:
        system("cls");
        printf("\tAnd Here We go...");
	    printf("\n\n");
	    printf("\n\n");
	     printf("\n\t\t\t--------------------------------------------- Game Started ---------------------------------------------------");

        printf("\n\t\t\t\t________________________Q.no-1_______________________________\n");
        printf("\t\t\t\tWhat is the frequency range of the IEEE 802.11a standard?\n\n");
        printf("\t\t\t\t 1) 2.4Gbps \n\t\t\t\t 2) 5Gbps\n\t\t\t\t 3) 2.4GHz\n\t\t\t\t 4) 5GHz\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_one:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_one;
            break;
        }

        printf("\t\t\t\t________________________Q.no-2_______________________________\n");
        printf("\t\t\t\t What is the maximum distance running the lowest data rate for 802.11b?\n\n");
        printf("\t\t\t\t 1) About 100 feet \n\t\t\t\t 2) About 175 feet\n\t\t\t\t 3) About 300 feet \n\t\t\t\t 4) About 350 feet\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_two:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_two;
            break;
        }

        printf("\t\t\t\t________________________Q.no-3_______________________________\n");
        printf("\t\t\t\t What is the maximum distance with maximum data rate for 802.11a?\n\n");
        printf("\t\t\t\t 1) About 65-75 feet \n\t\t\t\t 2) About 90-100 feet\n\t\t\t\t 3) About 150 feet \n\t\t\t\t 4) Over 200 feet\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_three:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_three;
            break;
        }

        printf("\t\t\t\t________________________Q.no-4_______________________________\n");
        printf("\t\t\t\t What is the frequency range of the IEEE 802.11b standard?\n\n");
        printf("\t\t\t\t 1) 2.4Gbps \n\t\t\t\t 2) 5Gbps\n\t\t\t\t 3) 2.4GHz \n\t\t\t\t 4) 5GHz\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_four:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 3:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_four;
            break;
        }

        printf("\t\t\t\t________________________Q.no-5_______________________________\n");
        printf("\t\t\t\t You have a Cisco mesh network. What protocol allows multiple APs to connect with many redundant connections between nodes?\n\n");
        printf("\t\t\t\t 1) LWAPP \n\t\t\t\t 2) AWPP\n\t\t\t\t 3) STP \n\t\t\t\t 4) IEEE\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_five:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_five;
            break;
        }

        printf("\t\t\t\t________________________Q.no-6_______________________________\n");
        printf("\t\t\t\t Which layer 1 devices can be used to enlarge the area covered by a single LAN segment? \n\n");
        printf("\t\t\t\t 1) Switch\n\t\t\t\t 2) NIC\n\t\t\t\t 3) Hub and repeater\n\t\t\t\t 4) Repeater\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_six:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 3:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_six;
            break;
        }

        printf("\t\t\t\t________________________Q.no-7_______________________________\n");
        printf("\t\t\t\t Routers operate at layer _____. LAN switches operate at layer _____. Ethernet hubs operate at layer _____. Word processing operates at layer _____.\n\n");
        printf("\t\t\t\t 1) 3, 3, 1, 7\n\t\t\t\t 2) 3, 2, 1, none\n\t\t\t\t 3) 3, 2, 1, 7\n\t\t\t\t 4) 3, 3, 2, none\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_seven:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_seven;
            break;
        }

        printf("\t\t\t\t________________________Q.no-8_______________________________\n");
        printf("\t\t\t\tWhich of the following describe router functions?\n\n");
        printf("\t\t\t\t 1) Packet switching \n\t\t\t\t 2) Packet filtering\n\t\t\t\t 3) Internetwork communication \n\t\t\t\t 4) Path selection\n 5) All of the above \n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_eight:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 5\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 5\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 5\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 5\n");
            break;

        case 5:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_eight;
            break;
        }

        printf("\t\t\t\t________________________Q.no-9_______________________________\n");
        printf("\t\t\t\tWhy does the data communication industry use the layered OSI reference model?\n\n");
        printf("\t\t\t\t A) It divides the network communication process into smaller and simpler components, thus aiding component development, design, and troubleshooting. \n B) It enables equipment from different vendors to use the same electronic components, thus saving research and development funds.\n C) It supports the evolution of multiple competing standards and thus provides business opportunities for equipment manufacturers. \n D) It encourages industry standardization by defining what functions occur at each layer of the model.\n");
        printf("\t\t\t\t 1) A only \n\t\t\t\t 2) A and D\n\t\t\t\t 3) B and C \n\t\t\t\t 4) C only\n");
        printf("\t\t\t\tEnter your answer : ");
    twenty_nine:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto twenty_nine;
            break;
        }

        printf("\t\t\t\t________________________Q.no-10_______________________________\n");
        printf("\t\t\t\tA receiving host has failed to receive all of the segments that it should acknowledge. What can the host do to improve the reliability of this communication session?\n\n");
        printf("\t\t\t\t 1) Send a different source port number. \n\t\t\t\t 2) Restart the virtual circuit.\n\t\t\t\t 3) Decrease the sequence number. \n\t\t\t\t 4) Decrease the window size.\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty;
            break;
        }

        printf("\t\t\t\tEach question holds the value of 10 points\n");
        printf("\t\t\t\tYour score is %d", 10 * count);
 		printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
		getch();
		goto start;

    case 4:
        system("cls");
        printf("\tAnd Here We go...");
	    printf("\n\n");
	    printf("\n\n");
	     printf("\n\t\t\t--------------------------------------------- Game Started ---------------------------------------------------");
        
        printf("\n\t\t\t\t________________________Q.no-1_______________________________\n");
        printf("\t\t\t\tIdentify the incorrect file opening mode from the following. \n\n");
        printf("\t\t\t\t 1) r \n\t\t\t\t 2) w \n\t\t\t\t 3) x\n\t\t\t\t 4)  a\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_one:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 3:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_one;
            break;
        }

        printf("\t\t\t\t________________________Q.no-2_______________________________\n");
        printf("\t\t\t\tWhich of the following operator can be used to access value at address stored in a pointer variable?\n\n");
        printf("\t\t\t\t 1) * \n\t\t\t\t 2) #\n\t\t\t\t 3) && \n\t\t\t\t 4) @ \n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_two:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_two;
            break;
        }

        printf("\t\t\t\t________________________Q.no-3_______________________________\n");
        printf("\t\t\t\t An operation with only one operand is called unary operation.\n\n");
        printf("\t\t\t\t 1) Yes \n\t\t\t\t 2) An operation with two operand is called unary operation\n\t\t\t\t 3)  An operation with unlimited operand is called unary operation \n\t\t\t\t 4) None of the above\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_three:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_three;
            break;
        }

        printf("\t\t\t\t________________________Q.no-4_______________________________\n");
        printf("\t\t\t\t The maximum combined length of the command-line arguments as well as the spaces between adjacent arguments is – a) 120 characters, b) 56 characters, c) Vary from one OS to another\n\n");
        printf("\t\t\t\t 1) a\n\t\t\t\t 2) a,b\n\t\t\t\t 3) a,b,c \n\t\t\t\t 4) c\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_four:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_four;
            break;
        }

        printf("\t\t\t\t________________________Q.no-5_______________________________\n");
        printf("\t\t\t\t C is a:\n\n");
        printf("\t\t\t\t 1) general-purpose computer programming language \n\t\t\t\t 2) procedural computer programming language\n\t\t\t\t 3) multi-paradigm computer programming language \n\t\t\t\t 4)  All the above\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_five:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_five;
            break;
        }

        printf("\t\t\t\t________________________Q.no-6_______________________________\n");
        printf("\t\t\t\t C first appeared in \n\n");
        printf("\t\t\t\t 1)  1972 \n\t\t\t\t 2)  1974\n\t\t\t\t 3) 1982 \n\t\t\t\t 4) 1984\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_six:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_six;
            break;
        }

        printf("\t\t\t\t________________________Q.no-7_______________________________\n");
        printf("\t\t\t\t  Filename extension of C language is\n\n");
        printf("\t\t\t\t 1) .cp\n\t\t\t\t 2) cl\n\t\t\t\t 3)   .c\n\t\t\t\t 4)  All the above\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_seven:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 3:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_seven;
            break;
        }

        printf("\t\t\t\t________________________Q.no-8_______________________________\n");
        printf("\t\t\t\t C influenced by\n\n");
        printf("\t\t\t\t 1) Assembly language \n\t\t\t\t 2) FORTRAN\n\t\t\t\t 3)  ALGOL 68 \n\t\t\t\t 4) All the above\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_eight:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_eight;
            break;
        }

        printf("\t\t\t\t________________________Q.no-9_______________________________\n");
        printf("\t\t\t\t C influenced\n\n");
        printf("\t\t\t\t 1)  C++, C#, and Objective-C \n\t\t\t\t 2) Java and JavaScript\n\t\t\t\t 3) Perl, PHP, and Python \n\t\t\t\t 4) All the above\n");
        printf("\t\t\t\tEnter your answer : ");
    thirty_nine:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto thirty_nine;
            break;
        }

        printf("\t\t\t\t________________________Q.no-10_______________________________\n");
        printf("\t\t\t\tWho is father of C Language ?\n\n");
        printf("\t\t\t\t 1)Bjarne Stroustrup \n\t\t\t\t 2)  Dennis Ritchie\n\t\t\t\t 3) Dr. E.F. Codd\n\t\t\t\t 4)  James A. Gosling\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty;
            break;
        }

        printf("\t\t\t\tEach question holds the value of 10 points\n");
        printf("\t\t\t\tYour score is %d", 10 * count);
        printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
		getch();
		goto start;

    case 5:
        system("cls");
        printf("\tAnd Here We go...");
	    printf("\n\n");
	    printf("\n\n");
	     printf("\n\t\t\t--------------------------------------------- Game Started ---------------------------------------------------");
        
        printf("\n\t\t\t\t________________________Q.no-1_______________________________\n");
        printf("\t\t\t\tWhich of the following is correct about features of JavaScript?\n\n");
        printf("\t\t\t\t 1) JavaScript is a lightweight, interpreted programming language\n\t\t\t\t 2) JavaScript is designed for creating network-centric applications.\n\t\t\t\t 3) JavaScript is complementary to and integrated with Java.\n\t\t\t\t 4) All of the above.\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_one:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_one;
            break;
        }

        printf("\t\t\t\t________________________Q.no-2_______________________________\n");
        printf("\t\t\t\tHow can you get the total number of arguments passed to a function?\n\n");
        printf("\t\t\t\t 1) Using args.length property\n\t\t\t\t 2) Using arguments.length property\n\t\t\t\t 3) Both of the above.\n\t\t\t\t 4)  None of the above.\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_two:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_two;
            break;
        }

        printf("\t\t\t\t________________________Q.no-3_______________________________\n");
        printf("\t\t\t\t Which built-in method removes the last element from an array and returns that element?\n\n");
        printf("\t\t\t\t 1) last() \n\t\t\t\t 2) get()\n\t\t\t\t 3) pop()\n\t\t\t\t 4) None of the above.\n");
        printf("\t\t\t\tEnter your answer :");
    fourty_three:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 3:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_three;
            break;
        }

        printf("\t\t\t\t________________________Q.no-4_______________________________\n");
        printf("\t\t\t\t Which built-in method returns the string representation of the number's value?\n\n");
        printf("\t\t\t\t 1) toValue() \n\t\t\t\t 2)  toNumber()\n\t\t\t\t 3) toString() \n\t\t\t\t 4) None of the above.\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_four:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        case 3:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 3\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_four;
            break;
        }

        printf("\t\t\t\t________________________Q.no-5_______________________________\n");
        printf("\t\t\t\t Which of the following function of Number object defines how many total digits to display of a number?\n\n");
        printf("\t\t\t\t 1) toExponential()\n\t\t\t\t 2)  toFixed()\n\t\t\t\t 3)  toLocaleString()\n\t\t\t\t 4) toPrecision()\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_five:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_five;
            break;
        }

        printf("\t\t\t\t________________________Q.no-6_______________________________\n");
        printf("\t\t\t\t Which of the following function of String object returns the index within the calling\n");
         printf("\t\t\t\t String object of the first occurrence of the specified value? \n\n");
        printf("\t\t\t\t 1) substr() \n\t\t\t\t 2) search()\n\t\t\t\t 3)  lastIndexOf() \n\t\t\t\t 4)  indexOf()\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_six:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_six;
            break;
        }

        printf("\t\t\t\t________________________Q.no-7_______________________________\n");
        printf("\t\t\t\t Which of the following function of String object creates an HTML anchor that is used as a hypertext target?\n\n");
        printf("\t\t\t\t 1) anchor()\n\t\t\t\t 2) link()\n\t\t\t\t 3) blink()\n\t\t\t\t 4) big()\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_seven:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_seven;
            break;
        }

        printf("\t\t\t\t________________________Q.no-8_______________________________\n");
        printf("\t\t\t\tWhich of the following function of String object causes a string to be italic, as if it were in an <i> tag?\n\n");
        printf("\t\t\t\t 1) fixed()\n\t\t\t\t 2) fontcolor()\n\t\t\t\t 3) fontsize()\n\t\t\t\t 4)  italics()\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_eight:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 4\n");
            break;

        case 4:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_eight;
            break;
        }

        printf("\t\t\t\t________________________Q.no-9_______________________________\n");
        printf("\t\t\t\tWhich of the following function of Array object joins all elements of an array into a string?\n\n");
        printf("\t\t\t\t 1) concat() \n\t\t\t\t 2)  join()\n\t\t\t\t 3)  pop() \n\t\t\t\t 4)  map()\n");
        printf("\t\t\t\tEnter your answer : ");
    fourty_nine:
        scanf("%d", &ans);
        fgetc(stdin);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 2:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 2\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fourty_nine;
            break;
        }

        printf("\t\t\t\t________________________Q.no-10_______________________________\n");
        printf("\t\t\t\t Which of the following function of Array object represents the source code of an object?\n\n");
        printf("\t\t\t\t 1) toSource() \n\t\t\t\t 2) splice()\n\t\t\t\t 3)  toString()\n\t\t\t\t 4) unshift()\n");
        printf("\t\t\t\tEnter your answer : ");
    fifty:
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
            printf("\n\t\t\t\tCorrect answer\n");
            count++;
            break;

        case 2:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 3:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        case 4:
            printf("\n\t\t\t\tWrong answer\n");
            printf("\t\t\t\tCorrect answer option is 1\n");
            break;

        default:
            printf("\t\t\t\tInvalid Input please reenter your answer");
            goto fifty;
            break;
        }

        printf("\t\t\t\tEach question holds the value of 10 points\n");
        printf("\t\t\t\tYour score is %d", 10 * count);
        printf("\n\n\n\t\t\t\t\t\t\t\t\tPress any key to continue......");
		getch();
		goto start;
		
		
    case 6: goto alpha;
}
return 0;
}
