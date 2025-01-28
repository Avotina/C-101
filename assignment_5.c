#include <stdio.h>

int main(void) {
    int seconds, hours, minutes, remaining_seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    // Calculate hours, minutes, and remaining seconds
    hours = seconds / 3600;                  // 1 hour = 3600 seconds
    remaining_seconds = seconds % 3600;      // Remaining seconds after extracting hours
    minutes = remaining_seconds / 60;        // 1 minute = 60 seconds
    remaining_seconds = remaining_seconds % 60; // Remaining seconds after extracting minutes

    printf("Time: %d hours, %d minutes, %d seconds\n", hours, minutes, remaining_seconds);

    return 0;
}