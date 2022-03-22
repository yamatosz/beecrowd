#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n[1000], i, o;

    scanf("%d", &t);

    for (i = 0, o = 0; i < 1000; i++)
    {
        n[i] = o;
        o++;
        if (o == t)
            o = 0;
    }

    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}