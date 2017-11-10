#include <stdio.h>

int main()
{
	int x, y, i, Mmc;
	printf("Digite os dois numeros \n");
	scanf("%d %d", &x, &y);
	if(x>y){
		Mmc = x;
		while (Mmc % y != 0){
			Mmc = Mmc + x;
		}
	}else{
		Mmc = y;
		while (Mmc % x != 0)
		{
			Mmc = Mmc + y;
		}
	}
	printf("mmc(%d, %d) = %d \n", x, y, Mmc);
	return 0;
}
