#include <stdio.h>

char notas(int nota)
{
    if (nota == 0)
    {
        return 'E';
    }
    else if (nota >= 1 && nota <= 35)
    {
        return 'D';
    }
    else if (nota > 35 && nota <= 60)
    {
        return 'C';
    }
    else if (nota > 60 && nota <= 85)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
}

int main()
{
    int nota;
    scanf("%d", &nota);
    printf("%c\n", notas(nota));
    return 0;
}