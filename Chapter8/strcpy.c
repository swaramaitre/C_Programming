//string copy(strcpy)
#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main()
{
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    strcpy(newStr, oldStr);
    puts(newStr);
}