#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[12][12], soma = 0.0;
    int i, o, inicio = 0, fim = 4;
    char op[2];

    scanf("%s", &op);
    for (i = 0; i < 12; i++)
    {
        for (o = 0; o < 12; o++)
        {
            scanf("%lf", &M[i][o]);
        }
    }
    for (i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (o = 0; o <= inicio; o++)
            {
                soma += M[i][o];
            }
            inicio++;
        }
        else if (i >= 6)
        {
            for (o = 0; o <= fim; o++)
            {
                soma += M[i][o];
            }
            fim--;
        }
    }
    if (op[0] == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else if (op[0] == 'M')
    {
        printf("%.1lf\n", soma / 30.0);
    }

    return 0;
}