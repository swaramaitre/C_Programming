//Program to check if a number is even or odd
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d", x%2==0);     // output is 1 for even number and 0 for odd number

    return 0;
}