#include "stdio.h"
#include "math.h"
#include "stdlib.h"
void deriva(double *poli,int grau,double *out)
{
  int i,temp=0;
  for(i=grau;i>=1;i=i-1)
  {
    out[i-1]=poli[temp]*i;
    temp++;
  }
}

int main(){
  double *poli,*out;
  int grau,i,temp;
  printf("Digite o grau do polinomio");
  scanf("%d",&grau);
  poli=(double *)malloc(grau+1*sizeof(double));
  out =(double *)malloc(grau*sizeof(double));
  //povoa o vetor
  for(i=0;i<=grau;i++){
    scanf("%lf",&poli[i]);
  }
  deriva(poli,grau,out);
  //printa o vetor
  for(i=0;i<grau;i++){
    printf("%lf\n",out[i]);
  }
  free(poli);
  free(out);

}
