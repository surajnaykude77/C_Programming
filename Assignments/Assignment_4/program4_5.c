//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckDivisibility
// Input          : Integer
// Output         : print number is divisible by 5 or not
// Description    : Display number is divisible by 5 or not
// Date           : 21/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Accept an integer and determine whether it is divisible by 5
//         without leavingany remainder
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iNo)
{
    if (iNo % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}