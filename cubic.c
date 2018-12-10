//Sum of cubic series
#include<stdio.h>
main()
{
	int i,sum=0,n;
	printf("Enter the nth term:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i*i*i);
	}
	printf("The sum of natural number cubic series sum is:\t%d",sum);
}
