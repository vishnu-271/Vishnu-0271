#include<stdio.h>
main(){
	int age;
	printf("enter the age ");
	scanf("%d",& age);
	if(age>=18)
	{
		printf("the personis eligible for voting");
	}
	else{
		printf("the person is not eligible for voting");
	}
}
