#include<stdio.h>
#include<math.h>

int main()
 {
    float valor;
    int resto,redondado,inteiro;
    printf("Entre com um valor ");
    scanf("%f",&valor);
    inteiro=valor *10;
    resto=inteiro%10;
    if(resto<5)
        redondado=floor(valor);
    else
        redondado=ceil(valor);
    printf("O valor arredondado: %d\n",redondado);
	return 0;
}
