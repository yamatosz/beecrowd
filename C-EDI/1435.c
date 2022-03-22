#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, e, f, g, h, i, j = 1, N, p = 0, q = 0, r;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
        {
            break;
        }
        else
        {
            j = 1;
            p = 0;
            q = 0;
            int matriz[N][N];
            i = N;
            if (N % 2 == 0)
            {
                r = N / 2;
            }
            else if (N % 2 == 1)
            {
                r = (N / 2) + 1;
            }
            for (c = 1; c <= r; c++)
            {
                for (a = p; a < i; a++)
                {
                    for (b = q; b < i; b++)
                    {
                        matriz[a][b] = j;
                    }
                }
                j++;
                p++;
                q++;
                i--;
            }
            for (c = 0; c < N; c++)
            {
                for (b = 0; b < N; b++)
                {
                    if (b == 0)
                    {
                        printf("%3d", matriz[c][b]);
                    }
                    else
                    {
                        printf(" %3d", matriz[c][b]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}