#include<stdio.h>
main()
{
	int a=-1,b=1,c=0,s=0,i,n;
	printf("Enter the nth number:\t");
	scanf("%d",&n);
	printf("\nThe fibonacci series is:\t");
	for(i=1;i<=n;i++)
	{
		c=a+b;
		s=s+c;
		printf("%d\t",c);
		a=b;
		b=c;
	}
     printf("\nThe Sum of the above fibonacci series till %d is :\t%d",n,s);
     return 0;
}
