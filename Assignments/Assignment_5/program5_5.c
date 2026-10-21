//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckCharacterType
// Input          : Character
// Output         : Prints whether it's Uppercase, Lowercase, Digit, or Special
// Description    : Identifies the category of the input character
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Identify character type
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    // A to Z (ASCII 65 to 90)
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase alphabet\n");
    }
    // a to z (ASCII 97 to 122)
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase alphabet\n");
    }
    // 0 to 9 (ASCII 48 to 57)
    else if ((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
}

int main() 
{
    char cValue = '\0';

    printf("Enter a charactor\n");
    scanf(" %c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}