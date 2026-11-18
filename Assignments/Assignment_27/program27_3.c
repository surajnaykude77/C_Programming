//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and return
//     difference between frequency of small characters and frequency of
//     capital characters.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : "MarvellouS"
    Output : 6
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Difference
// Input          : String
// Output         : integer
// Description    : Returns the difference between small and capital character counts
// Date           : 19/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;
    int iFrequency = 0;

    if (str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        
        str++;
    }

    iFrequency = iSmallCnt - iCapCnt;

    return iFrequency;
}

int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string:\n");
    scanf(" %[^\n]s", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}