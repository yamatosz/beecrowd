// BEE 1144 - SEQUÊNCIA LÓGICA
#include <stdio.h>

int main()
{
    int n;
    int a, b, c, d, e, f;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        a = i;
        b = a * a;
        c = a * b;
        d = i;
        e = b + 1;
        f = c + 1;
        printf("%d %d %d\n%d %d %d\n", a, b, c, d, e, f);
    }

    return 0;
}