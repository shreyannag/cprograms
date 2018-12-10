#include<stdio.h>
#include<conio.h>
void main()
{
    /*Here we are finding out length of a string without library function*/
    char word[100];
    int i;
    printf("Enter any word :\t");
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++);
    printf("The length of the word is : \t%d",i);
}
