#include <stdio.h>
#include <math.h>

int verificacopia(int vetor1[30], int n1, int x){
int i = 0;
int x = vetor[i];
while ((vetor1[i] != x) && (i < n1))
    i++;
if (vetor1[i] == x)
    return 1;
else
    return 0;
}
int elementodistinto(int vetor2[30], int aux[30], int n2){
int i, k, aux[n2];
aux[0] = vetor2[0];
k = 0;
for (i = 1; i < n2; i++)
    if (verificacopia(aux, k + 1, vetor2[i]) == 0){
        k++;
    aux[k] = vetor2[i];
}
return(k + 1);
}

int main(){

int n1, n2;
int i = 0;
printf("Digite quantidade de elementos do vetor1: \n");
scanf("%d", &n1);
float vetor1[n1];
for (i; i<n1; i++){
    printf("Digite valor do elemento %d do vetor1: \n", (i+1));
    scanf("%d", &vetor1[i]);
}
printf("Digite quantidade  de elementos do vetor2: \n");
scanf("%d", &n2);
float vetor2[n2];
for (i; i<n2; i++){
    printf("Digite valor do elemento %d do vetor2: \n", (i+1));
    scanf("%d", &vetor2[i]);
}
printf("Vetor resultante:\n%d", elementodistinto(vetor2,aux, n2));
return 0;
}
