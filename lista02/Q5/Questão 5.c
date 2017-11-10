/*
# Universidade do Estado do Amazonas - UEA
# Prof.Ricardo Rios
# Vitor Simôes Azevedo   1715310025
#
#Sabendo que o dia 01/01/1900 foi uma segunda-feira,
#escreva um algoritmo que determine o dia da semana correspondente a uma data,
#posterior a 01/01/1900, dada. Por exemplo, se a data dada for 23/01/1900,
#o algoritmo deve fornecer como resposta terça-feira.
Logica retirada do site http://www.magiadamatematica.com/wordpress/wp-content/uploads/2012/03/MAGIA-AMOSTRA.pdf
*/
#include <stdio.h>
main()
{
    int dia,mes,ano,a,b,c,d,semana;
    printf("Entre com o data: ");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    a=ano-1900;
    //verifica se o nao é bissexto
    if ((ano % 4 == 0) || (ano % 400 == 0 ) && (ano % 100!=0))
      b= (a / 4)-1;
    else
      b= a / 4;
    //usa a tabela do mes, onde o valor é o numero de casa que pulou o 1 dia
    switch (mes)
      {
      case 1:c=0;
        break;
      case 2:c=3;
        break;
      case 3:c=3;
        break;
      case 4:c=6;
        break;
      case 5:c=1;
        break;
      case 6:c=4;
        break;
      case 7:c=6;
        break;
      case 8:c=2;
        break;
      case 9:c=5;
        break;
      case 10:c=0;
        break;
      case 11:c=3;
        break;
      case 12:c=5;
        break;
      default: printf ("Valor invalido!\n");
    }
d=dia-1;
semana=(a+b+c+d)%7;
    switch(semana)
    {
      case 0: printf("segunda-feira\n");
      	break;
      case 1: printf("terça-feira\n");
      	break;
      case 2: printf("quarta-feira\n");
        break;
      case 3: printf("quinta-feira\n");
      	break;
      case 4: printf("sexta-feira\n");
      	break;
      case 5: printf("sabado\n");
      	break;
      case 6: printf("domingo\n");
        break;
      default: printf ("Valor invalido!\n");
    }
    return 0;
  }
