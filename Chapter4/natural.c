// Program to print the sum of first n natural numbers. Also, print them in reverse
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum is %d \n", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d \n", i);
    }

    return 0;
}
/*
instead of two for loops one for loop can also be used

int sum = 0;
for ( int i = 1, j = n; i <= n && j >=1; i++, j--)   //for( int j = n; j >= 1; j--)
{
sum += j
printf("%d \n", j);
}
printf("Sum is %d \n", sum);
return 0;

*/