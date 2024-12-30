// Program to keep taking number as input from the user until user enter a number which is a multiple of 7
#include<stdio.h>
int main()
{
    int n;
    do
    {
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d \n", n);

    if ( n % 7 == 0)
    {
        break;
    }
    }
    while(1);
    printf("THANK YOU");

    return 0;
}