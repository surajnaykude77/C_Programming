//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckNumber
// Input          : Integer
// Output         : Prints message on console
// Description    : display input is positive, negative or zero
// Date           : 20/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a c program that accepts an integer from the user and
//         determines the number is positive , negatine or zero
//           
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iNo)
{   
    if(iNo < 0)
    {
        printf("Negative number\n");
    }
    else if(iNo > 0)
    {
        printf("number is positive\n");
    }
    else
    {
        printf("number is zero\n");
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}