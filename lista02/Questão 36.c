#include <stdio.h>

void main() {

  int termo1 = 1, termo2 = 1, novoTermo, n;
  scanf("%d", &n);
  if(n<=2){
  	printf("An = 1\n");
  }
  else{
  
	  for (int i=3; i<=n; i++) {
	    novoTermo = termo1 + termo2; // o novo termo é a soma dos dois termos anteriores
	    termo1 = termo2;	// o segundo termo é o primeiro termo no próximo passo
	    termo2 = novoTermo; // o novo termo é o segundo termo no próximo passo
	  }
}

  printf("==================\n");
  printf("An = %d", novoTermo);
}
