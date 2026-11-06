//////////////////////////////////////////////////////////////////////////
//
// Function Name  : KMToMeter
// Input          : Integer
// Output         : Integer
// Description    : Convert KM into Meters
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int KMToMeter(int iKM)
{
    int iMiters = 0;

    iMiters = iKM * 1000;

    return iMiters;
}

int main()
{
    int iValue = 0;
    int iRet = 0.0;

    printf("Enter a distance\n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);
    
    printf("distance in meter is %d\n", iRet);

    return EXIT_SUCCESS;
}