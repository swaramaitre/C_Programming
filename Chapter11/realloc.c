#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter numbers(5): ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 8);
    printf("Enter number(8): ");
    for(int i = 0; i < 8; i++)
    {
        scanf("%d \n", &ptr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    return 0;
}