// BEE 2752 - SAÍDA 6
#include <stdio.h>

int main()
{
    char txt[50] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", txt);
    printf("<%30s>\n", txt);
    printf("<%.20s>\n", txt);
    printf("<%-20s>\n", txt);
    printf("<%-30s>\n", txt);
    printf("<%.30s>\n", txt);
    printf("<%30.20s>\n", txt);
    printf("<%-30.20s>\n", txt);
    return 0;
}