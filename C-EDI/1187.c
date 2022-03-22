#include <stdio.h>>
#include <stdlib.h>

int main()
{
    double M[12][12], soma = 0.0;
    char op[2];
    int i, o, j = 1, t = 10;

    scanf("%s", &op);
    for (i = 0; i < 12; i++)
    {
        for (o = 0; o < 12; o++)
        {
            scanf("%lf", &M[i][o]);
        }
    }
    for (i = 0; i <= 4; i++)
    {
        for (o = j; o <= t; o++)
        {
            soma += M[i][o];
        }
        j++;
        t--;
    }
    if (op[0] == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else if (op[0])
    {
        printf("%.1lf\n", soma / 30.0);
    }

    return 0;
}