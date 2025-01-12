// Make a structure to store bank account information of customer of ABC bank. Also make an alias for it
#include<stdio.h>
#include<string.h>

typedef struct bankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Shraddha"};
    acc acc2 = {124, "Rajat"};
    acc acc3 = {125, "Sudhir"};

    printf("Account No. = %d\n", acc1.accountNo);
    printf("Name = %s\n", acc1.name);

    printf("Account No. = %d\n", acc2.accountNo);
    printf("Name = %s\n", acc2.name);

    printf("Account No. = %d\n", acc3.accountNo);
    printf("Name = %s\n", acc3.name);

    return 0;
}
