//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept character from user and check whether it is capital or not
//      (A-Z).
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = 'F'
    Output = TRUE

    Input  = 'd'
    Output = FALSE
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkCapital
// Input          : Character
// Output         : BOOL (TRUE or FALSE)
// Description    : Check whether a given character is capital or not
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital( char ch)
{
    if (((ch >= 'A') && (ch <= 'Z')))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character:\n");
    scanf(" %c", &cValue);
    
    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital Character\n");
    }
    else
    {
        printf("It is not a capital Character\n");
    }

    return EXIT_SUCCESS;
}