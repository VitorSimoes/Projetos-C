#include <stdio.h>
int main()
{
	int Num,a,b,c,d,e,f,g,z;
	printf("Semiprimo\n");
	printf("Digite um inteiro:");
	scanf("%i",&Num);
  for (f=1;f<=Num;f++)
	{
		if(Num%f==0)
			g++;
	}
	printf("%i\n",g);
	if (g==2)
		printf("O numero %i nao e' semiprimo.\n",Num);
	else
	{
		for(a=2;a<Num;a++)
		{
			if (Num%a==0)
			{
				z=Num/a; b++; d=0;
				for (c=1;c<=z;c++)
				{
					if (z%c==0)
						d++;
					if (d<=2)
						e++;
				}
			}
		if (b==e)
			printf("O numero %i e' semiprimo.\n",Num);
		else
			printf("O numero %i nao e' semiprimo.\n",Num);
		}
		return 0;
	}
}
