#include<stdio.h>

main()
{
	float celcius,fahrenheit;
	printf("Enter the temperature in fahrenheit = ");
	scanf("%f",&fahrenheit);
	
	 celcius= ((fahrenheit-32)*5/9);
	printf("The temperature in Celcius = %f",celcius);
	
	}
