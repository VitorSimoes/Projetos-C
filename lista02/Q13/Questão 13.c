#include <stdio.h>
int main(){
    int tempo,horas,minutos,segundos;
    printf("Entre com o tempo em segundos: ");
    scanf("%d",&tempo);
    horas=tempo/3600;
    minutos=tempo/60;
    segundos=tempo%60;
    printf("%d horas %d minutos %d segundos.\n",horas,minutos,segundos);
return 0;
}
