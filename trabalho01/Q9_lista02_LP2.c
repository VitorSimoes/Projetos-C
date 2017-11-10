#include "stdio.h"

int pares(int n,int *vet)
{
  int i,cont;
  for(i=0;i<n;i++){
    if(vet[i]%2==0)
      cont++;
  }
  return cont;
}

int main() {
  int *vet,i,n;
  printf("Digite o tamanho do vetor");
  scanf("%d",&n);
  vet=(int *)malloc(n * sizeof (int));
  for (i = 0; i < n; i++)
  {
		printf("\nDigite o %d numero do vetor: ", i + 1);
		scanf("%d", &vet[i]);
	}
	printf("\nNumero pares no vetor: %d\n", pares(n, vet));
}
