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

    Output =    A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
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