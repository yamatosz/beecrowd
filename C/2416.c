#include <stdio.h>

int corrida(int c, int n)
{
    return c % n;
}

int main()
{
    int c, n;
    scanf("%d %d", &c, &n);
    printf("%d\n", corrida(c, n));
    return 0;
}