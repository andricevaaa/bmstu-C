#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long z, p, e;
    printf("Aprtment number ");
    if (scanf("%ld", &z) != 1)
    {
        return EXIT_FAILURE;
    };
    if (z < 1)
    {
        return EXIT_FAILURE;
    }

    p = (z - 1) / (36) + 1;
    e = ((z - (p - 1) * 36) - 1) / 4 + 1;

    printf("Entrance %ld\n", p);
    printf("Floor %ld\n", e);

    return EXIT_SUCCESS;
}
