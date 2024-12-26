//program to print the smallest number
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("smallest number is %d \n", num1);
    }
    else
    {
        printf("smallest number is %d \n", num2);
    }
    return 0;
} 