//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer
// Output         : None
// Description    : prints that number of * on screen
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q1. accept one number from user and print that number * on screen 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int icnt = 0;
    icnt = 1;;

    if(iNo < 0)
    {
        iNo = -iNo;     // Input updater
    }

    while( icnt <= iNo)
    {
        printf("%d *\n",icnt);
        icnt++;
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}