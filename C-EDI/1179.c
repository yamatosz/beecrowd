#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par[5], impar[5], aux[15];
    int c = 0, l = 0, m = 0, x = 0;
    int a, b, d, e, f, g, h, i, j, n, p;

    for (i = 0; i < 15; i++)
    {
        scanf("%d", &aux[i]);
    }

    for (a = 0; a < 15; a++)
    {
        if (l == 5)
        {
            for (n = 0; n < 5; n++)
            {
                printf("impar[%d] = %d\n", n, impar[n]);
            }
            l = 0;
        }
        if (m == 5)
        {
            for (p = 0; p < 5; p++)
            {
                printf("par[%d] = %d\n", p, par[p]);
            }
            m = 0;
        }
        if (aux[a] % 2 != 0)
        {
            impar[c] = aux[a];
            ++c;
            l++;
            if (c == 5)
            {
                c = 0;
            }
        }
        if (aux[a] % 2 == 0)
        {
            par[x] = aux[a];
            ++x;
            m++;
            if (x == 5)
            {
                x = 0;
            }
        }
    }
    for (i = 0; i < l; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (i = 0; i < m; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}