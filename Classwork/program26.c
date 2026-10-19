
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Accept String from user
// Input          : String 
// Output         : String until user press enter
// Description    : Accepts string input from user until user press enter
// Date           : 11/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    
    printf("Enter your name :\n");
    scanf("%[^'\n']s",sName);               /*for accepting string until user press enter
     By using this [^'\n'] format specifier we can take complete line input from user*/

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}