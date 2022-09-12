#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long int v1,t1,v2,t2,v,t;

    printf("Enter first volume: "); scanf("%ld", &v1);
    printf("Enter first temperature: "); scanf("%ld", &t1);
    printf("Enter second volume: "); scanf("%ld", &v2);
    printf("Enter second temperature: "); scanf("%ld", &t2);

    if (v1 < 1 || v2 < 1)
    {
        return EXIT_FAILURE;
    };

    v = v1 + v2;
    t = ((v1*t1 + v2*t2)/v);

    printf("Volume is %ld", v);
    printf("Temperature is %ld", t);

    return EXIT_SUCCESS;
}
