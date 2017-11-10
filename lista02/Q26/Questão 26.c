#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, soma = 0;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		soma += pow(i,2);
	}
	printf("a soma eh %d\n", soma);
	return 0;
}
