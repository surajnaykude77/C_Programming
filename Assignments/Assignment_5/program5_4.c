//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckMultipleDivisibility
// Input          : Integer
// Output         : Print Divisibility
// Description    : Calculates and display number is divisible by 5 or 3 or both or not either
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. check Divisible by 3 and 5
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
   if((iNo % 3 == 0) && (iNo % 5 == 0))
   {
    printf("Divisible by both");
   }
   else if((iNo % 3 == 0) && (iNo % 5 != 0))
   {
    printf("Divisible by 3 only");
   }
    else if((iNo % 5 == 0) && (iNo % 3 != 0))
   {
    printf("Divisible by 5 only");
   }
   else 
   {
    printf("Not Divisible by Either");
   }
}

int main() 
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}