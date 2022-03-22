#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, processo, cont;
    char vetor[51];

    while (scanf("%s", &vetor) != EOF)
    {
        scanf("%d%*c", &n);
        processo = cont = 0;
        for (i = 0; vetor[i] != '\0'; i++)
        {
            if (vetor[i] == 'W')
            {
                cont++;
                if (processo > 0)
                {
                    processo = 0;
                    cont++;
                }
            }
            else
            {
                processo++;
                if (processo == n)
                {
                    cont++;
                    processo = 0;
                }
            }
        }
        if (processo > 0)
        {
            cont++;
        }
        printf("%d\n", cont);
    }

    return 0;
}