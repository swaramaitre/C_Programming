//Program to give grades to a student. For marks < 30 - C; 30 <= marks < 70 - B; 70 <= marks < 90 - A; 90 <=marks <=100 - A+;
#include<stdio.h>
int main()
{
    int  marks;
    printf("Enter marks(0-100): ");
    scanf("%d", &marks);

    if(marks < 30)
    {
        printf("C \n");
    }
    else if(marks >= 30 && marks < 70)
    {
        printf("B \n");
    }
    else if(marks >= 70 && marks < 90)
    {
        printf("A \n");
    }
    else
    {
        printf("A+ \n");
    }
    return 0;
}