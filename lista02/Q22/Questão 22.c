#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, delta, x1, x2;
	printf("digite os coeficientes");
	scanf("%d %d %d",&a,&b,&c);
	delta = pow(b,2) - (4*a*c);
	if(delta == 0){
		x1 = (b*(-1) + sqrt(delta))/(2*a);
		printf("a raiz eh real e %d\n", x1);
	}else if(delta > 0){
			x1 = ((b*(-1)) + sqrt(delta))/(2*a);
			x2 = ((b*(-1)) - sqrt(delta))/(2*a);
			printf("a raizes reais sao %d e %d\n", x1, x2);
		}
	else{
		x1 = ((b*(-1)) + sqrt(delta))/(2*a);
		x2 = ((b*(-1)) - sqrt(delta))/(2*a);
			printf("a raizes complexas sao %d e %d\n", x1, x2);
	}
	return 0;
}
