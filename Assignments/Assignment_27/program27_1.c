//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and count number of
//     capital characters.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : "Marvellous Multi OS"
    Output : 4
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountCapital
// Input          : String
// Output         : integer
// Description    : Counts the number of capital characters in a string
// Date           : 19/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    if (str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20]; 
    int iRet = 0;

    printf("Enter string:\n");
    scanf(" %[^\n]s", arr); 

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}