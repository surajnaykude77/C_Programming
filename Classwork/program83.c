//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckDivisible
// Input          : Integer
// Output         : String
// Description    : Checks whether the user input is divisible by 3
// Date           : 21/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if((iNo%3)==0)
    {
        printf("the number is divisible ");
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