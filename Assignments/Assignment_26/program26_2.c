//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept character from user. If character is small display its
//     corresponding capital character, and if it is capital then display its
//     corresponding small character. In other cases display as it is.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : 'Q'
    Output : 'q'

    Input  : 'm'
    Output : 'M'

    Input  : '4'
    Output : '4'
    
    Input  : '%'
    Output : '%'
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayConvert
// Input          : Character
// Output         : None
// Description    : Toggles the case of an alphabet, leaves other characters as is
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c\n", ch);
    }
    else if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c\n", ch);
    }
    else
    {
        printf("%c\n", ch);
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf(" %c", &cValue);
    
    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}