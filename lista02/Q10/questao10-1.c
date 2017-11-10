#include <stdio.h>

main ()
{
int f,c;
printf ("Entre com os graus em Fahrenheit: ");
scanf ("%d", &f);
c=(f-32)*5/9;
printf ("Os graus convertidos para Celsius sao: %d \n", c);
}
