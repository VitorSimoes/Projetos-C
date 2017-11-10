#include "stdio.h"

int NumDiv(int n){
  int ret,i;
  ret=0;
  for (i=1;i<n;i++){
    if(n%i==0)
      ret+=1;
  }
  return ret;
}
int ehPrimo(int n){
  int ret;
  if (NumDiv(n) == 2)
    ret=1;
  else
    ret=0;
  return ret;
}
int fatPrimo(int n){
  int ret,i;
  ret=1;
  for (i=0; i<n;i++){
    if (ehPrimo(n))
      ret*=i;
  }
  return ret;
}
int main(){
  int n;
  scanf("%d",&n);
  printf("%d",ehPrimo(n));
  if (ehPrimo(n)==1)
    printf("%d",fatPrimo(n));
  else
    printf("Não eh primo\n");
}
