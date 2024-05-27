#include "finalround.h"
#include <stdio.h>

#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>
#include <unistd.h>
#include <stdbool.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int length;
int bend_no;
int len;
char key;
void wordgame();
void record();
void load();
int life;
void Delay(long double);
void Move();
void Food();
int Score();
void r2title();
void gotoxy(int x, int y);
void GotoXY(int x, int y);
void Bend();
void Boarder();
void Down();
void Left();
void About();
void Up();
void Right();
void ExitGame();
int Scoreonly();
void awtitle();
void r1();
void Start();
void r1title();
void r2abt();
char p[20];
int generaterandomnuber(int n)
{
    srand(time(NULL)); // srd takes seed as input and is defined into stdlib.h
    return rand() % n;
}
// for rock paper scissors comparision
int win(char comp, char p1)
{

    if (comp == p1)
    {
        return -1;
    }
    else if ((comp == 'r') && (p1 == 's'))
    {

        return 1;
    }
    else if ((p1 == 'r') && (comp == 's'))
    {
        return 0;
    }
    else if ((comp == 'p') && (p1 == 'r'))
    {

        return 1;
    }
    else if ((p1 == 'p') && (comp == 'r'))
    {
        return 0;
    }
    else if ((comp == 's') && (p1 == 'p'))
    {

        return 1;
    }
    else if ((p1 == 's') && (comp == 'p'))
    {
        return 0;
    }
}
struct coordinate
{
    int x;
    int y;
    int direction;
};

typedef struct coordinate coordinate;

coordinate head, bend[500], food, body[30];
int i,j;
int aworld()
{
	system("cls");
    int choice;

    char ch;

    char playerchar, compchar;
    int p1score = 0, compscore = 0;
    int temp;
    char dict[] = {'r', 'p', 's'};
    printf("\n");
    printf("\n");
    printf("\n");

    Sleep(400);
    system("color A");
   	printf("\n\n");
    printf("\n\n");
    printf("    !!!!!!!!!! !!!!!!!!   !!!           !!! !!!!!!!!!  !!!!     !!! !!!!!!!!  !!!!      !!! !!!!!!!!!!! !!!   !!!  !!!!!!!!!!    !!!!!!!!!!!  !!!    !!!  !!!!!!!!!   \n");
    printf("    !!!    !!! !!!     !!! !!!         !!!  !!!        !!!!     !!! !!!       !!!!!!    !!!     !!!     !!!   !!!  !!!     !!!   !!!     !!!  !!!    !!!  !!!          \n");
    printf("    !!!    !!! !!!     !!!  !!! 0   0 !!!   !!!        !! !!!   !!! !!!       !!! !!!   !!!     !!!     !!!   !!!  !!!     !!!   !!!     !!!  !!!    !!!  !!!          \n");
    printf("    !!!!!!!!!! !!!     !!!   !!!     !!!    !!!!!!!!   !!! !!!  !!! !!!!!!!   !!!  !!!  !!!     !!!     !!!   !!!  !!!!!!!!!     !!!     !!!  !!!    !!!  !!!!!!!!!   \n");
    printf("    !!!    !!! !!!     !!!    !!!   !!!     !!!        !!!  !!! !!! !!!       !!!   !!! !!!     !!!     !!!   !!!  !!!    !!!    !!!     !!!  !!!    !!!        !!!   \n");
    printf("    !!!    !!! !!!     !!!     !!! !!!      !!!        !!!   !!!!!! !!!       !!!    !!!!!!     !!!     !!!   !!!  !!!     !!!   !!!     !!!  !!!    !!!        !!!   \n");
    printf("    !!!    !!! !!!!!!!!!        !!!!!       !!!!!!!!!  !!!     !!!! !!!!!!!!  !!!     !!!!!     !!!     !!!!!!!!!  !!!      !!!  !!!!!!!!!!!  !!!!!!!!!!  !!!!!!!!!   \n\n");
    Sleep(800);
    printf("\t\t\t\t\t\t !!!   !!!   !!!  !!!!!!!!!!!!  !!!!!!!!!!!    !!!         !!!!!!!!!!!   !  \n");
    printf("\t\t\t\t\t\t !!!   !!!   !!!  !!!      !!!  !!!     !!!    !!!         !!!      !!!  !  \n");
    printf("\t\t\t\t\t\t !!!   !!!   !!!  !!!      !!!  !!!     !!!    !!!         !!!      !!!  !  \n");
    printf("\t\t\t\t\t\t !!!   !!!   !!!  !!!      !!!  !!!!!!!!!!!    !!!         !!!      !!!  !  \n");
    printf("\t\t\t\t\t\t !!!   !!!   !!!  !!!      !!!  !!!      !!!   !!!         !!!      !!!  !  \n");
    printf("\t\t\t\t\t\t !!!   !!!   !!!  !!!      !!!  !!!       !!!  !!!         !!!      !!!  !  \n");
    printf("\t\t\t\t\t\t !!!!!!!!!!!!!!!  !!!!!!!!!!!!  !!!        !!! !!!!!!!!!!  !!!!!!!!!!!   O \n");
    Sleep(2000);
    system("cls");
    system("color 4");
    printf("\n");
    printf("\n"); 
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    About();

    printf("\n\n\n\n\t\t\t\t\t-Enter 1 to join the journey of  the Adventerous world\n\t\t\t\t\t-Enter 2 to quit the game\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tEnter  : ");
    scanf("%d", &choice);
    fgetc(stdin);
    switch (choice)
    {
    case 1:
        Start();
        break;

    case 2:
        printf("Add function to return the Selecting");
        break;

    default:

        printf("Invalid comand!");
        system("color 1");
        Sleep(1000);
        system("cls");
        main();
    }

    printf("\t\t\t\t \tPress any key to start! ");
    getch();
    system("cls");
    system("color 1");

    r1title();

    printf("\t\t\t\t\t\t\t ___________________________________\n");
    printf("\t\t\t\t\t\t\t|.                                  |\n");
    printf("\t\t\t\t\t\t\t|.    *CHHOOSE 1 FOR ROCK   | 0 |   |\n");
    printf("\t\t\t\t\t\t\t|.                                  |\n");
    printf("\t\t\t\t\t\t\t|.    *CHOOSE  2 FOR PAPER  |/ /|   |\n");
    printf("\t\t\t\t\t\t\t|.                                  |\n");
    printf("\t\t\t\t\t\t\t|.   *CHOOSE  3 FOR SCISSOR |>o |   |\n");
    printf("\t\t\t\t\t\t\t|.                                  |\n");
    printf("\t\t\t\t\t\t\t|.__________________________________|\n");
    printf("\n");
	int i;
    for ( i = 0; i < 3; i++)
    {

        printf("\t\t\t%s 's turn:  ", p);
        scanf("\t\t\t%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("\t\t\tYou  choose %c \n   ", playerchar);

        printf("\t\t\tcomputer's turn \n");
        temp = generaterandomnuber(3) + 1;
        compchar = dict[temp - 1];
        printf("\t\t\t Computer choose  %c  \n  ", compchar);

        // comparing the score
        if (win(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("\t\t\t\t\t\t\t\t\t\t__________________________\n");
            printf("\t\t\t\t\t\t\t\t\t\t|computer is taking lead |\n ");
            printf("\t\t\t\t\t\t\t\t\t\t|%s= %d \n               |\n", p, p1score);
            printf("\t\t\t\t\t\t\t\t\t\t|computer =%d  \n        |\n", compscore);
            printf("\t\t\t\t\t\t\t\t\t\t|________________________|\n");
            printf("\n");
            printf("\n");
        }
        else if (win(compchar, playerchar) == -1)
        {
            compscore += 1;
            p1score += 1;
            if (p1score == compscore)
            {

                printf("\t\t\t\t\t\t\t\t\t\t______________________\n");
                printf("\t\t\t\t\t\t\t\t\t\t|Its a draw          |\n ");
                printf("\t\t\t\t\t\t\t\t\t\t|%s= %d \n           |\n", p, p1score);
                printf("\t\t\t\t\t\t\t\t\t\t|computer =%d  \n    |\n", compscore);
                printf("\t\t\t\t\t\t\t\t\t\t|____________________|\n");
                printf("\n");
                printf("\n");
            }
            else if (p1score > compscore)
            {
                printf("\t\t\t\t\t\t\t\t\t\t\t\t__________________________\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|you ARE TAKING THE LEAD  |\n ");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|%s= %d                   |\n", p, p1score);
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|computer =%d             |\n ", compscore);
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|_________________________|\n");
                printf("\n");
                printf("\n");
            }
            else
            {
                printf("\t\t\t\t\t\t\t\t\t\t\t\t _____________________________\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|COMPUTER IS TAKING THE LEAD  |\n ");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|%s= %d                       |\n ", p, p1score);
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|computer =%d                 |\n ", compscore);
                printf("\t\t\t\t\t\t\t\t\t\t\t\t|_____________________________|\n");
                printf("\n");
                printf("\n");
            }
        }

        else
        {
            p1score += 1;
            printf("\t\t\t\t\t\t\t\t\t\t\t\t _________________________\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t|You are taking lead      |\n ");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t|%s= %d                   |\n ", p, p1score);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t|computer =%d             |\n ", compscore);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t|_________________________|\n");
        }
    }
    Sleep(500);
    system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t_________Total Score_______\n");
    printf("\t|%s's score=%d            |\n", p, p1score);
    printf("\t|comp score=%d            |\n", compscore);
    printf("\t|_________________________|\n");
    if (p1score > compscore || p1score == compscore)
    {
        system("color 2");
        Sleep(700);
        printf("\n");
        printf("\n");

        printf("\t_______________________________________(: *|C | O | N | G | R | A | T | U | L | A| T | I | O | N | S|* :)_______________________________________\n");
        printf("\n");
        Sleep(700);
        printf("\t\t\tCongratulations, you have won the first round of the Round of Luck!\n");
        Sleep(700);
        printf("\t\t\tIt looks like luck was on your side this time. You  have earned the right to continue on to the next round.\n");
        printf("\t\t\tGood luck as you progress through the rest of the game!\n");
        Sleep(700);
        printf("\t\t\tThank you for playing and we hope you have a great time in Adventurous World.\n");
        Sleep(700);

        printf("\n");
        Sleep(700);
        printf("\t\t\tTo continue to the next round, simply press any key on your keyboard......\n");
        if (getch() == 27)
            exit(0);

        system("cls");

        char key;

        r2abt();

        system("cls");

        length = 5;

        head.x = 25;

        head.y = 20;

        head.direction = RIGHT;

        Boarder();

        Food(); // to generate food coordinates initially

        life = 3; // number of extra lives

        bend[0] = head;

        Move(); // initialing initial bend coordinate
    }
    else
    {
        Sleep(700);
        printf("\n");
        printf("\n");
         printf("\n\n");

        printf("\t\t_____________________________________________(::::*SAD!!:::::)____________________________________________________________\n");
        printf("\n\n");
        printf("\t\t\t\tUnfortunately, you have been eliminated from the Round of Luck                      \n ");
        printf("\t\t\t\tand will not be able to progress to any further levels in Adventurous World.                      \n ");
        printf("\t\t\t\t Better luck next time! Thank you for playing, and we hope you had fun.                      \n ");
        printf("\t\t\t\t  We hope to see you again soon for another exciting adventure!                     \n ");
        printf("\n");
        Sleep(5000);
        system("cls");
        main();
    }

    return 0;
}
void r1title()
{
    system("color 0b");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(700);

    printf("\t\t\t\t  ::::::   :::::: ::  :: ::     :: ::::::     :::::: ::::::    ::     ::  :: ::::::: ::  ::           \n");
    printf("\t\t\t\t  ::  ::   ::  :: ::  :: :: ::  :: ::   ::    ::  :: ::        ::     ::  :: ::      ::  ::                \n");
    printf("\t\t\t\t  ::::::   ::  :: ::  :: ::  :: :: ::   :: __ ::  :: :::::: __ ::     ::  :: ::      ::::                  \n");
    printf("\t\t\t\t  ::   ::  ::  :: ::  :: ::   :::: ::   ::    ::  :: ::        ::     ::  :: ::      ::  ::              \n");
    printf("\t\t\t\t  ::    :: :::::: :::::: ::     :: ::::::     :::::: ::        :::::: :::::: :: :::: ::   ::               \n");
    printf("\t\t\t\t ___________________________________________________________________________________________\n");
    printf("\n");
    printf("\n");
}
void r1()
{
    Sleep(800);
    system("color 9");
    printf("\t\t\t Welcome %s to the  First Round of Luck level of Adventurous World! \n  ", p);
    Sleep(500);
    printf("\t\t\t In this classic game of scissor, paper, rock, you'll face off against the computer in a series of rounds\n .");
    Sleep(500);
    printf("\t\t\t The rules are simple: scissor beats paper, paper beats rock, and rock beats scissor. \n ");
    Sleep(500);
    printf("\t\t\t If you win or draw against the computer, you'll move on to the next round.\n ");

    printf("\n");
    Sleep(500);
    printf("\t\t\t Can you outsmart the computer and emerge victorious in the Round of Luck? Let's find out! Good luck and have fun! \n \n ");
    printf("\n");
    Sleep(500);
    printf("\n");
}
void Start()
{
    system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(700);
    printf("\t\t\t\t\t\t\t\tGreetings adventurer!! \n ");
    printf("\n\n");
    printf("\n\n");
    Sleep(700);
    printf("\t\t\t\t\tBefore we begin our journey through the Adventurous World,\n ");
    Sleep(700);
    printf("\t\t\t\t\tplease tell us your name so we may properly address you on your journey:   ");
    scanf(" \t %s", p);
    system("cls");

    r1title();
    r1();
}
void About()
{

    printf("\t\t\t___________________________________________________ABOUT THE GAME____________________________________________________________\n");
    printf("\n");
    printf("\n");
    Sleep(700);
    fflush(stdout);
    printf("\t\t\t Welcome to the Adventurous World,A place where you will embark on a journey of challenges and penalties,                                  \n");
    Sleep(700);
    printf("\t\t\t where you will struggle and overcome to come out victorious.                                                                    \n \n");
    Sleep(1000);
    fflush(stdout);
    printf("\t\t\t As you enter this world, you will be facing rounds of diverse games, each one designed                                               \n");
    Sleep(700);
    printf("\t\t\t to test different skills and abilities                                                                                              \n");
    Sleep(700);
    printf("\t\t\t Each round you pass will bring you closer to the ultimate goal of completing the adventure.                              \n \n");
    fflush(stdout);
    Sleep(1000);
    printf("\t\t\t As you proceed through the rounds, you will encounter unknown territories and unexpected obstacles.          \n");
    Sleep(700);
    printf("\t\t\t So Be ready to face new challenges, and adapt to changing situations as you navigate your way through this exciting game          \n");
    Sleep(700);
    printf("\t\t\t be ware, one wrong move could lead to elimination,  So stay sharp  !                         \n");
    Sleep(1000);
    fflush(stdout);
    printf("\n  ");
    printf("\n");

    printf("\t\t\t Are you ready to test your skills and luck in a series of challenging and exciting rounds?                                          \n ");
    Sleep(700);
    printf("\t\t\t Play now and see just how far you can go!                                                                                          \n ");
    Sleep(700);

    printf("\n");
    printf("\n");
    printf("\t\t\t___________________________________________________________________________________________________________________________________\n");
}

void Move()
{
    int a, i;

    do
    {

        Food();
        fflush(stdin);

        len = 0;

        for (i = 0; i < 30; i++)

        {

            body[i].x = 0;

            body[i].y = 0;

            if (i == length)

                break;
        }

        Delay(length);

        Boarder();

        if (head.direction == RIGHT)

            Right();

        else if (head.direction == LEFT)

            Left();

        else if (head.direction == DOWN)

            Down();

        else if (head.direction == UP)

            Up();

        ExitGame();

    } while (!kbhit());

    a = getch();

    if (a == 27)

    {

        system("cls");

        exit(0);
    }
    key = getch();

    if ((key == RIGHT && head.direction != LEFT && head.direction != RIGHT) || (key == LEFT && head.direction != RIGHT && head.direction != LEFT) || (key == UP && head.direction != DOWN && head.direction != UP) || (key == DOWN && head.direction != UP && head.direction != DOWN))

    {

        bend_no++;

        bend[bend_no] = head;

        head.direction = key;

        if (key == UP)

            head.y--;

        if (key == DOWN)

            head.y++;

        if (key == RIGHT)

            head.x++;

        if (key == LEFT)

            head.x--;

        Move();
    }

    else if (key == 27)

    {

        system("cls");

        exit(0);
    }

    else

    {

        printf("\a");

        Move();
    }
}

void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a, b);
}

void Down()
{
    int i;
    for (i = 0; i <= (head.y - bend[bend_no].y) && len < length; i++)
    {
        GotoXY(head.x, head.y - i);
        {
            if (len == 0)
                printf("v");
            else
                printf("=");
        }
        body[len].x = head.x;
        body[len].y = head.y - i;
        len++;
    }
    Bend();
    if (!kbhit())
        head.y++;
}
void Delay(long double k)
{
    Score();
    long double i;
    for (i = 0; i <= (10000000); i++)
        ;
}
void ExitGame()
{
    int i, check = 0;
    for (i = 4; i < length; i++) // starts with 4 because it needs minimum 4 element to touch its own body
    {
        if (body[0].x == body[i].x && body[0].y == body[i].y)
        {
            check++; // check's value increases as the coordinates of head is equal to any other body coordinate
        }
        if (i == length || check != 0)
            break;
    }
    if (head.x <= 10 || head.x >= 70 || head.y <= 10 || head.y >= 30 || check != 0)
    {
        life--;
        if (life > 0)
        {
            head.x = 25;
            head.y = 20;
            bend_no = 0;
            head.direction = RIGHT;
            Move();
        }
        else
        {
            printf("\t\t\t\tYou have no more life! ");
            system("cls");

            if (Scoreonly() > 9)
            {
                system("color 2");
                Sleep(500);
                printf("\n");
                printf("\n");

                printf("\t __________________________________________(: *|C | O | N | G | R | A | T | U | L | A| T | I | O | N | S|* :)__________________________________________________\n");
                printf("\n");
                Sleep(700);
                printf("\t\t\tCongratulations on winning the Round of Hunger!\n");
                Sleep(700);
                printf("\t\t\tYou have proven yourself to be a skilled player and \n");
                Sleep(700);
                printf("\t\t\t\thave earned the right to move on to the next round of the game.\n");
                Sleep(700);
                printf("\t\t\tYour strategy and quick move have paid off, and you should be proud of your accomplishment.\n");
                Sleep(700);
                printf("\t\t\tYou have successfully hunted enough food to move on to the next round, and we look forward to seeing you there.\n");
                Sleep(700);
                printf("\t\t\tWe hope you have a great time in the rest of Adventurous World and\n");
                Sleep(700);
                printf("\t\t\tWish you the best of luck as you progress through the game. Well done!\n");
                Sleep(1000);
                printf("\n \n ");

                printf("\t\t\tAre you ready to face the new round ?? \n \n");
                Sleep(500);

                printf("\t\t\t\tpress any key for next round\n");
                getch();

                system("cls");
                system("color 3");
                wordgame();
            }

            else
            {

                Sleep(700);
                printf("\n");
                printf("\n");

                printf("\t________________________________________________________________(::::*SAD!!:::::)____________________________________________________________________________\n");
                printf("\t\t\tUnfortunately, you have been eliminated from the Round of Hunger \n");
                printf("\t\t\tbecause you were unable to hunt enough food to move on to the next round\n");
                printf("\t\t\tWhile it is unfortunate that you were unable to progress further in the game,\n");
                printf("\t\t\twe hope that you have enjoyed your time in Adventurous World and appreciate your participation\n");
                printf("\t\t\tThank you for playing, and we hope you will have the opportunity to try again in the future.\n");
                printf("\t\t\tBetter luck next time!\n");
                printf("\t\t\t\n");
                Sleep(5000);
                main();
            }
        }
    }
}

void Food()
{
    if (head.x == food.x && head.y == food.y)
    {
        length++;
        time_t a;
        a = time(0);
        srand(a);
        food.x = rand() % 70;
        if (food.x <= 10)
            food.x += 11;
        food.y = rand() % 30;
        if (food.y <= 10)

            food.y += 11;
    }
    else if (food.x == 0) /*to create food for the first time coz global variable are initialized with 0*/
    {
        food.x = rand() % 70;
        if (food.x <= 10)
            food.x += 11;
        food.y = rand() % 30;
        if (food.y <= 10)
            food.y += 11;
    }
}
void Left()
{
    int i;
    for (i = 0; i <= (bend[bend_no].x - head.x) && len < length; i++)
    {
        GotoXY((head.x + i), head.y);
        {
            if (len == 0)
                printf("<");
            else
                printf("=");
        }
        body[len].x = head.x + i;
        body[len].y = head.y;
        len++;
    }
    Bend();
    if (!kbhit())
        head.x--;
}
void Right()
{
    int i;
    for (i = 0; i <= (head.x - bend[bend_no].x) && len < length; i++)
    {
        // GotoXY((head.x-i),head.y);
        body[len].x = head.x - i;
        body[len].y = head.y;
        GotoXY(body[len].x, body[len].y);
        {
            if (len == 0)
                printf(">");
            else
                printf("=");
        }
        /*body[len].x=head.x-i;
        body[len].y=head.y;*/
        len++;
    }
    Bend();
    if (!kbhit())
        head.x++;
}
void Bend()
{
    int i, j, diff;
    for (i = bend_no; i >= 0 && len < length; i--)
    {
        if (bend[i].x == bend[i - 1].x)
        {
            diff = bend[i].y - bend[i - 1].y;
            if (diff < 0)
                for (j = 1; j <= (-diff); j++)
                {
                    body[len].x = bend[i].x;
                    body[len].y = bend[i].y + j;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
            else if (diff > 0)
                for (j = 1; j <= diff; j++)
                {
                    /*GotoXY(bend[i].x,(bend[i].y-j));
                    printf("*");*/
                    body[len].x = bend[i].x;
                    body[len].y = bend[i].y - j;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
        }
        else if (bend[i].y == bend[i - 1].y)
        {
            diff = bend[i].x - bend[i - 1].x;
            if (diff < 0)
                for (j = 1; j <= (-diff) && len < length; j++)
                {
                    /*GotoXY((bend[i].x+j),bend[i].y);
                    printf("*");*/
                    body[len].x = bend[i].x + j;
                    body[len].y = bend[i].y;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
            else if (diff > 0)
                for (j = 1; j <= diff && len < length; j++)
                {
                    /*GotoXY((bend[i].x-j),bend[i].y);
                    printf("*");*/
                    body[len].x = bend[i].x - j;
                    body[len].y = bend[i].y;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
        }
    }
}
void Boarder()
{
    system("cls");
    int i;
    GotoXY(food.x, food.y); /*displaying food*/
    printf("O");
    for (i = 10; i < 71; i++)
    {
        GotoXY(i, 10);
        printf("!");
        GotoXY(i, 30);
        printf("!");
    }
    for (i = 10; i < 31; i++)
    {
        GotoXY(10, i);
        printf("!");
        GotoXY(70, i);
        printf("!");
    }
}
void r2title()
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(700);

    system("color C");
    printf("\t\t\t ::::::    :::::: ::  :: ::     :: ::::::     :::::: ::::::    ::   :: ::  :: ::      :: ::::::     :::::: ::::::   \n");
    printf("\t\t\t ::  ::    ::  :: ::  :: :: ::  :: ::   ::    ::  :: ::        ::   :: ::  :: :: ::   :: ::         ::     ::  ::     \n");
    printf("\t\t\t ::::::    ::  :: ::  :: ::  :: :: ::   :: __ ::  :: :::::: __ ::::::: ::  :: ::  ::  :: ::  :::::: :::::: ::::::                \n");
    printf("\t\t\t ::   ::   ::  :: ::  :: ::   :::: ::   ::    ::  :: ::        ::   :: ::  :: ::    :::: ::  ::  :: ::     ::   ::     \n");
    printf("\t\t\t ::    ::  :::::: :::::: ::     :: ::::::     :::::: ::        ::   :: :::::: ::      :: ::::::  :: :::::: ::    ::       \n");
    printf("\t\t\t ___________________________________________________________________________________________________________________\n");
    printf("\n");
    printf("\n");
} // GotoXY(10,12);

void r2abt()
{
    Sleep(800);
    r2title();
    printf("\t\t\t Welcome %s  to the Round of Hunger! \n  ", p);
    Sleep(700);
    printf("\t\t\t In this round, you will take control of a snake and guide it through a series of obstacles, \n ");
    Sleep(700);
    printf("\t\t\t collecting food along the way to keep its hunger at bay. As the snake grows longer, \n ");
    Sleep(700);
    printf("\t\t\t it will become more difficult to navigate through the obstacles and avoid running into walls or its own body.\n ");
    Sleep(700);
    printf("\n ");
    printf("\n ");
    printf("\n ");

    Sleep(500);
    printf("\t\t\tCONDITION:\n  ");
    Sleep(500);
    printf("\t\t\tIn this round, you are given three lives and   \n  ");
    Sleep(500);
    printf("\t\t\tmust score at least 10 points in order to move on to the next round.  \n  ");
    Sleep(500);
    printf("\t\t\tIf you are unable to score 10 points before losing all three of your lives,  \n ");
    Sleep(500);
    printf("\t\t\tyou will be eliminated from the game. \n  ");
    printf("\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(500);
    printf("\t\t\t Be sure to use your skills and strategy to your advantage and \n ");
    Sleep(500);
    printf("\t\t\tdo your best to earn a place in the next round of the game.\n ");
    Sleep(500);
    printf("\t\t\tGood luck, and we hope you have a great time in the Round of Hunger!\n ");

    Sleep(500);
    printf("\n");
    printf("\n");
    printf("\t\t\tPress any key to go");
    getch();

    system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(700);
    printf("\t\t\tThe game is starting now!..................... \n \n");
    Sleep(700);
    printf("\t\t\tUse the arrow keys to control the movement of the snake \n \n ");
    Sleep(700);
    printf("\t\t\tpress any key if you need to hold the snake \n \n ");
    Sleep(700);
    printf("\t\t\tThe snake will be moving quickly, so be ready to react and make sharp turns as needed. \n ");

    Sleep(4000);
    system("cls");
}

int Score()
{
    int score;
    GotoXY(20, 8);
    score = length - 5;
    printf("SCORE : %d", (length - 5));
    score = length - 5;
    GotoXY(50, 8);
    printf("Life : %d", life);
    return score;
}
int Scoreonly()
{
    int score = Score();
    system("cls");
    return score;
}
void Up()
{
    int i;
    for (i = 0; i <= (bend[bend_no].y - head.y) && len < length; i++)
    {
        GotoXY(head.x, head.y + i);
        {
            if (len == 0)
                printf("^");
            else
                printf("=");
        }
        body[len].x = head.x;
        body[len].y = head.y + i;
        len++;
    }
    Bend();
    if (!kbhit())
        head.y--;
}
// for the memory maze

#define NUM_WORDS 18
#define WORD_LENGTH 20
#define TIME_LIMIT 60 // Time limit in seconds

char words[NUM_WORDS][WORD_LENGTH]; // Array to store the words
bool used[NUM_WORDS];               // Array to track which words have been used
int i, j, numCorrect = 0;           // Loop variables and score counter
char guess[WORD_LENGTH];            // Variable to store player's guess
time_t startTime, endTime;          // Variables to store the star

void wordgame()
{
    void Guess();
    void r3();
    void r3abt();

    // Declare variables

    // Initialize the arrays
    for (i = 0; i < NUM_WORDS; i++)
    {
        used[i] = false;
    }

    // Populate the array of words
    strcpy(words[0], "computer");
    strcpy(words[1], "banana");
    strcpy(words[2], "shoes");
    strcpy(words[3], "pencil");
    strcpy(words[4], "pen");
    strcpy(words[5], "momo");
    strcpy(words[6], "hammer");
    strcpy(words[7], "book");
    strcpy(words[8], "keyboard");
    strcpy(words[10], "math");
    strcpy(words[11], "mother");
    strcpy(words[12], "brush");
    strcpy(words[13], "crush");
    strcpy(words[14], "marker");
    strcpy(words[15], "glass");
    strcpy(words[16], "fan");
    strcpy(words[17], "corona");
    strcpy(words[18], "blanket");

    ; // Print game instructions
    Sleep(300);
    r3();
    Sleep(500);
    r3abt();

    printf("\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    r3();
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(700);
    printf("\t\t\tGet ready! The words you need to remember will now be presented. \n");
    Sleep(700);
    printf("\t\t\tPay close attention, \n ");
    Sleep(700);
    printf("\t\t\tAs you only have a few seconds to absorb the information before they disappear. \n ");

    Sleep(3000);
    system("cls");

    // Display the words to the player
    printf("_____________________________________________________________________________Presenting the Words____________________________________________________________________ \n");
    Sleep(500);
    printf("\n");
    for (i = 0; i < NUM_WORDS; i++)
    {
        Sleep(1000);
        printf("%s \n \n ", words[i]);
    }
    printf(" \n");
    sleep(3);      // Wait for 1 second before clearing the screen
    system("cls"); // Clear the screen
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t your time is being started............\n \n");
    printf("\t\t\t Recall your mind!!\n \n");
    printf("\t\t\t Be ready with your hands on keyboard!! \n \n ");
    printf("\t\t\t Press enter to Enter next word! \n \n ");
    Sleep(4000);
    system("cls");
    Guess();
    // Get player's guesses

    // Display the player's score
}
void Guess()
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(500);
    printf("\t \t\t\t\t\t Your time is running out! Quickly enter the words you have retained  \n \n \n   ");
    Sleep(200);

    time(&startTime); // Record the start time
    do
    {
        printf("\t  \t\t\t Your word  :  ");
        scanf("%s", guess);
        printf("\n");

        // Check if the guess is correct
        for ( j = 0; j < NUM_WORDS; j++)
        {
            if (!used[j] && strcmp(guess, words[j]) == 0)
            {
                numCorrect++;
                used[j] = true;
                break;
            }
        }
        time(&endTime); // Update the end time
    } while (difftime(endTime, startTime) <= TIME_LIMIT);
    printf("\t\t\tYour time is over \n \n  your are succesful to guess   %d Words ", numCorrect);
    if (numCorrect > 9)
        
    {system("cls");
        system("color 2");
        Sleep(500);
        printf("\n");
        printf("\n");

        printf("\t_________________________________________(: *|C | O | N | G | R | A | T | U | L | A| T | I | O | N | S|* :)________________________________________________________\n");
        printf("\n");
        Sleep(700);
        printf("\t\t\t\tCongratulations on winning the Meomory maze!\n");
        Sleep(700);
        printf("\t\t\t\tYour quick recall and sharp memory have earned you a spot in the next challenge. \n");
        Sleep(700);
        printf("\t\t\t\t\n");
        Sleep(700);
        printf("\t\t\t\tKeep up the good work and best of luck as you continue on your adventurous journey.\n");
        Sleep(700);
        printf("\n \n ");

        printf("\t\t\t\tAre you ready to face the new round ?? \n \n");
        Sleep(500);

        printf("\t\t\t\tpress any key for next round\n");
        getch();
        system("cls");
        final();
    }

    else
    {
system("cls");
        Sleep(700);
        printf("\n");
        printf("\n");

        printf("\t_________________________________________________________________(::::*SAD!!:::::)____________________________________________________________________________\n");
        printf("\n\n");
	    printf("\t\t\t\tUnfortunately, you were not able to recall enough words in the Memory Maze round .\n");
        printf("\t\t\t\tBut don't be discouraged, every failure is a stepping stone to success\n");
        printf("\t\t\t\tTake this as an opportunity to improve your memory skills and come back stronger next time. \n");
        printf("\t\t\t\tWe hope you had a great experience and enjoyed the challenge. \n");

        printf("\t\t\t\tBetter luck next time!\n");
        printf("\t\t\t\t\n");
        Sleep(5000);
        main();
    }
    Sleep(6000);
    system("cls");
    main();
}
void r3()
{
	 printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\t\t\t ##          ##   #####   ##         ##   ######   ## ## ##     ##     ##        ##         ##   ## ## ##   ## ## ##    ######     \n");
    printf("\t\t\t ## ##    ## ##   ##      ## ##   ## ##   ##  ##   ##    ##       ##  ##         ## ##   ## ##   ##    ##        ##     ##         \n");
    printf("\t\t\t ##    ##    ##   #####   ##   ##    ##   ##  ##   ## ## ##         ##   _____   ##    ##   ##   ## ## ##       ##      ######     \n");
    printf("\t\t\t ##          ##   ##      ##         ##   ##  ##   ##     ##       ##            ##         ##   ##    ##      ##       ##         \n");
    printf("\t\t\t ##          ##   #####   ##         ##   ######   ##       ##    ##             ##         ##   ##    ##    ## ## ##   ######     \n");
    printf("\t\t\t\t ______________________________________________________________________________________________________________________________\n");
    printf("\n");
    printf("\n");
}
void r3abt()
{
    Sleep(800);
    printf("\t\t\tWelcome  %s to the Round of Memory Maze! In this round, \n", p);
    Sleep(800);
    printf("\t\t\tyou will be presented with a series of words in sequence.  \n");
    Sleep(800);
    printf("\t\t\tYour task is to try to remember as many of the words as possible.\n");
    Sleep(800);
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(500);
    printf("\t\t\t-----------------------------------Rules:----------------------------- \n \n");
    Sleep(600);
    printf("\t\t\t->After all the words have been presented, they will be removed from view and \n\n");
    Sleep(500);
    printf("\t\t\t->You will then have 60 seconds to enter as many of the words as you can recall.\n \n");
    Sleep(500);
    printf("\t\t\t->The more words you remember, the higher your score will be. \n \n");
    Sleep(500);
    printf("\t\t\t->If you are able to guess at least 10 words correctly,\n \n");
    Sleep(500);
    printf("\t\t\t you will advance to the next round in your journey through Adventurous \n \n");
    Sleep(500);
    printf("\n");
    printf("\t\t\tGood luck and have fun in the Memory Maze!\n \n");
    printf("\t\t\tSimply press any key to start the Meomory maze");

    getch();
    system("cls");

    system("cls");
}
