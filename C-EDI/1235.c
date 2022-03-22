#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, o, tamanhoVetor, metadeVetor;
    char vetorLinha[102], vetorDecifrado[101];

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; ++i)
    {
        fgets(vetorLinha, 102, stdin);

        tamanhoVetor = strlen(vetorLinha) - 1;
        metadeVetor = (tamanhoVetor / 2) + (tamanhoVetor % 2);

        for (o = metadeVetor - 1; o >= 0; --o)
        {
            vetorDecifrado[metadeVetor - o - 1] = vetorLinha[o];
        }
        for (o = tamanhoVetor - 1; o >= metadeVetor; --o)
        {
            vetorDecifrado[tamanhoVetor - o - 1 + metadeVetor] = vetorLinha[o];
        }
        vetorDecifrado[tamanhoVetor] = '\0';
        puts(vetorDecifrado);
    }
}