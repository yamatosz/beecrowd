#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double N[100], n;

    scanf("%lf", &n);

    for (i = 0; i < 100; i++)
    {
        N[i] = n;
        n = n / 2;
    }

    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}