#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int cod,quantidade;

    scanf("%d %d",&cod,&quantidade);
    switch (cod)
    {
    case  1:
        printf("Total: R$ %.2lf\n",quantidade*4.00);
        break;
    
    case 2:
        printf("Total: R$ %.2lf\n",quantidade*4.50);
        break;
    
    case 3:
         printf("Total: R$ %.2lf\n",quantidade*5.00);
         break;
    case 4:
        printf("Total: R$ %.2lf\n",quantidade*2.00);
         break;
    case 5:
        printf("Total: R$ %.2lf\n",quantidade*1.50);
        break;
    }


    return 0;
}