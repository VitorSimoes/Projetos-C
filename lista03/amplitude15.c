#include "stdio.h"
#include "stdlib.h"

float maior(float *vet,int n)
{
  int i;
  float m;
  m=vet[0];
  for(i=1;i<n;i++)
  {
    if(vet[i]>m)
      m=vet[i];
  }
  return m;
}

float menor(float *vet,int n)
{
  int i;
  float m;
  m=vet[0];
  for(i=1;i<n;i++)
  {
    if(vet[i]<m)
      m=vet[i];
  }
  return m;
}

float amplitude(float *vet,int n)
{
  return(maior(vet,n)-menor(vet,n));
}

int main()
{
  int n,i;
  float *vet;
  scanf("%d",&n);
  vet=(float*)malloc(n*sizeof(float));
  for(i=0;i<n;i++)
    scanf("%f",&vet[i]);
  printf("amplitude eh :%f\n",amplitude(vet,n));
}
