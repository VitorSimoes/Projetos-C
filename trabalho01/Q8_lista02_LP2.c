#include "stdio.h"

int negativos(int n, float *vet)
{
  int i,cont;
  for(i=0;i<n;i++)
  {
    if(vet[i] <0)
        cont++;
  }
  return cont;
}

int main()
{
  float *vet;
  int i,n;
  printf("Entre com o tamanho do vetor: ");
  scanf("%d",&n);
  vet = (float *)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
  {
		printf("\nDigite o %d numero do vetor: ", i + 1);
		scanf("%f", &vet[i]);
	}
	printf("\nNumero de negativos no vetor: %d\n", negativos(n, vet));
}
