//////////////////////////////////////////////////////////////////////////
//
// Function Name  : MultipleDisplay
// Input          : Integer
// Output         : Multiples of N
// Description    : Display the first 5 multiples of the user input number
// Date           : 31/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a c program which accepts N  from user
//           and print 5 multiples of  N
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void MultipleDisplay(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid input.\n");
        return;
    }

    int icnt = 0;

    for(icnt = 1; icnt <= 5; icnt++)
    {
        printf("%d ", iNo * icnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}