#include "stdio.h"
#include "stdlib.h"

int maiorrec(int n,int *vet)
{
  int maior;
  if (n==1)
    maior=*vet;
  else
  {
    maior =maiorrec(n-1,vet);
    if (maior<vet[n-1])
      maior=vet[n-1];
  }
  return maior;
}

int main()
{
  int n,*vet;
  scanf("%d",&n);
  vet=(int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
    printf("\nDigite o %d numero do vetor",i+1);
    scanf("%d",&vet[i]);
  }
  printf("Maior valor eh:%d \n",maiorrec(n,vet));

}
