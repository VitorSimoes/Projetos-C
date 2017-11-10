#include <stdio.h>

main()
{
	int numerador,denominador, quociente, resto;
	printf("Digite o numero 1");
	scanf(" %d", &numerador);
	printf("Digite o numero 2");
	scanf(" %d", &denominador);
	quociente = numerador/denominador;
	resto = numerador-(quociente*denominador);
	printf("o resto de %d por %d eh %d \n", numerador, denominador, resto);

	return 0;
}
