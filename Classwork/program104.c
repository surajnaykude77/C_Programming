

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////
// Function Name  : checkPerfect
// Input          : Integer
// Output         : None
// Description    : Checks whether the entered integer is a perfect number
// Date           : 26/11/2026
// Author         : Suraj Navanath Naykude
//////////////////////////////////////////////////////////////////////////

void checkPerfect(int iNo)
{
   int icnt = 0, iSum = 0;

   for (icnt = 1; icnt <= iNo / 2; icnt++)
   {
       if ((iNo % icnt) == 0)
        {
            iSum = iSum + icnt;
        }
   }

   if (iSum == iNo)
   {
       printf("it is perfect no");
   }
   else
   {
       printf("it is not perfect no");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    checkPerfect(iValue);


    return EXIT_SUCCESS;
}
// time complexity : O(N/2)