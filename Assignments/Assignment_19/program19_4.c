//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer, Integer (Number of rows and columns)
// Output         : None (Prints Pattern on console)
// Description    : Hollow square matrix with main diagonal
// Date           : 14/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = iRow = 6      iCol = 6

    Output  =   *   *   *  *   *    *
                *   *               *
                *       *           *
                *          *        *
                *              *    *
                *   *   *  *   *    *
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    // Input Updater
    if (iRow < 0) iRow = -iRow;
    if (iCol < 0) iCol = -iCol;

    if(iRow != iCol)
    {
        printf("Invalid input, Rows and columns must be the same.\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if((i == 1) ||( i == iRow) || (j == 1) || (j == iCol) || (i == j))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
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