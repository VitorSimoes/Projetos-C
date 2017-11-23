#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int produtoescalar(int *vet,int*vet2,int n)
{
  int i, prod = 0;
  for (i = 0; i < n; i++)
    prod+=vet[i]*vet2[i];
  return(prod);
}
int main(){
  int n,*vet,*vet2;
  scanf("%d",&n);
  vet=(int*)malloc(n*sizeof(int));
  vet2=(int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
    scanf("%d",&vet[i]);
  for(int i=0;i<n;i++)
    scanf("%d",&vet2[i]);
  printf("%d\n",produtoescalar(vet,vet2,n));
}
