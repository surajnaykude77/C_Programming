//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DollarToINR
// Input          : Integer
// Output         : Integer
// Description    : convert USD into INR
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int DollarToINR(int iNo)
{
    int iConverted = 0;

    if (iNo < 0)
    {
        return-1;
    }
    
    iConverted = iNo * 70;

    return iConverted;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    if (iRet == -1)
    {
        printf("Invalid Input: Currency cannot be negative\n");
    }
    else
    {
        printf("Value in INR is %d\n", iRet);
    }

    return EXIT_SUCCESS;
}