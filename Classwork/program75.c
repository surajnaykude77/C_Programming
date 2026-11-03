//////////////////////////////////////////////////////////////////////////
//
// Program Name   : program73.c
// Description    : Display reverse number 
// Input          : Integer
// Output         : integer
// Author         : Suraj Navanath Naykude
// Date           : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////

// Input : 4
// 4    3   2   1

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
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