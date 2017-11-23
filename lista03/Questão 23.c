#include <stdio.h>
#include <math.h>

int correcao(int v1[50], int v2[50]){

int certas, i;
certas = 0;
for (i = 0; i < 50; i++)
    if (v1[i] == v2[i])
        certas++;
return (certas);
}

int main(){
int i;
float v1[50];
float v2[50];
for (i=0; i<50; i++){
    printf("Digite valor do elemento %d do vetor: \n", (i+1));
    scanf("%d", &v1[i]);
}
for (i=0; i<50; i++){
    printf("Digite o gabarito do elemento %d do vetor: \n", (i+1));
    scanf("%d", &v2[i]);
}
printf ("Numeros de questoes certas foram :\n");
return (correcao (v1, v2));
}
