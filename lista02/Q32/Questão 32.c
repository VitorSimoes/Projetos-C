#include <stdio.h>
int main()
{
        int contaDigitos = 0, valor;
        scanf("%d", &valor);
        if (valor == 0) contaDigitos = 1;
        else
           while (valor != 0)
           {
               contaDigitos = contaDigitos + 1;
               valor = valor / 10;
           }
       printf("%d\n", contaDigitos);
     return 0;
   }
