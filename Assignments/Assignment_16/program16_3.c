//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer, Integer (Number of rows and columns)
// Output         : None (Prints Pattern on console)
// Description    : Displays a character matrix
// Date           : 13/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = iRow = 4      iCol = 4

    Output =    A   A   A   A
                B   B   B   B
                C   C   C   C
                D   D   D   D
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    // Input Updater
    if (iRow < 0) iRow = -iRow;
    if (iCol < 0) iCol = -iCol;

    for (i = 1, ch = 'A'; i <= iRow; i++,ch++)
    {
        for (j = 1; j <= iCol; j++) 
        {
            printf("%c\t", ch);
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