//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckDivisible
// Input          : Integer
// Output         : String
// Description    : Uses nested conditions to check divisibility by 3 and 5
// Date           : 21/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo%5)==0)
    {
        if(((iNo%3)==0))

        printf("the number is divisible ");

        else
        {
        printf("the number is not divisible ");
        }
    }
    else
    {
        printf("the number is not divisible ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}