#include <stdio.h>

int main(void) {

    int numerator, denominator;

    printf("Numerator: ");
    scanf("%d", &numerator);

    printf("Denominator: ");
    scanf("%d", &denominator);

    int remainder = numerator % denominator;

    if (remainder == 0) {
        printf("There is no reminder.");
    } else {
        printf("Reminder is: %d", remainder);
    }

    return 0;
}