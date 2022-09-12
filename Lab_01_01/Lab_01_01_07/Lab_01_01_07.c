#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long sign;
    double eps, x;
    double element, s;
    double fmins, fsf;
    double f;

    printf("The value of x: \n");
    if (scanf("%lf", &x) != 1)
    {
        return EXIT_FAILURE;
    };

    printf("The value of eps: \n");
    if (scanf("%lf", &eps) != 1 || eps < 0)
    {
        return EXIT_FAILURE;
    };

    s = x;
    element = x;
    sign = 1;
    while (fabs(element) > eps)
    {
        element = element*((x*x)/((sign+1)*(sign+2)));
        s = s+(element * ((-1) * sign));
        sign++;
    };
    f = sin(x);
    fmins = fabs(f-s);
    fsf = fabs((f-s)/f);

    printf("s(x) is: %lf\n", s);
    printf("f(x) is: %lf\n", f);
    printf("|f(x)-s(x)| is: %lf\n", fmins);
    printf("|(f(x)-s(x))/f(x)| is: %lf\n", fsf);

    return EXIT_SUCCESS;
}
