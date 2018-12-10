#include<stdio.h>
#include<conio.h>
void main()
{
	char first[100],last[100];
	int i,j; //i for storing length of first and j for last
	printf("Enter your first name:\n");
	scanf("%s",first);
	printf("Enter your last name:\n");
	scanf("%s",last);
	//calculating length of first name
	for(i=0;first[i]!='\0';i++);
	//printf("The length of the word is:\t%d",i);
	for(j=0;last[j]!='\0';i++;j++) //incrementing i with 1 because from next character onwards last name will be added
	{
		first[i]=last[j]; //saving last variable characters into first variable array incrementing by 1
	}
	first[i]='\0';
	//printing concatinated string
	printf("\n%s",first);
}
