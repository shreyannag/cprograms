/*Leap year*/
#include<stdio.h>
main()
{
	int year;
	again:
	printf("Enter the year to check if it a leap year:\t");
	scanf("%d",&year);
	if(year%400==0)
	printf("%d is a leap year\n",year);
	else if(year%100==0)
	printf("%d is not a leap year\n",year);
	else if(year%4==0)
	printf("%d is a leap year\n",year);
	else
	printf("%d is not a leap year\n",year);
	int try;
	printf("Try again ? Press 1:\t");
	scanf("%d",&try);
	if(try==1)
	{
	goto again;
	}
		else{
		printf("Thanks");}
	return 0;
}
