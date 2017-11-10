#include<stdio.h>
#include<math.h>
int main()
{
  int num,d1,aux, soma, soma2;
	scanf("%d", &num);
	d1=num/100;
  aux=num-(d1*100);
  soma=d1+aux;
  soma2=pow(aux,2);
	if(pow(soma,2) == num)
	 printf("O NUMERO POSSUI TAL CARACTERISTICA\n");
	else
	 printf("O NUMERO NAO POSSUI TAL CARACTERISTICA\n");
	return 0;
}
