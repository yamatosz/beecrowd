#include<stdio.h>

int main(){

    char nome[256];
    double salariofixo, vendas, total;

    scanf("%s",&nome);
    scanf("%lf",&salariofixo);
    scanf("%lf",&vendas);

    total=salariofixo+(vendas*0.15);

    printf("TOTAL = R$ %.2lf\n",total);


    return 0;
}