/*Um inteiro positivo x é dito uma potência prima se existem dois inteiros positivos p e k, com p primo, tais que x = pk. 
Escreva uma função que receba um inteiro e veri?que se ele é uma potência prima.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verificarPrimo(int n){
	int i, cont = 0;
	for (i = 1; i<=n; i++){
		if(n % i == 0){
			cont++;
		}
	}
	if(cont == 2){
		return true;
	}else{
		return false;
	}
}

int decompor(int x){
	int div = 2, q = x/div, pot = 1, base;
	while(div < x){
		if(q % div == 0){
			pot++;
			base = div;
			q = q/div;
		}
		else{
			div++;
			q = x/div;
			pot = 1;
		}	
	}
	if(q == 0){
		return base;
	}
	else{
		return 0;
	}
}

void verificarPotencia(int x){
	int base;
	bool primo;
	
	primo = verificarPrimo(x);
	if(primo == true){
		printf("Nao eh potencia prima\n");
	}else{
		base = decompor(x);
		printf("base = %d\n", base);
		if (base != 0){
			printf("base = %d\n", base);
			primo = verificarPrimo(base);
			if(primo == true){
				printf("eh potencia prima\n");
			}
			else{
				printf("nao eh potencia prima\n");
			}
		}
		else{
			printf("nao eh potencia prima\n");
		}
	}
	
}

int main(){
	int x;
	scanf("%d", &x);
	verificarPotencia(x);
	return 0;
}

