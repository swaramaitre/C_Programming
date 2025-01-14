// Write a program to allocate memory to store 5 prices
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *) malloc(5*sizeof(float));
    ptr[1] = 10;
    ptr[2] = 20;
    ptr[3] = 30;
    ptr[4] = 40;
    ptr[5] = 50;

    for(int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}