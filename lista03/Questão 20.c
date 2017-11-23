#include<stdio.h>

void inseord(int v[], int t, int x){
	int i,v2[t+1];
	for(i=0; i<t; i++){
		if(x>v[i]){
			v2[i] = v[i];
		}else{
			v2[i] = x;
			v2[i+1] = v[i];
			i++;
		}
	}
	for(i = 0; i<t+1; i++){
		printf("V[%d] = %d\n",i,v2[i]);
	}
}

int main(){
	int t, i, x;
	printf("informe o tamanho do vetor: ");
	scanf("%d", &t);
	int v[t];
	for(i = 0; i<t; i++){
		printf("digite os valores: ");
		scanf("%d", & v[i]);
	}
	printf("informe o numero a ser inserido: ");
	scanf("%d", &x);
	
	inseord(v,t,x);
}
