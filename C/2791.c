#include <stdio.h>

int feijao()
{
    int a, b, c, d, i;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int feijao[] = {a, b, c, d};
    for (i = 0; i < 4; i++)
    {
        if (feijao[i] == 1)
        {
            return i + 1;
        }
    }
}

int main()
{
    int n;
    n = feijao();
    printf("%d\n", n);
    return 0;
}