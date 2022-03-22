#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n, primeiro = 0, segundo = 1, proximo, t;
    int i, o;
    scanf("%d", &o);

    for (i = 1; i <= o; i++, primeiro = 0, segundo = 1)
    {
        scanf("%lld", &n);
        n++;
        for (t = 0; t < n; t++)
        {
            if (t <= 1)
            {
                proximo = t;
            }
            else
            {
                proximo = primeiro + segundo;
                primeiro = segundo;
                segundo = proximo;
            }
        }
        printf("Fib(%lld) = %lld\n", n - 1, proximo);
    }

    return 0;
}