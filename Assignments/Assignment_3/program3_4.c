//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayConvert
// Input          : Character
// Output         : Converted character
// Description    : Converts the case of the input character
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q4. Accept one character from user and convert case of that character. 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayConvert(char cValue)
{   
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else
    {
        printf("Invalid input");
    }
}

int main() 
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}