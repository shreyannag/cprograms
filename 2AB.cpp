//Matrix 2*A*B
#include<stdio.h>
int main()
{
	float a[20][20],b[20][20],c[20][20];
	int i,j,p,q,q1,n,k;
	printf("Enter the order of Matrix A  p x q:\n");
	scanf("%d %d",&p,&q);
	printf("Enter the order of Matrix  q x n:\n");
	scanf("%d %d",&q1,&n);
	if(q==q1)
	{
		printf("Enter data into Matrix A:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%f",&a[i][j]);
			}
		}
		printf("Enter data into Matrix B:\n");
		for(i=0;i<q1;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%f",&b[i][j]);
			}
		}
		//Operation
		for(i=0;i<p;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
				for(k=0;k<q;k++)
					c[i][j]=c[i][j]+(2*a[i][k]*b[k][j]);
			}
		}
		//Result
		printf("\nThe resultant matrix is:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%7.0f\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n\t\a\a\aMatrix Order Mismatch");
	}
	return 0;
}
//Output
/*Enter the order of Matrix A  p x q:
3 3
Enter the order of Matrix  q x n:
3 3
Enter data into Matrix A:
1 2 3
4 5 6
7 8 9
Enter data into Matrix B:
10 11 12
13 14 15
16 17 18

The resultant matrix is:
    168     180     192
    402     432     462
    636     684     732

--------------------------------
Process exited after 27.94 seconds with return value 0
Press any key to continue . . .*/
