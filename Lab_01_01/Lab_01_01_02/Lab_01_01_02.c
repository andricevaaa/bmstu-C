#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
#define PI 3.14159265358979323846
    double a, b, angle, S, l;
    printf("Enter the bigger side: ");
    if (scanf("%lf", &a) != 1)
    {
        return EXIT_FAILURE;
    };
    printf("Enter the shorter side: ");
    if (scanf("%lf", &b) != 1)
    {
        return EXIT_FAILURE;
    };
    printf("Enter the angle in degrees: ");
    if (scanf("%lf", &angle) != 1)
    {
        return EXIT_FAILURE;
    };

    if (a < b)
        {
        l = a;
        a = b;
        b = l;
    };

    if (a < 1 || b < 1)
    {
        return EXIT_FAILURE;
    };
    if (angle < 0 || angle > 90)
    {
        return EXIT_FAILURE;
    };

    angle = angle * PI / 180;
    S = (((a * a) - (b * b)) / 4) * tan(angle);

    printf("The area of trapezoid is %lf \n", S);
    return EXIT_SUCCESS;
}
