#include <stdio.h>
#include <math.h>

int main()
{

    double raio, area, n;

    n = 3.14159;
    scanf("%lf", &raio);
    area = raio * raio * n;
    printf("A=%.4lf\n", area);

    return 0;
}