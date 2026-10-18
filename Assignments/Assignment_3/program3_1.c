//////////////////////////////////////////////////////////////////////////
//
// Function Name  : PrintEven
// Input          : Integer
// Output         : Even numbers
// Description    : prints that number of even numbers on screen
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q1. write a program which accept one number from user and print
//           that number of even numbers on screen 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void PrintEven(int iNo)
{   
    if(iNo <= 0 )
    {
        return;
    }

    int icnt = 0;

    for(icnt = 1; icnt <= iNo ; icnt ++)
    {
        printf("%d ", icnt * 2);
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}