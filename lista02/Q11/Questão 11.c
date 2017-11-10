#include <stdio.h>
int main()
 {
    int x,y;
    printf("Entre com 2 valores: ");
    scanf("%d %d",&x,&y);
    x+=y;
    y=x-y;
    x-=y;
    printf("valores trocados:%d %d\n",x,y);
return 0;
}
