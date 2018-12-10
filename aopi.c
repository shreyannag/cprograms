/*Sum of postive integers*/
#include<stdio.h>
main()
{
	int n,d,s=0;
	printf("Enter number: \t");
	scanf("%d",&n);
	while(n > 0)
	{
		d = n % 10;
		s = s + d;
		n/=10;
	}
	printf("The sum of the digits of the entered number is:\t %d",s);
	return 0;
}
