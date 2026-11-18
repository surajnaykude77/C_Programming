//////////////////////////////////////////////////////////////////////////
//
//  Q.1. Write a program which displays ASCII table. Table contains symbol,
//    Decimal, Hexadecimal and Octal representation of every member from
//    0 to 255.
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayASCII
// Input          : None
// Output         : None
// Description    : Displays the ASCII table from 0 to 255 with Decimal, Hex, and Octal values
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("-------------------------------------------------\n");
    printf("Symbol\tDecimal\tHex\tOctal\n");
    printf("-------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        // %c for character/symbol
        // %d for decimal
        // %X for hexadecimal (uppercase)
        // %o for octal
        
        printf("%c\t%d\t%X\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }
    
    printf("-------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}