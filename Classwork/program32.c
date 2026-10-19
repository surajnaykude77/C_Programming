//////////////////////////////////////////////////////////////////////////
//
// Program Name  : program32.c
// Input          : String, Integer, Float
// Output         : Display student details
// Description    : Accepts name, age and marks and prints them
// Date           : 11/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name :\n");
    scanf("%[^'\n']s", sName);

    fflush(stdin);    // Flush input buffer

    printf("Enter your age\n");
    scanf("%d", &iAge);

    printf("Enter your marks\n");
    scanf("%f", &fMarks);

    printf("Welcome %s\n", sName);
    printf("Your age is :%d\n", iAge);
    printf("Your marks is :%f\n", fMarks);

    return EXIT_SUCCESS;
}