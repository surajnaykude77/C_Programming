//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Table
// Input          : Integer
// Output         : integer
// Description    : Display Table of number in reverse order
// Date           : 4/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user and display its table
//       in reverse order
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void TableRev(int iNo)
{
    int icnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo; // Input updater
    }

    for(icnt = 10; icnt >= 1 ; icnt--)
    {
        iSum = iNo * icnt;

        printf("%d\n",iSum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}