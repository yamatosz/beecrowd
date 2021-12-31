#include<stdio.h>

int main(){

    int num, t;
    double c, salario;

    scanf("%d",&num);
    scanf("%d",&t);
    scanf("%lf",&c);
    salario=t*c;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,salario);

    return 0;
}