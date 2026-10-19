#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int no = 0;

    printf("Enter no :\n");
    if(scanf("%d",&no)!=1)                          // Cheaking the return value of scanf function to check whether the input is valid or not
        {
            fprintf(stderr,"invalid input :\n");    // printing the error message to standard error stream   

            return EXIT_FAILURE;                    // returning failure status

        }

    printf("input is valid");


    return EXIT_SUCCESS;
}
