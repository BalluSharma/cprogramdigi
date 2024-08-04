#include<stdio.h>
main(){
	int a,b,c,d,max1,max2,max3;
	printf("Enter four numbers =");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max1=(a>b)?a:b;
	max2=(c>d)?c:d;
	max3=(max1>max2)?max1:max2;
	printf("The Maximum number between four numbers=%d",max3);
}
