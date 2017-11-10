#include<stdio.h>

int main(){
    int quantia,cq,dz,cc,um;
    printf("Entre com a quantia solicitada: ");
    scanf("%d",&quantia);
    if (quantia>=50){
        cq=quantia/50;
        quantia=quantia%50;
    }
    if (quantia>=10){
        dz=quantia/10;
        quantia=quantia%10;
    }
    if (quantia>=5){
        cc=quantia/5;
        quantia=quantia%5;
    }
    if (quantia>=1){
        um=quantia;
    }
    printf("\n %d notas de R$50",cq);
    printf("\n %d notas de R$10",dz);
    printf("\n %d notas de R$5",cc);
    printf("\n %d notas de R$1\n",um);
return 0;
}
