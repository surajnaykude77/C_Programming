//////////////////////////////////////////////////////////////////////////
//
// Program Name   : program71.c
// Description    : Display number from 1 to given number
// Input          : Integer
// Output         : Integer
// Author         : Suraj Navanath Naykude
// Date           : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////

// Input : 4
// 1    2   3   4

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);  // \t for tab 
    }  

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}