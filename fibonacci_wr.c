#include<stdio.h>
int fib(int n);
int main(){
    int c,n,i=0;
    printf("Enter the nth number:\t");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Number is -ve");
    }
    else
    {
        printf("The fibonacci series is:\n");
    for(c=1;c<=n;c++)
    {
        printf("%d\t",fib(i));
        i++;
    }
    }
    return 0;
}
int fib(int n){
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}
