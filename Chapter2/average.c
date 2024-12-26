//program to calculate average of three numbers
#include<stdio.h>
int main()
{
    float n1, n2, n3, average;
    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    printf("Enter third number: ");
    scanf("%f", &n3);

    average = ( n1 + n2 + n3 ) / 3;
    printf("The average of three numbers is %f \n", average);

    return 0;
}