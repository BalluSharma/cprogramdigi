#include<stdio.h>

int main()
{
	int temp,x,y;
	printf("Enter first number for swap =");
	scanf("%d",&x);
	printf("Enter second number for swap =");
	scanf("%d",&y);
	
	temp=x;
	x=y;
	y=temp;
	
	printf("The value of after swapping x= %d, y= %d",x,y);	
}
