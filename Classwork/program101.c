
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////
// Function Name  : Factors
// Input          : Integer
// Output         : None
// Description    : Displays the proper factors of an integer
// Date           : 25/11/2026
// Author         : Suraj Navanath Naykude
//////////////////////////////////////////////////////////////////////////

void Factors(int iNo)
{
    int icnt = 0;

    printf("Factors of: %d\n", iNo);

    for (icnt = 1; icnt <= iNo / 2; icnt++)
    {
        if ((iNo % icnt) == 0)
        {
            printf("%d\n", icnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Factors(iValue);

    return EXIT_SUCCESS;
}

// Time complexity: O(N/2)