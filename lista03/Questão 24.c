#include <stdio.h>
#include <math.h>

void imagem(int c[], int e[], int o, int x){
	int i = 0, j;
	for(j=0;j<o; j++){
		if(e[j] == 0){
			i = i+c[j];
		}else{
			i = i+(c[j]*(pow(x,e[j])));
		}
	}
	printf("\nresultado:\nP(%d) = %d\n", x, i);
}

int main(){
	int o, i, x;
	printf("informe quantos termos tem o polinomio: ");
	scanf("%d", &o);
	int c[o], e[o];
	for(i=0; i<o; i++){
		printf("informe a potencia %d de x: ", i+1);
		scanf("%d", &e[i]);
		printf("informe o coeficiente do termo de potencia %d: ", e[i]);
		scanf("%d", &c[i]);
	}
	printf("informe o valor de x: ");
	scanf("%d", &x);
	
	imagem(c,e,o,x);
	
	return 0;
}
