#include<stdio.h>   //Multiplication Table  //Q1.3
main()
{
	printf("Enter the number , of which you want find its multiplication table : ");
	int n,t,i,b;
	scanf("%d",&n);
	printf("\n Till : ");
	scanf("%d",&t);
	printf("The multiplication table of n is = %d\n",n);
	for(i=1;i<=t;i++)
	{
    
		printf("\t %d \t* \t %d \t = \t%d\n ",n,i,n*i);
	}
	
}
