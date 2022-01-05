#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a&b;
	d=a|b;
	e=a<<b;
	f=a>>b;
	g=a;~b;
	h=a^b;
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",f);
	printf("%d\n",g);
	printf("%d\n",h);	
}
