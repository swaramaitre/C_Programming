//Program to check if a character entered by user is uppercase or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case character. \n");
    }
    else if(ch >= 'a' && ch <='z')
    {
        printf("Lower case character. \n");
    }
    else
    {
        printf("Not a english character. \n");
    }
    return 0;
}