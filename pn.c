#include<stdio.h>
#include<math.h>
main()
{
	FILE *fp;
	fp=fopen("pn.dat","w");
	int i,n,ex=-23,ex1=-19,t=300; //where t is in Kelvin and Standard Temperature
	/*Is Saturation Current,
	Id Junction Current
	n emission coefficient
	Vd diode voltage
	*/
	float Id,Is,Vd,Vt;  
	float k=1.38*pow(10,ex); //Boltzmann's Constant, Unit is J/K
	float q=1.60*pow(10,ex1); //Electric Charge Of An Electron, Unit is C
	printf("Enter the saturation current:\t");
	scanf("%f",&Is);
	printf("\nThe Emission Coefficient for Si is 1 and Ge is 2\n");
	printf("Enter the emission coefficent:\t");
	scanf("%d",&n);
	Vt=(((k*t)/q)*0.001);
	for(i=0;i<10000;i++)
	{
		Vd=i*(pow(10,5)); //Varying diode voltage
		Id=Is*(exp(Vd/(n*Vt))-1); //Shockley's Equation
		printf("%f",Vd);
		fprintf(fp,"%f\t%f\n",Id,Vd);
	}
	close(fp);
}
