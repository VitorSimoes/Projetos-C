#include <stdio.h>
#include "stdlib.h"
int main()
{
  int i,cont=0,temp,num,*vet2,*vet;
  scanf("%d", &num);
  vet=(int*)malloc(num*sizeof(int));
  vet2=(int*)malloc(num*sizeof(int));
  //povoa o vet e preenche o vet2
  for(i=0;i<num;i++)
  {
    scanf("%d",&vet[i]);
    vet2[i]=vet[i];
  }
  //inverte o vetor
  for(i=0;i<num/2;i++)
  {
    temp=vet[i];
    vet[i]=vet[num-i-1];
    vet[num-i-1]=temp;
  }
  //compara para ver se eh polindrome
  for(i=0;i<num;i++)
  {
    if (vet[i] == vet2[i])
      cont+=1;
  }
  //apresentação para usuário
  if (cont==num)
    printf("eh palindromo\n");
  else
    printf("nao eh palindromo\n");
  }
