#include <stdio.h>
int main(){
    float segundo,tempo,horas,minutos;
    printf("Entre com o tempo em minutos: ");
    scanf("%f",&tempo);
    horas=(int)tempo/60;
    minutos=(int)tempo%60;
    segundo =(tempo*60)-(horas * 3600 + minutos * 60);
    printf("%.0f horas %.0f minutos %.1f segundos.\n",horas,minutos,segundo);
return 0;
}
