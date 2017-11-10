#include "stdio.h"

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
if ((x1<x<x0) && (y1<y<y0))
  return 1;
else
  return 0;
}

int main(){
  int x0,y0,x1,y1,x,y;
  printf("Digite o canto inferior esquerdo  ");
  scanf("%d %d",&x0,&y0);
  printf("Digite o canto superior direito ");
  scanf("%d %d",&x1,&y1);
  printf("Digite o ponto que deseja saber se estah contido  ");
  scanf("%d %d",&x,&y);
  if (dentro_ret(x0,y0,x1,y1,x,y))
    printf("Estah contido\n");
  else
    printf("Nao estah contido\n");
}
