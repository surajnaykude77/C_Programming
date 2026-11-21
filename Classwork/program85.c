//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckDivisible
// Input          : Integer
// Output         : String
// Description    : Checks whether the user input is divisible by both 3 and 5
// Date           : 21/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
 ----------------------------------------
         operator &&
 ----------------------------------------
 result 1   result2     final result
 ----------------------------------------
    true    true         true

    true    false       false

    false   true        false       //sc

    false   false       false       //sc
 ----------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo%5)==0) && ((iNo%3)==0))
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