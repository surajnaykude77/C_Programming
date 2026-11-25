#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////
// Function Name  : CheckPrime
// Input          : Integer
// Output         : None
// Description    : Checks whether the entered integer is a prime number
// Date           : 26/11/2026
// Author         : Suraj Navanath Naykude
//////////////////////////////////////////////////////////////////////////

void CheckPrime(int iNo)
{
    int icnt = 0;
    int iSum = 0;

    for (icnt = 1; icnt <= iNo / 2; icnt++)
    {
        if ((iNo % icnt) == 0)
        {
        iSum = iSum + icnt;
        }
    }

    if (iSum == 1)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}