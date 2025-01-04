// Program to write a function to calculate percentage of student from marks in Science, Math, Sanskrit
#include<stdio.h>
int calPercentage(int science, int math, int sanskrit);

int main()
{
    int sci = 98;
    int math = 95;
    int sanskrit = 99;

    printf("Percentage is : %d", calPercentage(sci, math, sanskrit));
    return 0;
}
int calPercentage(int science, int math, int sanskrit)
{
    return((science + math + sanskrit) / 3);
}