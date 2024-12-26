//program to check if the given character is a digit or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch>='0' && ch<='9')
    {
        printf("character '%c' is a digit \n", ch);
    }
    else
    {
        printf("character '%c' is not a digit \n", ch);
    }
    return 0;
} 