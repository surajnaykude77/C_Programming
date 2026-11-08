//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkEqual
// Input          : Integer
// Output         : String
// Description    : display numbers is equal or not
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept two number from user and check whether
//       that number is equal or not
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{ 
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    BOOL bRet = FALSE;

    printf("Enter Two Numbers\n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}