#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long int a, d, x;
    printf("Input a: \n");
    if (scanf("%ld", &a) != 1) {
        return EXIT_FAILURE;
    };
    printf("Input d: \n");
    if (scanf("%ld", &d) != 1) {
        return EXIT_FAILURE;
    };
    if (a < 0 || d < 1) {
        return EXIT_FAILURE;
    };

    x = 0;

    while (a >= d) {
        a = a - d;
        x = x + 1;
    };

    printf("Result: %ld \n", x);
    printf("Remain: %ld", a);

    return EXIT_SUCCESS;
}
