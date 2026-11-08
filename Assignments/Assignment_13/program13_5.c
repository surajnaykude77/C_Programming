//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountDiff
// Input          : Integer
// Output         : Integer
// Description    : Difference between summation of even and odd digits
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user 
//       and return difference between summation of even digits 
//       and summation of odd digits
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int CountDiff(int iNo)
{ 
    int iDigit = 0;
    int iOddsum = 0;
    int iEvensum = 0;
    int iSumdif = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvensum = iEvensum + iDigit;
        }
        else
        {
            iOddsum = iOddsum + iDigit;
        }
        
        iNo = iNo / 10;
    }
    
    iSumdif = iEvensum - iOddsum;

    return iSumdif;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}