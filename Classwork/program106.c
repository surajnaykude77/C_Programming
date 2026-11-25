
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////
// Function Name  : checkPerfect
// Input          : Integer
// Output         : Boolean
// Description    : Checks whether the entered integer is a perfect number
// Date           : 26/11/2026
// Author         : Suraj Navanath Naykude
//////////////////////////////////////////////////////////////////////////

bool checkPerfect(int iNo)
{
    int icnt = 0, iSum = 0;

    for (icnt = 1; icnt <= iNo / 2; icnt++)
    {
        if ((iNo % icnt) == 0)
        {
            iSum = iSum + icnt;
        }
    }

    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    bRet = checkPerfect(iValue);

    if(bRet == true)
    {
        printf("it is perfect no");
    }
    else
    {
        printf("it is not perfect no");
    }

    return EXIT_SUCCESS;
}

// Time complexity: O(N/2)