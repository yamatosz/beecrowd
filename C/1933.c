#include <stdio.h>

int tridu(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", tridu(a, b));

    return 0;
}