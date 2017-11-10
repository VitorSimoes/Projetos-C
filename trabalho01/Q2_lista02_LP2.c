#include "stdio.h"

int primo(int n){
  int i,acm;
  for (i=1;i<=n;i++)
  {
    if(n%i==0)
      acm++;
  }
  if (acm==2)
    return 1;
  else
    return 0;
}

int main(){
  int n;
  printf("Digite o Numero ");
  scanf("%d",&n);
  if (primo(n))
    printf("Eh primo\n");
  else
    printf("Nao eh primo\n");
}
