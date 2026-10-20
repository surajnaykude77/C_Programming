//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckEvenOdd
// Input          : Integer
// Output         : Even or Odd
// Description    : Prints input is even or odd
// Date           : 21/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a c program that accepts an integer from the user and
//         determines whether it is even or odd
//           
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iNo)
{   
    if(iNo % 2 == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}        

int main() 
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}