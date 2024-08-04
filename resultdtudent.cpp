#include<stdio.h>
main()
{
	int marks;
	printf("For get marks in Hindi Press 1");
	printf("\nFor get marks in English Press 2");
	printf("\nFor get marks in Science Press 3");
	printf("\nFor get marks in Social Science Press 4");
	printf("\nFor get marks in GK Press 5");
	
	printf("\nEnter any number between (1-5) = ");
	scanf("%d",&marks);
	
	switch(marks)
	{
		case 1:
			printf("The Marks in Hindi = 87");
			break;
			
			case 2:
				printf("The Marks in English = 90");
			  break;
			  
			  case 3:
			  	printf("The Marks in Science =70");
			  	break;
			  	
			  	case 4:
			  		printf("The Marks in Social Science = 78");
			  		break;
			  		
			  		case 5:
			  			printf("The Marks in GK =80");
			  			break;
			  			
			  	default:
				  printf("You have entered invalid number");	
	}
}
