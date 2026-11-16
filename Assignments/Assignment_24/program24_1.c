//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkChar
// Input          : String, Character
// Output         : BOOL (TRUE or FALSE)
// Description    : Check whether a given character is present in the string
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and accept one character.
//     check whether that character is present in string or not.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "Marvellous Infosystems"
    character - e

    Output = TRUE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    if (str == NULL)
    {
        return FALSE;
    }

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    
    return FALSE;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a String:\n");
    scanf("%[^\n]s", arr);

    printf("Enter a Character:\n");
    // The space before %c is mandatory to clear the newline from the buffer
    scanf(" %c", &cValue);
    
    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}