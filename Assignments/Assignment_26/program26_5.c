//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept character from user and display its ASCII value in decimal,
//     octal and hexadecimal format.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : 'A'
    Output : Decimal        65
             Octal          0101
             Hexadecimal    0X41
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Character
// Output         : None
// Description    : Displays the Decimal, Octal, and Hexadecimal value of a character
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    
    printf("Octal\t\t0%o\n", ch);
    
    printf("Hexadecimal\t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf(" %c", &cValue);
    
    Display(cValue);

    return EXIT_SUCCESS;
}