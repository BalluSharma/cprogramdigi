#include<stdio.h>
main()
{
	int year;
	printf("Enter the year=");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("The year is LeapYear");
	}
	else{
		printf("The year is not LeapYear");
	}
}
