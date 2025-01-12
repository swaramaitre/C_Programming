//Enter address (house no., block, city, state) of 5 people
#include<stdio.h>
#include<string.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main() {
    struct address adds[5];

    printf("Enter info for person 1:\n");
    printf("House Number: ");
    scanf("%d", &adds[0].houseNo);
    printf("Block: ");
    scanf("%d", &adds[0].block);
    printf("City: ");
    scanf("%s", adds[0].city);
    printf("State: ");
    scanf("%s", adds[0].state);

    printf("Enter info for person 2:\n");
    printf("House Number: ");
    scanf("%d", &adds[1].houseNo);
    printf("Block: ");
    scanf("%d", &adds[1].block);
    printf("City: ");
    scanf("%s", adds[1].city);
    printf("State: ");
    scanf("%s", adds[1].state);

    printf("Enter info for person 3:\n");
    printf("House Number: ");
    scanf("%d", &adds[2].houseNo);
    printf("Block: ");
    scanf("%d", &adds[2].block);
    printf("City: ");
    scanf("%s", adds[2].city);
    printf("State: ");
    scanf("%s", adds[2].state);

    printf("Enter info for person 4:\n");
    printf("House Number: ");
    scanf("%d", &adds[3].houseNo);
    printf("Block: ");
    scanf("%d", &adds[3].block);
    printf("City: ");
    scanf("%s", adds[3].city);
    printf("State: ");
    scanf("%s", adds[3].state);

    printf("Enter info for person 5:\n");
    printf("House Number: ");
    scanf("%d", &adds[4].houseNo);
    printf("Block: ");
    scanf("%d", &adds[4].block);
    printf("City: ");
    scanf("%s", adds[4].city);
    printf("State: ");
    scanf("%s", adds[4].state);

    printf("\nInfo for person 1:\n");
    printAdd(adds[0]);
    printf("\nInfo for person 2:\n");
    printAdd(adds[1]);
    printf("\nInfo for person 3:\n");
    printAdd(adds[2]);
    printf("\nInfo for person 4:\n");
    printAdd(adds[3]);
    printf("\nInfo for person 5:\n");
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add) {
    printf("Address is: %d, Block %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}
