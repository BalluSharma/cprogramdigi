#include<stdio.h>
main(){
	int marks;
	printf("Enter the marks =");
	scanf("%d",&marks);
	switch(marks/10)
	{
		case 10:
			case 9:
				printf("Grade A");
				break;
				
				case 8:
					printf("Grade B");
					break;
					
					case 7:
						printf("Grade C");
						break;
						
						case 6:
							printf("Grade D");
							break;
							
							case 5:
								printf("Grade E");
								break;
								
								case 4:
									printf("Grade F");
									break;
								default:
									if(marks>=0 && marks<=39){
										printf("Fail");
									}
									else
									{
										printf("Invalid Entry");
									}
									
	}
}
