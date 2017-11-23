#include "stdio.h"
#include "stdlib.h"
#include "math.h"

float media(float *vet, int n)
{
  int i;
  float acm = 0.0;
  for (i = 0; i < n; i++)
    acm +=vet[i];
  return(acm/n);
}

float desvio(float *vet, int n)
{
  int i;
  float *d,med;
  med = media(vet, n);
  d=(float*)malloc(n*sizeof(float));
  for (i = 0; i < n; i++)
    d[i] =pow(vet[i]-med,2);
  return(sqrt(media(d, n)));
}
int main(){
    int n,i;
    float *vet;
    scanf("%d",&n);
    vet=(float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
      scanf("%f",&vet[i]);
    printf("%f\n",desvio(vet,n));
}
