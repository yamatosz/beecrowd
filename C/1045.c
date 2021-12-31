#include <stdio.h>

void org(double lados[], int n)
{
    int maior, aux;
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        maior = i;
        for (j = i + 1; j < n; j++)
        {
            if (lados[maior] < lados[j])
            {
                maior = j;
            }
        }
        if (i != maior)
        {
            aux = lados[i];
            lados[i] = lados[maior];
            lados[maior] = aux;
        }
    }
}

int main()
{
    double lados[3];
    double a, b, c;
    int i;

    scanf("%lf %lf %lf", &lados[0], &lados[1], &lados[2]);
    org(lados, 3);

    a = lados[0];
    b = lados[1];
    c = lados[2];

    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (a * a == (b * b) + (c * c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (a * a > (b * b) + (c * c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if (a * a < (b * b) + (c * c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (a == b || b == c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}