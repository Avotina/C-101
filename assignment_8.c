#include <stdio.h>

int main(void) {

    int input_number;

    printf("Input a number between 1-500: ");
    scanf("%d", &input_number);

    if (input_number <= 100) {
        printf("Your number is between 1 and 100.");
    } else if (input_number <= 200) {
        printf("Your number is between 101 and 200.");
    } else if (input_number <= 300) {
        printf("Your number is between 201 and 300.");
    } else if (input_number <= 400) {
        printf("Your number is between 301 and 400.");
    } else if (input_number <= 500) {
        ("Your number is between 401 and 500.");
    } else {
        printf("The number is not in the 1-500 range.");
    }

    return 0;
}