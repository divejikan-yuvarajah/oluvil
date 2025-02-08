#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float radius,area,circumference;
    radius = 12.0;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of circle : %f\n",area);
    printf("circumference of the circle : %f\n",circumference);
    return 0;
}
