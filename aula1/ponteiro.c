#include<stdio.h>

void somaprod(int a,int b, int* soma,int* prod)
{
  *soma=a+b;
  *prod=a*b;
}
int main(void){
    int s,p;
    somaprod(3,5,&s,&p);
    printf("soma:%d \n produto:%d\n",s,p);
    return 0;
}
