/*URI 1018 Cédulas */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int valor,cem,cinq,vint,dez,cinc,dois,troco;


    scanf("%d",&valor);

    troco=valor;

    cem=valor/100;
    valor=valor-(cem*100);

    cinq=valor/50;
    valor=valor-(cinq*50);

    vint=valor/20;
    valor=valor-(vint*20);

    dez=valor/10;
    valor=valor-(dez*10);

    cinc=valor/5;
    valor=valor-(cinc*5);

    dois=valor/2;
    valor=valor-(dois*2);

    printf("%d\n",troco);
    printf("%d nota(s) de R$ 100,00\n",cem);

    printf("%d nota(s) de R$ 50,00\n",cinq);

    printf("%d nota(s) de R$ 20,00\n",vint);

    printf("%d nota(s) de R$ 10,00\n",dez);

    printf("%d nota(s) de R$ 5,00\n",cinc);

    printf("%d nota(s) de R$ 2,00\n",dois);

    printf("%d nota(s) de R$ 1,00\n",valor);
    
    return 0;
}