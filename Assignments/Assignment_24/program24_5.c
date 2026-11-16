
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : strRevX
// Input          : String
// Output         : None (In-place modification)
// Description    : Reverse a given string in-place using two pointers
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and reverse that string
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "abcd"

    Output = "dcba"
*/


#include<stdio.h>
#include<stdlib.h>

void strRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    if (str == NULL)
    {
        return;
    }

    // Move 'end' pointer to the null terminator
    while (*end != '\0')
    {
        end++;
    }
    
    // Step back one byte to point to the actual last character
    end--;

    // Swap characters from outside in until the pointers meet or cross
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[50];

    printf("Enter a String:\n");
    scanf("%49[^\n]", arr);

    strRevX(arr);

    printf("Reversed string is: %s\n", arr);

    return EXIT_SUCCESS;
}