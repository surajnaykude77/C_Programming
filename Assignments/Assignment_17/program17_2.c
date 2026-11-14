//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer, Integer (Number of rows and columns)
// Output         : None (Prints Pattern on console)
// Description    : Displays a matrix
// Date           : 13/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = iRow = 5      iCol = 5

    Output  =   2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;

    // Input Updater
    if (iRow < 0) iRow = -iRow;
    if (iCol < 0) iCol = -iCol;

    for (i = 1; i <= iRow; i++)
    {
        if (i % 2 != 0) 
        {
            iCnt = 2; // Odd rows start with even number 2
        }
        else
        {
            iCnt = 1; // Even rows start with odd number 1
        }
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
            
            iCnt += 2;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}