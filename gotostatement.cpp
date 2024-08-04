#include<stdio.h>

main()
{
	int a=1;
	b:
		printf("hello world");
		if(a<=100){
			a++;
			goto b;
		}
}
