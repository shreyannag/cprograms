#include<stdio.h>
main()
{
	int i,c=0,num;
	printf("Enter a number:\t");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			c++;
		}
	}
	if(c==2){
		printf("%d is palindrome\n",num);
	}
	else {
	printf("%d is not palindrome\n",num);
}
}