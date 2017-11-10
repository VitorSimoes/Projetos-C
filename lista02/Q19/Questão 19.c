#include<stdio.h>

int main()
{
  int n1,n2,n3,maior;
  printf("Digite os tres numeros");
  scanf("%d %d %d",&n1,&n2,&n3);
  maior=n1;
  if (n2>n1 && n2>n3)
    maior=n2;
  else if (n3>n1 && n3>n2)
    maior=n3;
  printf("%d\n",maior);
  return 0;
}
