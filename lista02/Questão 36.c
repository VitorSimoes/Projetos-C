#include <stdio.h>

void main() {

  int termo1 = 1, termo2 = 1, novoTermo, n;
  scanf("%d", &n);
  if(n<=2){
  	printf("An = 1\n");
  }
  else{
  
	  for (int i=3; i<=n; i++) {
	    novoTermo = termo1 + termo2; // o novo termo � a soma dos dois termos anteriores
	    termo1 = termo2;	// o segundo termo � o primeiro termo no pr�ximo passo
	    termo2 = novoTermo; // o novo termo � o segundo termo no pr�ximo passo
	  }
}

  printf("==================\n");
  printf("An = %d", novoTermo);
}
