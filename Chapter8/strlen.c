//string length(strlen)
#include<stdio.h>
#include<string.h>

void printString(char arr[]);

int main()
{
    char name[] = "Swara";
    int length = strlen(name);
    printf("length is: %d", length);
    return 0;
}
