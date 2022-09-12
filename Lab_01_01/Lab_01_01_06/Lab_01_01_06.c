#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2, x3, y3, a, b, c, s, P;
    printf("Enter coordinates: \n");
    printf("First point: \n");
    if (scanf("%lf", &x1) != 1)
    {
        return EXIT_FAILURE;
    };
    if (scanf("%lf", &y1) != 1)
    {
        return EXIT_FAILURE;
    };
    printf("Second point: \n");
    if (scanf("%lf", &x2) != 1)
    {
        return EXIT_FAILURE;
    };
    if (scanf("%lf", &y2) != 1)
    {
        return EXIT_FAILURE;
    };
    printf("Third point: \n");
    if (scanf("%lf", &x3) != 1)
    {
        return EXIT_FAILURE;
    };
    if (scanf("%lf", &y3) != 1)
    {
        return EXIT_FAILURE;
    };

    a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    if (a == b || b == c || a == c)
    {
        return EXIT_FAILURE;
    }

    s = (a + b + c) / 2;
    P = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle: %f\n", P);
    return EXIT_SUCCESS;
}
