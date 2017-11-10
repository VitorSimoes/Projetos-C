#include <stdio.h>

int main(){
	int numero[4],i,n;
	scanf("%d", &n);
	for (i=0;i<3;i++)
	{
		numero[i]=n%10;
		n/=10;
		printf("n1= %d\n",numero[i]);
	}
	return 0;
}
