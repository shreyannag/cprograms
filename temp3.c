#include<stdio.h>  //Q1.5
main()
{
    float f=0,c=0;  //Conversion Version
    retry:
	printf("Press 1 for Celsius to Fahrenheit else Press 2 for Fahrenheit to Celsius \n");
	int s,a=0;
	scanf("%d",&s);
	if(s==1)
	{
	    again: 
		printf("Enter the value of temperature in Fahrenheit : \n ");
		scanf("%f",&f);
		c=(5*f-160)/9;
		printf("The converted temperature in Celsius is %f : ",c);
    }
	else
	{  
		printf("Enter the value of temperature in Celsius : \n ");
		scanf("%f",&c);
		f=((9*c)/5)+32;
		printf("The converted temperature in Fahrenheit is %f : ",f);

	}
	printf("Try Again , Press 1 to continue : ");
	scanf("%d",&a);
	if(a==1)
	{
		goto retry;
	}
}
