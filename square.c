#include<stdio.h>
void square(int *);
void main(void)
{
    int a=5;
    square(&a);
    printf("%d",a);
}
void square(int *p)
{
*p=(*p)*(*p);
}
