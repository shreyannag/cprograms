#include<stdio.h>
main()
{
	int farh;
	for(farh=0;farh<=300;farh=farh+20)
	{
		printf("%d %6.1f\n",farh,(5.0/9.0)*(farh-32));
	}
}
