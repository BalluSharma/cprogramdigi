#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	printf("for Addition press +");
	printf("\nfor Substraction press -");
	printf("\nfor Multiplication press *");
	printf("\nfor Division press /");
	printf("\nfor Remainder press %");
	
	printf("Enter any operation which is given =");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case '+':
			printf("Enter first number =");
			scanf("%d",&a);
			printf("Enter second number =");
			scanf("%d",&b); 
		    printf("The Addition =%d",(a+b));
					break;
					
		case '-':
			printf("Enter first number =");
			scanf("%d",&a);
			printf("Enter second number =");
			scanf("%d",&b); 
		    printf("The Substraction =%d",(a-b));
					break;			
						
		case '*':
			printf("Enter first number =");
			scanf("%d",&a);
			printf("Enter second number =");
			scanf("%d",&b); 
		    printf("The Multiplication =%d",(a*b));
					break;				
				
		case '/':
			printf("Enter first number =");
			scanf("%d",&a);
			printf("Enter second number =");
			scanf("%d",&b); 
		    printf("The Division =%d",(a/b));
					break;			
					
		case '%':
			printf("Enter first number =");
			scanf("%d",&a);
			printf("Enter second number =");
			scanf("%d",&b); 
		    printf("The Remainder =%d",(a%b));
					break;			
					
		default:
		printf("You have entered Invalid operator");			
	}
}
