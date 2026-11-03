//////////////////////////////////////////////////////////////////////////
//
// Program Name   : program70.c
// Description    : Display "jay ganesh "
// Input          : Integer
// Output         : String
// Author         : Suraj Navanath Naykude
// Date           : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}