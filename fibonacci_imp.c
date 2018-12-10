#include<stdio.h>
main()
{
	int n,a=0,b=1,i=3,c;
	printf("Enter the range :-  ");
	scanf("%d",&n);
	printf("\t%d",a);
	printf("\t%d",b);
	c=a+b;
	while(c<=n)
	{
		printf("\t%d",c);
		a=b;
		b=c;
		i=i+1;
		c=a+b;
	}
	return 0;
}
