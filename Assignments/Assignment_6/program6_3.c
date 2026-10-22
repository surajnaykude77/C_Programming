//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CalculateDiscount
// Input          : float (Purchase Amount)
// Output         : Prints the discount and final payable amount
// Description    : Calculates shopping discount based on slabs
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Calculate shopping discount
//
//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
//       Purchase Amount        discount
//           
//       Below 1000                0%
//       1000 to Below 5000       10%
//       5000 and above           20%
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
   float fDiscount = 0.0f;
   float fFinalAmount = 0.0f;

   if (fAmount < 0.0f) 
   {
       printf("Invalid amount\n");
       return;
   }
   if (fAmount < 1000.0f) 
   {
       fDiscount = 0.0f;             // 0% discount
   }
   else if (fAmount < 5000.0f) 
   {
       fDiscount = fAmount * 0.10f; // 10% discount
   }
   else 
   {
       fDiscount = fAmount * 0.20f; // 20% discount
   }

     //  Calculate final payable amount
   fFinalAmount = fAmount - fDiscount;

    //  Display results
   printf("Purchase Amount : %.2f\n", fAmount);
   printf("Discount Amount : %.2f\n", fDiscount);
   printf("Final Payable   : %.2f\n", fFinalAmount);
}

int main() 
{
   float fAmount = 0.0f;
   
   printf("Enter purchase amount: ");
   scanf(" %f", &fAmount);

   CalculateDiscount(fAmount);

   return EXIT_SUCCESS;
}