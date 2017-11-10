#include<stdio.h>
#include<math.h>

int main()
{
  int n1,n2,n3,maior,cata,catb;
  printf("Digite os lados do triangulo");
  scanf("%d %d %d",&n1,&n2,&n3);
  maior=n1;
  cata=n2;
  catb=n3;
  if (n2>n1 && n2>n3){
    maior=n2;
    cata =n1;
    catb =n3;
  }else if (n3>n1 && n3>n2){
    maior=n3;
    cata =n2;
    catb =n1;
  }
  if(pow(maior,2)==pow(cata,2)+pow(catb,2))
    printf("O triangulo eh retangulo com hipotenusa = %d cateto = %d cateto = %d \n",maior,cata,catb);
  else
    printf("Não eh um triangulo retangulo\n");
  return 0;
}
