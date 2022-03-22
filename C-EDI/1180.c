#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, menor, posicaoMenor;
    scanf("%d", &n);
    int N[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    menor = N[0];

    for (i = 0; i < n; i++)
    {
        if (N[i] < menor)
        {
            menor = N[i];
            posicaoMenor = i;
        }
    }
    printf("Menor valor: %d\n", N[posicaoMenor]);
    printf("Posicao: %d\n", posicaoMenor);

    return 0;
}