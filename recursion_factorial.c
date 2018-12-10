//factorial of a number with recursion
#include<stdio.h>
main()
{
	int num,result=0;
	printf("Enter a number:\t");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Invalid input . Negative Number's factorial not possible");
	}
	else
	{
		result=fact(num);
		printf("The factorial of the number %d is %d",num,result);
	}
	return 0;
}
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
}
