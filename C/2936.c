#include <stdio.h>

int quanta_mandioca(int valores[])
{
    int total = 225;
    int porcoes[5] = {300, 1500, 600, 1000, 150};
    for (int i = 0; i < 5; i++)
    {
        total += valores[i] * porcoes[i];
    }
    return total;
}

int main()
{
    int entradas[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &entradas[i]);
    }
    printf("%d\n", quanta_mandioca(entradas));
    return 0;
}