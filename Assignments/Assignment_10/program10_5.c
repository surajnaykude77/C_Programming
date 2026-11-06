//////////////////////////////////////////////////////////////////////////
//
// Function Name  : SquareMeter
// Input          : Integer
// Output         : Double
// Description    : Convert square feet into square meters
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double SquareMeter(int iValue)
{
    double dMeters = 0.0;

   dMeters = iValue * 0.0929;

    return dMeters;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    
    printf("Area in meters %f\n", dRet);

    return EXIT_SUCCESS;
}