//Matrix 3A+4B
#include<stdio.h>
main()
{
	int a[20][20],b[20][20],s[20][20],i,j,m,n;
	printf("Enter the order of matrix m x n:\n");
	scanf("%d %d",&m,&n);
	printf("Enter data in matrix A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter data in matrix B:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//Operation
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s[i][j]=(3*a[i][j])+(4*b[i][j]);
		}
	}
	printf("\nThe resultant matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
