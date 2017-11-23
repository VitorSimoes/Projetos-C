#include <stdio.h>
#include <math.h>

//matriz 2x2 dada qualquer

void transposta(float matriz[2][2], float transp[2][2]){
int i, j;
for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
        transp[j][i] = matriz[i][j];
}

int main(){

float matriz, transp;
transposta (matriz [2][2], transp [2][2]);
printf("Matriz transposta eh: %f %f\n %f %f", transp[1][1], transp[1][2], transp[2][1], transp[2][2]);

return 0;
}
