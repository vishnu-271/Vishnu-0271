int main()
{
	int a=0,b=1,c,n,i;
	printf(" enter ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d \n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
