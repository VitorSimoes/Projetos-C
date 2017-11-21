#include "stdio.h"
#include "stdlib.h"

void invert(int n,int *vet)
{
  int i,temp;
  for(i=0;i<n/2;i++)
  {
    temp=vet[i];
    vet[i]=vet[n-i-1];
    vet[n-i-1]=temp;
  }
}

int main()
{
  int i,n,*vet;
  scanf("%d",&n);
  vet=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    printf("\nDigite o %d numero do vetor",i+1);
    scanf("%d",&vet[i]);
  }
  invert(n,vet);
  for(i=0;i<n;i++)
  {
    printf("\nO %d numero do vetor",i+1);
    printf("%d\n",vet[i]);
  }
}
