//flyod's traingle
#include<stdio.h>
main()
{              //took num=1 to act as counter
	int i,j,l,num=1;      //assigning the interger values
	printf("Upto how many lines you want : "); scanf("%d",&l);  //accepting the number of lines
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num++;         //printing num with incrementing by 1 until the number of lines finishes
		}
		printf("\t \n");
	}
}
