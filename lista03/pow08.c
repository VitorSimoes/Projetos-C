#include "stdio.h"

int powrec(int a,int b)
{
  if(b!=0)
    return a*powrec(a,b-1);
  else
    return 1;

}
int powint(int a,int b)
{
  int result=1;
  for(int i=0;i<b;i++)
    result*=a;
  return result;
}

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",powrec(a,b));
  printf("%d\n",powint(a,b));
}
