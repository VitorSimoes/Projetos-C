#include <stdio.h>
#include <math.h>

void multiplicacao(float m1[2][2], float m2[2][2], float m3[2][2], int linha1, int coluna1, int linha2, int coluna2){
int i = 0, j = 0, k = 0;
if (coluna1 == linha2){
    while (i < linha1){
        m3[i][j] = 0;
            while (j < coluna2 && k < linha2){
                m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j];
                k++;
                }
            k = 0;
            j++;
            if (j == coluna2){
                i++;
                j = 0;
                }
        }
    }
}

int main(){
int i,j;
float m1, m2, m3;
for (i=0; i<2; i++)
    for (j=0; j<2; j++)
        printf("digite valor %d %d da matriz: \n", i,j);
        scanf("%f", m1[i][j]);
for (i=0; i<2; i++)
    for (j=0; j<2; j++)
        printf("digite valor %d %d da matriz: \n", i,j);
        scanf("%f", m2[i][j]);
multiplicacao(m1,m2,m3);
printf("Produto de matrizes eh: %f", m3);
return 0;
}
