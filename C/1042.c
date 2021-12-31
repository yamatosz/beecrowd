#include <stdio.h>

void org(int vet[], int n)
{
    int i, j, menor, aux;
    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (vet[menor] > vet[j])
            {
                menor = j;
            }
        }
        if (i != menor)
        {
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }
}

int main()
{

    int n = 3, i;
    int vet[3], vetAux[3];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < n; i++)
    {
        vetAux[i] = vet[i];
    }

    org(vet, n);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vetAux[i]);
    }
    return 0;
}