#include<stdio.h>

int main(){
    int n1,n2,c1,c2;
    double p1,p2;

    scanf("%d %d %lf",&c1,&n1,&p1);
    scanf("%d %d %lf",&c2,&n2,&p2);
    printf("VALOR A PAGAR: R$ %.2f\n",(n1*p1)+(n2*p2));

    return 0;
}