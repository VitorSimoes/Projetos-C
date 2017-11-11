#include "stdio.h"

int ehPrimo(int n){
  int i,acm=0;
  for (i=1;i<=n;i++)
  {
    if(n%i==0)
      acm++;
  }
  return acm;
}
int fatPrimo(int n){
  int ret=1,i;
  for (i=2; i<=n;i++){
      if(ehPrimo(i)==2)
      {
        ret=ret*i;
      }
  }
  return ret;
}
int main(){
  int n;
  scanf("%d",&n);
  if (ehPrimo(n)==2)
    printf("%d\n",fatPrimo(n));
  else
    printf("Não eh primo\n");
}
