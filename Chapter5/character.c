#include<stdio.h>
void namaste();
void bonjour();

int main()
{
    printf("Enter F for French and I for Indian: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'I')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void namaste()
{
    printf("Namaste \n");
}
void bonjour()
{
    printf("Bonjour \n");
}