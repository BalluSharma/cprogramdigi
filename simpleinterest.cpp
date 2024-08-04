#include<stdio.h>

main(){
	int p, r,t;
	printf("Enter The Principal=");
	scanf("%d",&p);
	printf("Enter the Rate =");
	scanf("%d",&r);
	printf("Enter the Time = ");
	scanf("%d",&t);
	
	float SI =(p*r*t)/100;
	printf("The Total Amount = %f",SI);
}
