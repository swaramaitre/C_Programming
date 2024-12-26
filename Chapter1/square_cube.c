//Program to calculate square and cube of a number n from the user.
#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);

    printf("The square of entered number is: %f \n", n*n);
    printf("The cube of entered number is: %f \n", n*n*n);
    return 0;
}