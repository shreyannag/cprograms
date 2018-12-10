#include<stdio.h>
#include<conio.h>
int main()
{
	again:
	printf("Enter the value of N \n");
	typedef int num;
	num i,n,a;
	float sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
		if(i==1)
			printf("\n 1+");
		else if(i==n)
			printf(" (1 / %d) ",i);
		else
			printf(" (1 / %d) +",n);
	}
	printf("\n\n THE SUM OF THE HARMONIC SERIES IS %.21f",sum);
	printf("\n WANT TO TRY IT AGAIN PRESS 1 \n");
	scanf("%d",&a);
	if(a==1)
	goto again;
	else
	printf("\n Thank You, Ending Code");
	getch();
}
