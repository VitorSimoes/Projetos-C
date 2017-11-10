#include "stdio.h"

void clac_esfera(float r,float *area,float *volume){
  if (r!=0)
  {
      *area = 4*pow(r,2);
      *volume = (4*pow(r,3))/3;
      printf("Area =%.2f e Volume=%.2f\n",*area,*volume);
  }
  else
    printf("Não há area nem volume");
}

int main(){
  float r,*area,*volume;
  scanf("%f",&r);
  clac_esfera(r,&area,&volume);
}
