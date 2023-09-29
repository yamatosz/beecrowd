#include <stdio.h>

int saldo(int n, int s)
{
    int movimentacao, menor = s;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &movimentacao);
        s += movimentacao;
        if (s < menor)
        {
            menor = s;
        }
    }
    return menor;
}

int main()
{
    int n, s;
    scanf("%d %d", &n, &s);

    printf("%d\n", saldo(n, s));
    return 0;
}