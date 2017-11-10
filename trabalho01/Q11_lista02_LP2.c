#include "stdio.h"
#include "math.h"
double avalia(double *poli,int grau,double x)
{
  int i;
  double result=0;
  for(i=0;i<=grau;i++)
  {
    result+=poli[i]*pow(x,i);
  }
return result;
}

int main(){
  double *poli,x;
  int grau,i,temp;
  printf("Digite o grau do polinomio");
  scanf("%d",&grau);
  printf("Digite o valor de x");
  scanf("%lf",&x);
  poli=(double *)malloc(grau+1*sizeof(double));
  //povoa o vetor
  for(i=0;i<=grau;i++){
    scanf("%lf",&poli[i]);
  }
  //inverte o vetor
  for(i=0;i<grau/2;i++)
  {
    temp=poli[i];
    poli[i]=poli[grau-i-1];
    poli[grau-i-1]=temp;
  }
  printf("O valor eh %lf\n",avalia(poli,grau,x));
}
