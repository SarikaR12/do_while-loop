#include<stdio.h>
main()
{
	int i =1,n;
	
	printf("Enter value N =");
	scanf("%d",&n);
	printf("multipication table =\n");
	
	do
	{
		printf("%d*%d = %d\n",n,i ,n*i);
		i++;	
	}while(i<=10);
}