#include "stdio.h"

int fatRecursivo(int n)
{
  if (n==0)
    return 1;
  else
    return n*fatRecursivo(n-1);
}
int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fatRecursivo(n));
}
