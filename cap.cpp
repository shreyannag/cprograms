#include<koolplot.h>
#include<stdio.h>
/*#include<math.h>*/
int main()
{
	/*int i;
	float q=0.0,t=0.0,c,v,r;
	printf("Enter the value of voltage:\t");
	scanf("%f",&v);
		printf("Enter the time required:\t");
	scanf("%f",&t);
		printf("Enter the value of capacitor:\t");
	scanf("%f",&c);
		printf("Enter the value of resistance:\t");
	scanf("%f",&r);
	for(i=0;i<1000;i++)
	{
		t=0.1*i;
		q=(c*v)*(1-exp(-(t/(c*r))));
	}*/
        Plotdata x(-6.0,6.0);
		Plotdata y = sin(x);
		plot(x, y);
		return 0;
}
