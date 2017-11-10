#include "stdio.h"

int fatorialImpar(int n){
  if (n==1)
    return 1;
  else
    return n*fatorialImpar(n-2);
}

int main(){
  int n;
  scanf("%d",&n);
  if (n%2 !=0)
    printf("%d!= %d\n",n,fatorialImpar(n));
  else
    printf("O numero não eh impar");
}
