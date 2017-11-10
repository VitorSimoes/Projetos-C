#include <stdio.h>
#include <math.h>

void raizes(float a,float b,float c,float *x1,float *x2){
float delta;
delta=pow(b,2)-4*a*c;
if (a!=0)
{
  if (delta >=0)
  {
    x1=((-b+sqrt(delta))/(2*a));
    x2=((-b-sqrt(delta))/(2*a));
  }
}
}

int main(){
float a,b,c,*x1,*x2;
scanf("%f %f %f",&a,&b,&c);
raizes(a,b,c,&x1,&x2);
printf ("\nx1=%.2f e x2=%.2f\n\n", *x1, *x2);
}
