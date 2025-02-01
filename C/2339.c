#include <stdio.h>

char avioes(int c, int p, int f)
{
    return (p >= c * f) ? 'S' : 'N';
}

int main()
{
    int c, p, f;

    scanf("%d %d %d", &c, &p, &f);
    printf("%c\n", avioes(c, p, f));
    return 0;
}