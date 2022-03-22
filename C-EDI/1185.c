#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, o, j = 10;
    float M[12][12], soma = 0.0;
    char op[2];

    scanf("%s", &op);

    for (i = 0; i < 12; i++)
    {
        for (o = 0; o < 12; o++)
        {
            scanf("%f", &M[i][o]);
        }
    }
    for (i = 0; i <= 10; i++)
    {
        for (o = 0; o <= j; o++)
        {
            soma += M[i][o];
        }
        j--;
    }
    if (op[0] == 'S')
    {
        printf("%.1f", soma);
    }
    else if (op[0] == 'M')
    {
        printf("%.1f", soma / 66);
    }

    return 0;
}