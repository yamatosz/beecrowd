#include <stdio.h>

int main()
{
    int inicial, final, contador = 0;

    scanf("%d %d", &inicial, &final);

    do
    {
        inicial++;
        contador++;
        if (inicial == 24)
        {
            inicial = 0;
        }
    } while (inicial != final);
    printf("O JOGO DUROU %d HORA(S)\n", contador);

    return 0;
}