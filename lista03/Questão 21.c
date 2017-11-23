#include <stdio.h>
#include <math.h>

void excluicomp(int *v, int n, int posicao){
int i;
if (posicao < n){
    for (i = posicao; i < n; i++)
        v[i] = v[i + 1];
    n--;
}
}

int main(){

int n, posicao;
printf ("Digite numero de componentes do vetor: \n");
scanf("%d", &n);
float v[n];
int i = 0;
for (i; i<n; i++){
    printf ("Digite o valor da componente: \n");
    scanf ("%f", &v[i]);
printf ("Digite posicao para exclusao:\n");
scanf ("%d", &posicao);
excluicomp (v,n,posicao);
printf("Vetor resultante: \n%f", v);

return 0;
}
