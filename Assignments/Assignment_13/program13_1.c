//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountEven
// Input          : Integer
// Output         : Integer
// Description    : Display count of even digit in given number
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user 
//          and return the count of even digits
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int CountEven(int iNo)
{ 
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}