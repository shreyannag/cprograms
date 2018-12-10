#include<stdio.h>
main()
{
	int n,c=0,i;
	printf("Enter a number to find if its prime number:\t");
	scanf("%d",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		c++;
	}
	}
	if(c==2)
	{
		printf("The number %d is prime",n);
	}
	
}
