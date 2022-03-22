#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, o, j = 1;
    float soma, M[12][12];
    char op[2];

    scanf("%s", &op);

    for (i = 0; i < 12; i++)
    {
        for (o = 0; o < 12; o++)
        {
            scanf("%f", &M[i][o]);
        }
    }
    for (i = 11; i >= 1; i--)
    {
        for (o = j; o <= 11; o++)
        {
            soma += M[i][o];
        }
        j++;
    }
    if (op[0] == 'S')
    {
        printf("%.1f\n", soma);
    }
    else if (op[0] == 'M')
    {
        printf("%.1f\n", soma / 66);
    }

    return 0;
}