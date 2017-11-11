#include<stdio.h>

int kesimoDigito(int n,int i){
  int j,r;
  for (j=0; j<i;j++)
  {
    r=n%10;
    n/=10;
  }
  if (r==0 || n==0)
  {
      printf("Não existe o digito solicitado");
      return -1;
  }else
      return r;
}

int main(){
  int n,i;
  scanf("%d %d",&n, &i);
  if (i>0)
      printf("%d\n",kesimoDigito(n,i));
  else
      printf("%d\n",n);
}
