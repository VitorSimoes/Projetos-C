#include <stdio.h>
int main()
	{
	int numerador1,denominador1,numerador2,denominador2,resultnumera,resultdenomina;
	scanf("%d/%d %d/%d", &numerador1, &denominador1, &numerador2, &denominador2);
	if (denominador1>0 && denominador2>0) {
		resultdenomina=denominador1*denominador2;
		resultnumera=numerador1*numerador2;
		printf("%d/%d \n",resultnumera,resultdenomina);
	}
	else
		printf("entrada invalida!\n");
return 0;
}
