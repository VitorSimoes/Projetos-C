#include "stdio.h"
#include "stdlib.h"
void insere(int *v,int t,int x,int p)
{
  int i;
  t+=1;
  for(i=t;i>p;i--)
    v[i]=v[i-1];
  v[p]=x;
}

int main(){
  int i,x,p,*v,t;
  scanf("%d",&t);
  v=(int*)malloc(t*sizeof(int));
  for(i=0;i<t;i++)
    scanf("%d",&v[i]);
  scanf("%d %d",&x,&p);
  insere(v,0,x,p);
  for(i=0;i<t;i++)
    printf("\n%d\n",v[i]);

}
