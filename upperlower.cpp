#include<stdio.h>
#include<ctype.h>

main()
{
	char a;
	printf("Enter any Character =");
	scanf("%c",&a);
	if(isupper(a))
	{
		printf("The given Character is in Uppercase");
	}
	else if(islower(a))
	{
		printf("The given Character is in Lowercase");
	}
	else
	{
		printf("You have enter Invalid character");
	}
}
