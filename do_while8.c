#include<stdio.h>
main()
{
	
	int i=1 ,n, sum=0;
	
	printf("Enter value N =");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}while(i<=n);
	
	printf("sum of 1 to N =%d",sum);
}