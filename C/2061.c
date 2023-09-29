#include <stdio.h>
#include <string.h>

int abas(int n, int m)
{
    char acao[7];
    for (int i = 0; i < m; i++)
    {
        fflush(stdin);
        gets(acao);
        strcmp(acao, "fechou") == 0 ? n++ : n--;
    }
    return n;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", abas(n, m));
    return 0;
}