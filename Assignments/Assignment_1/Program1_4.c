//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Check
// Input          : Integer
// Output         : Boolean
// Description    : Checks if a number is divisible by 5
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////
//
//    Q4. accept one number and check whether it is divisible by 5 or not
//
// ////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5) == 0)
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
    bool bRet = false;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return EXIT_SUCCESS;
}