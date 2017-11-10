#include<stdio.h>
#include <stdbool.h>
#define tam 50

int main (){
 	int n, i, j, cont;
 	bool primo = true;
	scanf("%d", &n); 
	int divisores[tam];
	for (i=0; i<tam; i++)
	for (i=1; i<n; i++){
	    if (n % i == 0){
	        for (j=1; j<n; j++){
	            if (i % p == 0 && p != 1){
	                primo = false;
	            }
	        if (primo == True and i!= 1){
	        printf("A decomposição de %d eh");
	for (i=0;i<tam;i++){
		cont = 0;
		while(n%i == 0){
			n = n/i;
			cont++;
			printf("%d", i**cont);
		}
	}    
}
