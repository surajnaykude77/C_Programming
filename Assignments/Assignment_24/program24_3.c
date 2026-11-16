//////////////////////////////////////////////////////////////////////////
//
// Function Name  : FirstChar
// Input          : String, Character
// Output         : Integer
// Description    : Find the index of the first occurrence of a character
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and accept one character.
//     and return index of first occurrence of that character.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "Marvellous Multo os"
    character - m

    Output = 0
*/

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iindex = 0; // To track the current index

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iindex;
        }
        iindex++;
        str++;
    }
    
    // Return -1 if the loop finishes without finding the character
    return -1;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String:\n");
    scanf("%[^\n]s", arr);

    printf("Enter a Character:\n");
    // Space before %c clears the newline from the buffer
    scanf(" %c", &cValue);
    
    iRet = FirstChar(arr, cValue);

    if (iRet == -1)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("%d\n", iRet);
    }

    return EXIT_SUCCESS;
}