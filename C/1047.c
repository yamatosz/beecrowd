#include <stdio.h>

int main()
{
    int hinicial, minicial, sinicial;
    int hfinal, mfinal, sfinal;
    int tempo, horas, minutos;

    scanf("%d %d %d %d", &hinicial, &minicial, &hfinal, &mfinal);

    if (hfinal <= hinicial && mfinal <= minicial)
    {
        hfinal = hfinal + 24;
    }
    else if (mfinal <= mfinal)
    {
        mfinal = mfinal + 60;
        hfinal = hfinal - 1;
    }

    sinicial = (hinicial * 3600) + (minicial * 60);
    sfinal = (hfinal * 3600) + (mfinal * 60);

    tempo = (sfinal - sinicial);
    horas = tempo / 3600;
    minutos = (tempo - (horas * 3600)) / 60;

    printf("O JOGO DUROU %d HORA(S) %d MINUTO(S)\n", horas, minutos);

    return 0;
}