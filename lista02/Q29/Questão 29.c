#include <stdio.h>
int main()
{
  int n,i,soma,dobro;
  printf("Informe o limite: ");
  scanf("%d", &n);
  dobro=2*n;
  soma=0;
  	for (i=1;i<=n;i++)
  	{
  		if(n % i == 0)
  			  soma+=i;
  	}
    if(soma==dobro)
  		  printf("%d e um numero perfeito\n",n);
    else
  	  printf ("%d nao e um numero perfeito\n",n);
    return 0;
  }
