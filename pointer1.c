#include<stdio.h>
int main()
{
    int num = 50;
    int *p=&num;
    printf("Address of p variable is %x ",p);
    printf("\nValue of p variable is %d \n",*p);
    return 0;
}
