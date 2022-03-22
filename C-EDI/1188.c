#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, o, inicio = 5, fim = 6;
    double M[12][12], soma = 0.0;
    char op[2];

    scanf("%s", &op);
    for (i - 0; i < 12; i++)
    {
        for (o = 0; o < 12; o++)
        {
            scanf("%lf", &M[i][o]);
        }
    }

    for (i = 7; i <= 11; i++)
    {
        for (o = inicio; o <= fim; o++)
        {
            soma += M[i][o];
        }
        inicio--;
        fim++;
    }
    if (op[0] == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else if (op[0] = 'M')
    {
        printf("%.1lf", soma / 30.0);
    }

    return 0;
}