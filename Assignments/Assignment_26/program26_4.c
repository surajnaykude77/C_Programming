//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept Character from user and check whether it is special symbol
//       or not (!, @, #, $, %, ^, &, *).
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : '%'
    Output : TRUE

    Input  : 'd'
    Output : FALSE
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkSpecial
// Input          : Character
// Output         : BOOL (TRUE or FALSE)
// Description    : Checks if a character is a specific special symbol
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    switch(ch)
    {
        case '!':
        case '@':
        case '#':
        case '$':
        case '%':
        case '^':
        case '&':
        case '*':
            return TRUE;

        default:
            return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character:\n");
    scanf(" %c", &cValue);
    
    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return EXIT_SUCCESS;
}