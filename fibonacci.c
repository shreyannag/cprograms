//Fibonacci Series Sum
#include<stdio.h>
main()
{
	int a=-1,b=1,c=0,i,n,sum=0;
	printf("Enter the nth term:\t");
	scanf("%d",&n);
	printf("The fibonacci series is:\t");
	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		sum=sum+c;
		a=b;
		b=c;
	}
	printf("\nThe sum of fibonacci series till %d is:\t%d",n,sum);
}

