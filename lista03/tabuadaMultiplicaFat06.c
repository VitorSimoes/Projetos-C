#include "stdio.h"
#include <stdlib.h>
//a tela tem que ficar até 116x41 para 1
void gotoxy(int x,int y)
{
  printf("%c[%d;%df",0x1B,y,x);
}
void tabuada(int x)
{
  int y;
  static int a = 2,b = 2;
  if (x <= 9)
    {
      for (y = 1; y <= 9; y++)
      {
        gotoxy(a,b);
        printf("%d x %d = %d\n", y, x, x*y);
        b++;
      }
      //reposiciona os pontos do gotoxy
      a+=13;
      b=2;
      tabuada(x+1);
    }
}
int main()
{
  int x;
  scanf("%d",&x);
  tabuada(x);
}
