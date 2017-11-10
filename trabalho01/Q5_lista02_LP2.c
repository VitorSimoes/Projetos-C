#include <stdio.h>
#include <math.h>

double pi(int n){
  double form,i;
  for (i=0,form=0;i<=n;i++)
    form +=(pow(-1,i) /(2*i+1));
  return 4*form;
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%lf\n",pi(n));
}
