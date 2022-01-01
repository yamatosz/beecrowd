#include <stdio.h>

void tempo(int inicio_h, int inicio_m, int fim_h, int fim_m)
{
    int diferenca;

    diferenca = ((fim_h * 60) + fim_m) - ((inicio_h * 60) + inicio_m);

    if (diferenca <= 0)
    {
        diferenca += 24 * 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diferenca / 60, diferenca % 60);
}

int main()
{
    int hora_inicio, minuto_inicio, hora_final, minuto_final;

    scanf("%d %d %d %d", &hora_inicio, &minuto_inicio, &hora_final, &minuto_final);

    tempo(hora_inicio, minuto_inicio, hora_final, minuto_final);

    return 0;
}