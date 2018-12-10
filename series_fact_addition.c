//S=1+2/4!-3/6!+4/8!-...N
#include<stdio.h>
void main()
{	
	int j=0,k=0,f=1,n=0;
	printf("Enter the Nth Term : ");
	scanf("%d",&n);
	float s=0;			   
	for(j=2;j<=n;j++)
	{
		for(k=4;k<n;k+=2)
		{
			f=f*k;    //factorial of denominator
			if((j%2)==0)
			s=1+s+(j/f);
			else
			s=1+s-(j/f);
		}
	}
	printf("The Result of the series is %f: ",s);
	
	}
