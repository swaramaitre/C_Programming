//string concatination(strcat)
#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main()
{
    char firstStr[100] = "Hello";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);
}