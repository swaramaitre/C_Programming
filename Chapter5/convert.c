// Program to write a function to convert celcius to farenheit.
#include<stdio.h>
float convertTemp(float Celcius);

int main()
{
    float far = convertTemp(0);
    printf("far : %f", far);
    return 0;
}
float convertTemp(float Celcius)
{
    float far = Celcius * (9.0 / 5.0) + 32;
    return far;
}