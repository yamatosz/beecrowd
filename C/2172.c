// BEE 2172 - EVENTO
#include <stdio.h>

int main()
{
    int x;
    long int m;

    while (1)
    {
        scanf("%d %d", &x, &m);
        if (x == 0 && m == 0)
        {
            break;
        }
        printf("%d\n", m * x);
    }

    return 0;
}