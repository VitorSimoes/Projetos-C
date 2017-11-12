#include "stdio.h"

int somaAlgarismosrec(int n)
{
  if (n% 10 == n)
       return n;
   return ((n % 10) + somaAlgarismosrec(n/10));
}

int somaAlgarismosint(int n)
{
  int soma=0;
  while(n>0)
  {
    soma+=n%10;
    n/=10;
  }
  return soma;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",somaAlgarismosrec(n));
  printf("%d\n",somaAlgarismosint(n));
}
