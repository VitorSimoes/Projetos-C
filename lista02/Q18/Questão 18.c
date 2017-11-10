
#include<stdio.h>
#include<math.h>

int main(){

    int a, c;
    float b;
    printf("Digite um Numero Inteiro: ");
    scanf("%d",&a);
    b=sqrt(a);
    c=b;
    if(b<=c){
             printf("\nO Numero Digitado eh um Quadrado Perfeito");
             printf("\nRaiz Quadrada de %d: %.f\n\n",a,b);
    }
    else
        printf("\nO Numero Digitado nao eh um Quadrado Perfeito\n\n");
    return 0;
}
