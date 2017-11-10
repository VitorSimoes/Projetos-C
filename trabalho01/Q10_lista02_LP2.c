#include "stdio.h"

void inverte(int n, int*vet)
{
 int i,temp;
 for(i=0;i<n/2;i++)
 {
   temp=vet[i];
   vet[i]=vet[n-i-1];
   vet[n-i-1]=temp;
 }
 for(i=0;i<n;i++)
 {
   printf("%d\n",vet[i]);
 }
}

int main()
{
  int i,n,*vet;
  printf("Digite o tamanho do veto");
  scanf("%d",&n);
  vet=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
      printf("\nDigite o %d numero do vetor: ", i + 1);
      scanf("%d",&vet[i]);
  }
  inverte(n,vet);
}
