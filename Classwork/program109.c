#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////
// Function Name  : CheckPrime
// Input          : Integer
// Output         : Boolean
// Description    : Checks whether the entered integer is a prime number
// Date           : 26/11/2026
// Author         : Suraj Navanath Naykude
//////////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
}


int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return EXIT_SUCCESS;
}