#include "stdio.h"
#include "math.h"

void le(int v[5])
{
  int i;
  for (i=0;i<5;i++)
  scanf("%d",&v[i]);
}

long numerosorteado(int v[5])
{
  int i;
  long n=0;
  for(i=4;i>=0;i--)
    n+=(v[i]%10)*(int)pow(10,4-i);
  return n;
}

int main()
{
  int i,v[5];
  le(v);
  printf("o numero sorteado eh: %ld\n",numerosorteado(v));

}
