//////////////////////////////////////////////////////////////////////////
//
// Function Name  : NonFact
// Input          : Integer
// Output         : Integer
// Description    :display all its non factors
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user 
//       and display all its non factors
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void NonFact(int iNo)
{ 
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}