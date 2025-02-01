// BEE 1985 - MacPRONALTS
#include <stdio.h>

float calcular(int cod, int q)
{
    switch (cod)
    {
    case 1001:
        return q * 1.5;
    case 1002:
        return q * 2.5;
    case 1003:
        return q * 3.5;
    case 1004:
        return q * 4.5;
    case 1005:
        return q * 5.5;
    default:
        return 0;
    }
}

int main()
{
    int p, cod, q;
    float r = 0;

    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d %d", &cod, &q);
        r += calcular(cod, q);
    }

    printf("%.2f\n", r);

    return 0;
}