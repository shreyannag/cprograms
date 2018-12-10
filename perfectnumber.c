/*Perfect Number*/
#include<stdio.h>
main()
{
	int n,i=1,s=0;
	printf("Enter a number:\t");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
			s=s+i;
			i++;
	}
	if(s==n)
		printf("%d is a perfect number ",i);
	else
		printf("%d is not a perfect number ",i);
	return 0;
}
