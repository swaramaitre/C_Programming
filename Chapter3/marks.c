//Program to check if a student passed or failed. Marks>30 is Pass and marks<=30 is Fail
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks(0-100): ");
    scanf("%d", &marks);

    if(marks >= 0 && marks <= 30)
    {
        printf("Fail \n");
    }
    else if(marks > 30 && marks <= 100)
    {
        printf("Pass \n");
    }
    else
    {
        printf("Wrong marks entered");
    }
    return 0;
}