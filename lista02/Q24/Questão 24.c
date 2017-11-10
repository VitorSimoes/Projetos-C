#include <stdio.h>

int main()
{
	float p1, p2, media, pf;
	scanf("%f", &p1);
	scanf("%f", &p2);
	media = (p1+p2)/2;
	pf = (18-(media*2));
	printf("o aluno precisa %.2f pontos\n", pf);
	return 0;
}
