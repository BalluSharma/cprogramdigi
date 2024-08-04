//goto or jump statemet  (backward jumping)
#include<stdio.h>

int main()
{
	int a=1;
	printf("Hello 1");
	  abc:
		printf("Hello 2");
			printf("Hello 3");
			if(a<=5){
			a++;
			goto abc;
			}
				printf("Hello 4");
					printf("Hello 5");
}
