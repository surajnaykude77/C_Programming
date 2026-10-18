//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayEvenFactor
// Input          : Integer
// Output         : Even factors
// Description    : prints even factors of that number on screen
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q3. write a program which accept one number from user and print
//           even factors of that number on screen
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayEvenFactor(int iNo)
{   
    if(iNo <= 0 )
    {
        iNo = -iNo;     // Input updater
    }

    int icnt = 0;

    for(icnt = 1; icnt <= iNo / 2 ; icnt ++)
    {
        if(iNo % icnt == 0 && icnt % 2 == 0)
        {
            printf("%d ", icnt);
        }
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}