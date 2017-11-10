#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
 {

  int Total;
  int Num, Den, Den1, Den2, Conta, NumTermos;
  puts("\n Digite o valor");
   scanf("%d",&NumTermos);
   Num=2;
   Den=1;
   Den1=1;
   Den2=1;
   Total=0;
   Conta=0;
   while (Conta<NumTermos)
	{
         Total=(Total+(Num/Den));
         Num=Num+Den;
         Den=Den1+Den2;
         Den1=Den2;
         Den2=Den;
         Conta++;
   }
    printf("\n Valor total do numero de termos: %d \n", Total);
       return 0;
}
/*
2)

#include <stdio.h>
int main(int argc, char *argv[])
{
 float Soma;
int n, i;
printf("Digite o valor de n: \n");
scanf("%d", &n);
 Soma = 0;
 for (i = 1; i <= n; i++)
 {	if (i % 2 == 1)
 	Soma = Soma + 1.0/i;
 Else
 		Soma = Soma  1.0/i;
}
 printf("A soma dos %d primeiros numeros da sequencia dada e %f \n", n, Soma);
}
*/
