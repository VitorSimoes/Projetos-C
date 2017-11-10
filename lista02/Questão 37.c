#include<stdio.h>

int main(int argc, char *argv[]) 
{
      int k, n;
      float h = 0;
      scanf("%d", &n);
      for (k = n; k >= 1; k = k - 1) h = h + 1.0 / k;
      printf("%f\n", h);
      return 0;
   }

