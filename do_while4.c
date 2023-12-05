#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("Enter value N =");
	scanf("%d",&n);
	
	do{
			printf("%d\n",n);
			n--;
	}while(i<=n);
}

