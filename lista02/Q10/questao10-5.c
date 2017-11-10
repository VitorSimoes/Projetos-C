#include<stdio.h>

int main()
{
  int lado,raio,perimetro;
  scanf("%d %d",&lado,&raio);
  if (lado == 3){
    perimetro=3*raio;
    printf("%d*raiz(3)\n",perimetro );
  }else if (lado == 4){
    perimetro=4*raio;
    printf("%d*raiz(2)\n",perimetro );
  }
  else if (lado == 6){
    perimetro=6*raio;
    printf("%d\n",perimetro );
  }
  else
    printf("Poligono não é regular\n" );
  return 0;
}
