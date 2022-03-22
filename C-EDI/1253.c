#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, n, o, chave, tamanho;
    char palavra[51];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", &palavra);
        scanf("%d", &chave);
        tamanho = strlen(palavra);
        for (o = 0; o <= tamanho; o++)
        {
            if (palavra[o] >= 'A' && palavra[o] <= 'Z')
            {
                if (palavra[o] - chave < 'A')
                {
                    palavra[o] = palavra[o] + 26 - chave;
                }
                else
                {
                    palavra[o] -= chave;
                }
            }
        }
        puts(palavra);
    }

    return 0;
}