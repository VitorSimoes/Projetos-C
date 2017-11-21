#include "stdio.h"

int mdc(int a,int b)
{
  if(b==0)
    return a;
  else
    return mdc(b,a%b);
}
int mmc(int a,int b)
{
  int div;
  if(b == 0)
    return a;
  else{
    div = (a*b)/(mdc(a,b));
    return (div);
  }
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",(mmc(a,b)));

}
