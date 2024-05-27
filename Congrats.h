#include <stdio.h>
#include <windows.h>
#include<conio.h>
int congrats()
{
    system("color A");
    printf("\n ");
    printf("\n ");
    printf("\n ");
    printf("\n ");
    printf("\n ");
    printf("\n ");
    Sleep(700);
    system("color A");
    printf("\033[1;32m"); // change text color to green
    printf("\033[1;37m"); // change text size to bigger
    system("color A");
    printf("\t\t\t&&&&&&&& &&&&&& &&     && &&&&&&&&   &&&&&&   &&&&&&& &&&&&& &&  && &&     &&&&&&& &&&&&& &&&&&& &&&&&& &&&&&& &&      &&   &\n");
    printf("\t\t\t&&       &&  && && &   && &&         &&  &&   &&   &&   &&   &&  && &&     &&   &&   &&   &&  &&   &&   &&  && && &    &&   &  \n");
    printf("\t\t\t&&       &&  && &&   & && &&   &&&&& &&&&&&   &&&&&&&   &&   &&  && &&     &&&&&&&   &&   &&  &&   &&   &&  && &&   &  &&   &     \n");
    printf("\t\t\t&&       &&  && &&     && &&   && && &&   &&  &&   &&   &&   &&  && &&     &&   &&   &&   &&  &&   &&   &&  && &&      &&   &     \n");
    printf("\t\t\t&&&&&&&& &&&&&& &&     && &&&&&&& && &&    && &&   &&   &&   &&&&&& &&&&&& &&   &&   &&   &&&&&& &&&&&& &&&&&& &&      &&   O \n\n");
    printf("\t\t******************************************************************************************************************************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\n");
    printf("\033[0m"); // reset text format
    system("color 2");
    printf("\t\t\tCongratulations!!, the adventure Hero on completing the journey of Adventurous World!\n");
    Sleep(700);
    printf("\t\t\tyou have faced many challenges and obstacles throughout this journey, but you have proven to be a skilled and determined player.\n ");
    Sleep(700);
    printf("\t\t\tYour success in this game is a reflection of your strength and resilience in the face of adversity.\n");
    Sleep(700);
    printf("\t\t\tRemember that life is full of ups and downs, but with perseverance and determination, you can overcome any obstacle and achieve your goals \n");
    Sleep(700);
    printf("\t\t\tWe hope that this game has inspired you to believe in yourself and to embrace the challenges that come your way. \n \n \n");
    Sleep(700);
    printf("\t\t\tThank you for playing Adventurous World, and we hope you have had a fun and rewarding experience.");
    Sleep(700);
    return 0;
}
