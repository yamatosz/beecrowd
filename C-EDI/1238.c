#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, o, x, tamanho1, tamanho2;
    char palavra1[51], palavra2[51], combinadas[101];

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf("%s%s", palavra1, palavra2);
        tamanho1 = strlen(palavra1);
        tamanho2 = strlen(palavra2);

        for (o = 0, x = 0; o < tamanho1 && o < tamanho2; ++o, x += 2)
        {
            combinadas[x] = palavra1[o];
            combinadas[x + 1] = palavra2[o];
        }
        for (; o < tamanho1; ++o, ++x)
        {
            combinadas[x] = palavra1[o];
        }
        for (; o < tamanho2; ++o, ++x)
        {
            combinadas[x] = palavra2[o];
        }

        combinadas[x] = '\0';

        puts(combinadas);
    }

    return 0;
}