#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[12][12], resultado = 0.0;
    char op[2];
    int i, o, x = 0;

    scanf("%s", &op);

    for (i = 0; i < 12; i++)
    {
        for (o = 0; o < 12; o++)
        {
            scanf("%lf", &M[i][o]);
        }
    }

    for (i = 1; i < 12; i++)
    {
        for (o = 0; o <= x; o++)
        {
            resultado += M[i][o];
        }
        x++;
    }

    if (op[0] == 'M')
    {
        resultado = resultado / 66.0;
    }

    printf("%.1lf\n", resultado);

    return 0;
}