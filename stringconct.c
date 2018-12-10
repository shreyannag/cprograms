#include<stdio.h>
void main()
{
    int i,j;
    char first[100],last[100];
    printf("Enter first name:\t");
    scanf("%s",first);
    printf("Enter last name:\t");
    scanf("%s",last);
    /*calculating length of first string*/
    for(i=0;first[i]!='\0';i++);
    /*incrementing to the next character addition*/
    for(j=0;last[j]!='\0';i++,j++)
    {
        first[i]=last[j];
    }
    first[i]='\0';
    printf("The full name is :\t%s",first);
}
