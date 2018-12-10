#include<stdio.h>
#include<conio.h>
main()
{
printf("This program simplifies the task of calculating PCM/BCP marks in percentage for eligibilty for JEE mains/AIIMS examinations :\n");
printf("Press 1 to continue");
int a;
scanf("%d",&a);
if(a==1)
{
float p,c,m,b,t=0,t1=0;
printf("Enter your Physics Marks : \n");
scanf("%2.1f",&p);
printf("Enter your Chemistry Marks : \n");
scanf("%2.1f",&c);
printf("If you are going for AIIMS eligibilty test enter 0 here or else enter your Mathematics Marks : \n");
scanf("%2.1f",&m);
printf("If you are going for AIIMS eligibility , Enter 0 or else enter you Biology Marks : \n");
scanf("%2.1f",&b);
printf("Press 1 for JEE eligibilty else Press any number other than 1 for AIIMS eligibilty : \n");
int z;
scanf("%d",&z);
if(z==1)
{
t=((p+c+m)/300)*100;
printf("Your PCM marks is %3.2f",t,"%");
if(t>=50)
{
    printf("You are eligible for JEE mains /n");
}
else
{
    printf("Sorry , You are not eligible for JEE mains");
}
}
else
{
t1=((c+p+b)/300)*100;
printf("Your BPC marks is %3.2f ",t1,"%");
if(t1>=50)
{
    printf("You are eligible for JEE mains /n");
}
else
{
    printf("Sorry , You are not eligible for JEE mains");
}
}
}
else
{
    printf("Close the program and re-run the program");
}
}
