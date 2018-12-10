#include<stdio.h>
main()
{
	int n,c=0,i=0,j=0,k=0,p=0;
	printf("Enter a number to find if its prime number:\t");
	scanf("%d",&n);
    printf("\n");
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
	else
	{
		printf("The number %d is not prime",n);
	}
	printf("\n");
	printf("The prime numbers within the range of 1 & %d",n);
	printf("\n");
	for(j=2;j<=n;j++)
	{
		p=0; //To check whether J is prime or not;
		for(k=2;k<=j/2;k++)
		{
			/*To check if any number is 2 to J/2 divides J 
			completely if yes the j cannot be prime number*/
			if(j%k==0)
			{
				p=1;
				break; /*If false breaks*/
	}
		}
		if(p==0 && n!=1)
		{
			printf("%d ",j);
		}
		return 0;
	}
	}
	
