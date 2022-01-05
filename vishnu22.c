#include<stdio.h>
#include<math.h>
main()
{
	float a,p,r,t,n=100;	
	printf("the prinical balance is");
	scanf("%f",&p);
	printf("the interst rate is");
	scanf("%f",&r);
	printf("the time period is");
	scanf("%f",&t);
	a=p*(pow((1+r/n),t));
	printf("the compound interst is %f",a);	
}
