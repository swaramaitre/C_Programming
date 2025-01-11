//string compare(strcmp)
#include<stdio.h>
#include<string.h>

void printString(char arr[]);

int main()
{
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    printf("%d", strcmp(firstStr, secStr));
    return 0;
}