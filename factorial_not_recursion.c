//factorial without recursion
#include<stdio.h>
main()
{
	int i,n,f;
	printf("Enter a number:\t");
	scanf("%d",&n);
	f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial of %d is %d",n,f);
}
