//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckVowel
// Input          : character
// Output         : boolean
// Description    : Checks if the input character is a vowel
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q5. Accept one character from user and check whether 
//        that character is vowel (a,e,i,o,u) or not.
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() 
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter a character\n");
    scanf(" %c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is a vowel\n");
    }
    else
    {
        printf("It is not a vowel\n");
    }

    return EXIT_SUCCESS;
}