#include <stdio.h>

void triangular(int M[][], int n){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i<j && M[i][j] != 0){
				printf("a matriz M nao eh triangular\n");
			}
		}
	}
	printf("a matriz M eh triangular\n");
}

int main(){
	int n, i, j;
	printf("informe a ordem da matriz: ");
	scanf("%d", &n);
	int M[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("informe o elemento M[%d][%d]: ");
			scanf("%d",&M[i][j]);
		}
	}
	
	triangular(M,n);
	
	return 0;
}
