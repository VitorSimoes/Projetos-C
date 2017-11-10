#include <stdio.h>

int main()
{
int parteint;
float valor, entrada, parcelas, calculo, partedec;
printf("Valor do produto eh: R$ ");
scanf("%f",&valor);
partedec=valor-(int)valor;
if (partedec==0)
{
  calculo=valor/3;
  printf("A entrada e as duas prestacoes sao iguais a: R$%.2f \n", calculo);
}
else
{
  parteint=(int)valor;
  parcelas=(int)parteint/3;
  entrada=(parteint-(2*parcelas))+partedec;
  printf("A entrada eh de R$%.2f, e as duas prestacoes sao iguais a R$%.2f \n", entrada, parcelas);
}
return 0;
}
