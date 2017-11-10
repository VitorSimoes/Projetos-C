#include <stdio.h>

int main()
{
int dia1,dia2,mes1,mes2,ano1,ano2,anofinal,mesfinal,diafinal;
printf("digite a data de nascimento");
scanf("%d/%d/%d",&dia1,&mes1,&ano1);
printf("data atual");
scanf("%d/%d/%d",&dia2,&mes2,&ano2);
if (dia2<dia1 || mes2<mes1){
  anofinal=ano2-ano1;
  mesfinal=mes1-mes2;
  diafinal=dia1-dia2;
}else{
  anofinal=ano2-ano1;
  mesfinal=mes2-mes1;
  diafinal=dia2-dia1;
}
printf("%d anos, %d meses, %d dias\n",anofinal, mesfinal,diafinal);
return 0;
}
