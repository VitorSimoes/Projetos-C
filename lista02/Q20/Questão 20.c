#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a,&b,&c);
	if (a==b==c)
		printf("equilatero\n");
	else if(a==b || a==c || b==c)
		printf("isosceles\n");
	else
		printf("escaleno\n");
	return 0;
}
