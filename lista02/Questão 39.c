#include<stdio.h>  
int main(int argc, char *argv[]) 
{
int conjunto, i, j, k;
 printf("Digite o valor do conjunto: \n"); 
scanf("%d", &conjunto); 
 	for (i = 1; i <= n-2; i++) 
 		for (j = i + 1; j <= n-1; j++) 
 			for (k = j + 1; k <= n; k++) 
 				printf("%d, %d, %d", i, j, k); 
return 0;
}

