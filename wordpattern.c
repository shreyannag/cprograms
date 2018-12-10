#include<stdio.h>
void main()
{
    int l,i,j;
    char name[40];
    printf("Enter your name:\n");
    scanf("%s",name);
    for(l=0;name[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
}
