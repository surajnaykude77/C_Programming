
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////
// Function Name  : main
// Input          : None
// Output         : Integer
// Description    : Displays the sizes of basic data types
// Date           : 25/11/2026
// Author         : Suraj Navanath Naykude
//////////////////////////////////////////////////////////////////////////

int main()
{
    printf("size of int : %zu\n", sizeof(int));
    printf("size of char : %zu\n", sizeof(char));
    printf("size of float : %zu\n", sizeof(float));
    printf("size of double : %zu\n", sizeof(double));
    printf("size of short int : %zu\n", sizeof(short int));
    printf("size of long int : %zu\n", sizeof(long int));
    printf("size of long double : %zu\n", sizeof(long double));

    return EXIT_SUCCESS;
}