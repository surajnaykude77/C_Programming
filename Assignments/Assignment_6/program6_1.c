//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CalculateElectricityBill
// Input          : Integer
// Output         : Float
// Description    : Calculate and display Electricity bill
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Calculate Electricity bill
//
//////////////////////////////////////////////////////////////////////////
//
//      Units Consumed      Rate
//          
//      First 100 unit      Rs.5 per unit
//      Next 100 unit       Rs.7 per unit
//      Above 200 unit      Rs.10 per unit
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iNo)
{
    float fBill = 0.0f;

    if (iNo < 0)
    {
        printf("Invalid unit consumption\n");
    } 
    else if (iNo <= 100) 
    {
        fBill = iNo * 5.0;
        printf("Total Electricity Bill: Rs.%.2f\n", fBill);
    } 
    else if (iNo <= 200) 
    {
        fBill = (100 * 5.0) + ((iNo - 100) * 7.0);
        printf("Total Electricity Bill: Rs.%.2f\n", fBill);
    } 
    else
    {
        fBill = (100 * 5.0) + (100 * 7.0) + ((iNo - 200) * 10.0);
        printf("Total Electricity Bill: Rs.%.2f\n", fBill);
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter Consumed units\n");
    scanf(" %d",&iValue);

    CalculateElectricityBill(iValue);

    return EXIT_SUCCESS;
}