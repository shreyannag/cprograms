#include<stdio.h>
main()
{
	int farh,cel,lower,upper,steps;    /*While Loop Version*/
	lower=0;
	upper=300;
	steps=20;
	farh=lower;
	while(farh<=upper)
	{
		cel= 5* (farh-32) / 9;
		printf("F\n %d  \t    C \n %d\n",farh,cel);
		farh=farh+steps;
	}
}
