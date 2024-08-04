#include<stdio.h>

main()
{
	int a,b;
	printf("Enter first number to swap=");
	scanf("%d",&a);
	printf("Enter second number to swap=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("The value of a= %d and b=%d",a,b);
	}
