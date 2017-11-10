#include<stdio.h>

int main(){
  int a=5;
  int *p=&a;
  *p=2;
  (*p)++;
  printf("%d\n",a);
  return 0;
}
