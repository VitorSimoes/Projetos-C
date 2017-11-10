
#include <stdio.h>
int main()
{
  int i, j, i_inv, j_inv;
  for (i=10; i<100; i++)
  {
    i_inv = (i % 10) * 10 + i / 10;
    for (j=10; j<100; j++)
    {
      j_inv = (j % 10) * 10 + j / 10;
      if (i*j == i_inv*j_inv)
        printf("\n%d x %d = %d x %d = %d", i, j, i_inv, j_inv, i*j);
    }
  }
  return 0;
}
