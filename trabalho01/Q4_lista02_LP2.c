#include "stdio.h"

int soma_impares(int n){
  int i,soma=0;
  for (i=1;i<=n;i++){
    if (i%2!=0)
      soma+=i;
  }
  return soma;
}

int main(){
  int n;
  printf("Digite o numero ");
  scanf("%d",&n);
  printf("%d\n",soma_impares(n));
}
