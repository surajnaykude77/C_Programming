//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept character from user. If it is capital then display all the
//     characters from the input characters till Z. If input character is small
//     then print all the characters in reverse order till a. In other cases
//     return directly.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : 'Q'
    Output : Q R S T U V W X Y Z

    Input  : 'm'
    Output : m l k j i h g f e d c b a

    Input  : '8'
    Output : (No output)
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Character
// Output         : None
// Description    : Displays sequence based on case of input character
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int iCnt = 0;

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        // Loop forward to Z
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c ", iCnt);
        }
        printf("\n");
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        // Loop backward to a
        for (iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c ", iCnt);
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf(" %c", &cValue);
    
    Display(cValue);

    return EXIT_SUCCESS;
}