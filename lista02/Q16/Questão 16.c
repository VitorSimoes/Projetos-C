#include<stdio.h>
#include<math.h>

int main()
{
  int valorfincancia,nprestacao;
  float taxa,p;
  printf("Digite o valor do financiamento");
  scanf("%d",&valorfincancia);
  printf("Digite o numero de prestacoes");
  scanf("%d",&nprestacao);
  printf("Digite a taxa de juros");
  scanf("%f",&taxa);
  p =(valorfincancia/((pow(1+taxa,nprestacao)-1)/(taxa*(pow(1+taxa,nprestacao)))));
  printf("O valor das prestacoes para amortizaçao eh: %f\n",p);
  return 0;
}
