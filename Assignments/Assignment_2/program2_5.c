//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckEven
// Input          : Integer
// Output         : boolean
// Description    : checks if a number is even or odd
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q5. accept number from user and check whether number is even or odd          
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
   
int main() 
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter  number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

   if(bRet == true)
   {
       printf("Number is even\n");
   }
   else
   {
       printf("Number is odd\n");
   }

    return EXIT_SUCCESS;
}