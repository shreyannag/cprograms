#include<stdio.h>
#include<math.h>
main()
{
	float x[20],y[20],mu,omega=0.0,sum=0.0,sum1=0.0;
	int n,i;
	printf("Enter the number of elements in array:\t");
	scanf("%d",&n);
	printf("\nEnter %d elements:\n",n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%f",&x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		sum+=x[i];
	}
	mu=sum/n;
	for(i=0;i<=n-1;i++)
	{
		y[i]=x[i]-mu;
		sum1+=y[i];
	}
	omega=pow((pow(sum1,2)/n),0.5);
	printf("\nThe standard deviation of the array is :\t%f",omega);
}
