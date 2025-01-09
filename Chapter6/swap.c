// Write a program to swap two numbers a and b
#include<stdio.h>

void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("Inside swap: a = %d & b = %d \n", a, b);
}

int main()
{
    int x = 3, y = 5;

    printf("Before swap: x = %d & y = %d \n", x, y);
    swap(x, y);
    printf("After swap: x = %d & y = %d \n\n", x, y);

    printf("Before swap: x = %d & y = %d \n", x, y);
    _swap(&x, &y);
    printf("After swap: x = %d & y = %d \n", x, y);

    return 0;
}

