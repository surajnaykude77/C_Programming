//////////////////////////////////////////////////////////////////////////
//
// Function Name  : LastChar
// Input          : String, Character
// Output         : Integer
// Description    : Find the index of the last occurrence of a character
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and accept one character.
//     and return index of last occurrence of that character.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "Marvellous Multo os"
    character - M

    Output = 11
*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    // Initialize to -1 so we can identify if the character was never found
    int iIndex = -1;
    int iPosition = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if (*str == ch)
        {
            // Continuously overwrite iIndex every time when match is found
            iIndex = iPosition;
        }
        str++;
        iPosition++;
    }
    
    return iIndex;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String:\n");
    scanf("%[^\n]s", arr);

    printf("Enter a Character:\n");
    scanf(" %c", &cValue);
    
    iRet = LastChar(arr, cValue);

    if (iRet == -1)
    {
        printf("Character not found.\n");
    }
    else
    {
        printf("%d\n", iRet);
    }

    return EXIT_SUCCESS;
}