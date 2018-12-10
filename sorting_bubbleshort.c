#include<stdio.h>
main()
{
	float a[20],t;
	int i,j,n;
	printf("Enter the number of elements in the array:\t");
	scanf("%d",&n);
	printf("\nEnter the elements into the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("\nThe arrays in decending order is:\n");
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
	printf("%f\n",a[i]);
}
	
}
