#include<stdio.h>
void main()
{
    int a=11,b=13,*n1=&a,*n2=&b;
    *n1 = *n1+*n2;
    *n2 = *n1-*n2;
    *n1 = *n1-*n2;
    printf("Using pointers\n");
    printf("swapper value is is %d\n",a);
    printf("swapper value is is %d",b);
}
