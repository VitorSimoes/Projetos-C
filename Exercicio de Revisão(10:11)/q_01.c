#include <stdio.h>
#include <stdlib.h>
int main()
{
    //cria a matriz e os indices
    int t, i, M[3][4];
    // preenche a matriz de forma que obedeça (t*4)+i+1
    for (t=0; t<3; ++t)
      for (i=0; i<4; ++i)
        M[t][i] = (t*4)+i+1;
    // imprime a matriz    
    for (t=0; t<3; ++t)
    {
      for (i=0; i<4; ++i)
      printf ("%3d ", M[t][i]);
      printf ("\n");
    }
  return(0);
}
