#include <stdio.h>
#include <stdlib.h>
int main()
	{
	int a, b, c, d, m, n, o, p, q;
	scanf("%d %d% d%d %", &a, &b, &c, &d);
	if((b!=0)&&(d!=0)&&(b!=d)){
	o=b*d;
	m=((o/b)*a);
	n=((o/d)*c);
	p=(m+n);
	printf("%d %d",p, o);}
	else if ((b!=0)&&(d!=0)&&(b==d)){
	q=a+c;
	printf("%d %d", q, B);}
	else if (b==0||d==0){
	printf("entrada invalida!");
	}
return 0;
}
