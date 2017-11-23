#include "stdio.h"
#include "stdlib.h"
#include "math.h"

float norma(int *vet,int n)
{
  int i;
  float norma = 0;
  for (i=0;i<n;i++)
    norma+=pow(vet[i],2);
  return(sqrt(norma));
}

int main(){
  int n,*vet;
  scanf("%d",&n);
  vet=(int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
    scanf("%d",&vet[i]);
  printf("%f\n",norma(vet,n));
}
