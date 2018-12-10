//factorial of number
#include<stdio.h>
main()
{
	int f=1,n,i;
	printf("Enter a number :\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial is : %d",f);
}
