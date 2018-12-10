//Median of an array
#include<stdio.h>
main()
{
	float mean=0.0,median=0.0,sum=0.0,a[20],t,mode=0.0;
	int i,j,n;
	printf("Enter the number of data to be entered:\t");
	scanf("%d",&n);
	//Accepting data into array
	printf("\nEnter the data one by one:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	mean=sum/n;
	printf("\nThe mean of the array is:\t%f",mean);
	//Sorting the array in ascending order using Bubbleshort 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		if(n%2==0)
		{
			median=(a[n/2]+a[(n-1)/2])/2;
		}
		else
		{
			median=(a[(n-1)])/2;
		}
	}
	mode=3*median-2*mean;
	printf("\nThe median of the array is:\t%f",median);
	printf("\n The mode of the array is:\t%f",mode);
}
