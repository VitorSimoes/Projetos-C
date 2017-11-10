
#include <stdio.h>

int main()
{
  int i, a, q, Termo;
  for (i = 5; i > 0; i = i - 1)
  {
    a = i;
    q = 3;
    Termo = a;
    while (Termo <= 9 * a)
    {
      printf("%d \n", Termo); Termo = Termo * q;
    }
  }
}
/* outputs
5
15
45
4
12
36
3
9
27
2
6
18
1
3
9
*/
