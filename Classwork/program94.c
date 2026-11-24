
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////
// Function Name  : Factorial
// Input          : Integer
// Output         : Long Long Integer
// Description    : Calculates the factorial of an integer
// Date           : 25/11/2026
// Author         : Suraj Navanath Naykude
//////////////////////////////////////////////////////////////////////////

long long Factorial(int iNo)
{
    int icnt = 0;
    long long iFact = 1;

    for (icnt = 1; icnt <= iNo; icnt++)
    {
        iFact = iFact * icnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is %lld\n", iRet);

    return EXIT_SUCCESS;
}