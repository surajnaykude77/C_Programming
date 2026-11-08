//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Multiply
// Input          : Integer
// Output         : Integer
// Description    : display multiplication of all numbers
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept three numbers from user 
//        and prints its multiplication
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{ 
    int iMulti = 1;
    int iNonZeroCount = 0;

    if(iNo1 != 0)
    {
        iMulti = iMulti * iNo1;
        iNonZeroCount++;
    }
    
    if(iNo2 != 0)
    {
        iMulti = iMulti * iNo2;
        iNonZeroCount++;
    }
    
    if(iNo3 != 0)
    {
        iMulti = iMulti * iNo3;
        iNonZeroCount++;
    }

    if(iNonZeroCount == 0)
    {
        return 0;
    }

    return iMulti;
}
int main()
{
    int  iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter Three  Numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}