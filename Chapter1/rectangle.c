//Program to calculate perimeter of rectangle. take two sides l and b from the user.
#include<stdio.h>
int main()
{
    float l, b;
    printf("enter length l: ");
    scanf("%f", &l);

    printf("enter breadth b: ");
    scanf("%f", &b);

    printf("The perimeter of rectangle is %f \n", 2*(l + b));
    return 0;

}