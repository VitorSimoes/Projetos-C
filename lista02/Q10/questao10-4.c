#include <stdio.h>

int main()
{
  int a,b,i,soma,v;
  scanf("%d %d",&a,&b);
  for(i=0;i<=b;i++)
  {
     soma=a*i;
     if (soma<=b){
       v=soma;
     }
  }
  printf("%d\n",v);
  return 0;
}
