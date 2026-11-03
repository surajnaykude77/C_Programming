//////////////////////////////////////////////////////////////////////////
//
// Function Name  : OddDisplay
// Input          : Integer
// Output         : odd numbers
// Description    : Display all odd numbers between 0 to user input number
// Date           : 31/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a c program that accepts N  from user
//           and print all odd number up to N
//
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void OddDisplay(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid input.\n");
        return;
    }

    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(icnt % 2 != 0)
        {
            printf("%d ", icnt);
        }

    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}