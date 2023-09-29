#include <stdio.h>
#include <math.h>

void quadrado_cubo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }
};

int main()
{
    int n;
    scanf("%d", &n);
    quadrado_cubo(n);
    return 0;
}