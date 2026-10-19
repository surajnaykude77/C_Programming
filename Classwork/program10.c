#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret = 0;
    int no = 0;

    // checking the return value of scanf function 

    printf("Enter no :\n");
   ret = scanf("%d",&no);

    printf("return value is :%d\n",ret);

    return EXIT_SUCCESS;
}
