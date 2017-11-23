#include <stdio.h>
#include <stdlib.h>

void interseccao(int V1[], int V2[], int n1, int n2){
	int i, j, tam;
	if(n1<n2){
		tam = n1;
	}else{
		tam = n2;
	}
	int I[tam], p = 0;
	for (i=0; i<n1; i++){
		for(j=0; j<n2; j++){
			if(V1[i] == V2[j]){
				I[p] = V1[i];
				p++;
			}
		}
	}
	printf("\n\nVETOR DE INTERSECCOES\n\n");
	for(i=0; i<p; i++){
		printf("I[%d] = %d\n", i, I[i]);
	}
}

int main(){
	int n1, n2, i;
	printf("informe o tamanho do primeiro vetor: ");
	scanf("%d",&n1);
	printf("informe o tamanho do segundo vetor: ");
	scanf("%d",&n2);
	int V1[n1], V2[n2];
	for(i=0; i<n1; i++){
		printf("informe V1[%d] = ", i);
		scanf("%d", &V1[i]);
	}
	for(i=0; i<n2; i++){
		printf("informe V2[%d] = ", i);
		scanf("%d", &V2[i]);
	}
	
	interseccao(V1,V2,n1,n2);
	
}
