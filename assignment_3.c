#include <stdio.h>

int main(void) {
    char firstName[40], lastName[40];

    printf("Enter your name: ");
    scanf("%39s", firstName);

    printf("Enter your last name: ");
    scanf("%39s", lastName);

    printf("Hello %s %s", firstName, lastName);

    return 0;
}