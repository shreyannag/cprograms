/*barfi parttern*/
#include<stdio.h>                   
main()
{
	int min_stars=1;                 //Upright Part
	int p_height=5;
	int p_space=p_height-1;
	int i,j,k;
	for(i=0;i<p_height;i++)
	{
		for(j=p_space;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<min_stars;k++)
		{
			printf("*");
		}
		min_stars+=2;
		printf("\n");
	}
	int max_stars=7;                        //Inverted Part
	int p_space2=max_stars/2;
	int p_height2=max_stars-p_space2;
	int m,n,o;
	for(m=p_height2;m>=1;m--)
	{
		for(n=p_space2;n>=m;n--)
		{
			printf(" ");
		}
		for(o=1;o<=max_stars;o++)
		{
			printf("*");
		}
		max_stars-=2;
		printf("\n");
	}
	}
