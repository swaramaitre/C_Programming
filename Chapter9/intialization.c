#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1 = {1664, 9.2, "Shraddha"};
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("student name = %s\n", s1.name);

    struct student s2 = {1660, 8.5, "Rajat"};
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);
    printf("student name = %s\n", s2.name);

    struct student s3 = {1665, 7.5, "Ansh"};
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    printf("student name = %s\n", s3.name);

    return 0;
}