#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void) {

    float radius, area;

    printf("Input radius of a circle: ");
    scanf("%f", &radius);

    area = PI * (radius * radius);

    printf("Area is: %f", area);

    return 0;
}