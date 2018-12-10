#include <stdio.h> 
main()
{
    int n,t, rem, rev = 0;
    printf("Enter a number:\t");
    scanf("%d",&n);
    t=n;
    while (n> 0)
    {
        rem=n%10;
        rev= rev*10+rem;
        n/= 10;
    }
    printf("The reverse of the number is:%d\t",rev);
    return 0;
}
