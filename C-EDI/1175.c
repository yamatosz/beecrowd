#include <stdio.h>

int main()
{
    int N[20], i, m, aux;

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }
    for (i = 0, m = 19; i < m; i++, m--)
    {
        aux = N[i];
        N[i] = N[m];
        N[m] = aux;
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
}