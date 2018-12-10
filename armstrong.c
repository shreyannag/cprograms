#include <stdio.h>
main()
{
	int original=0,num;
	int remainder=0,sum=0;
	printf("Enter a 3 digit number\t");
	scanf("%d",&num);
	original=num;
	while(num!=0){
		remainder = num%10;
		sum += remainder*remainder*remainder;
		num/=10;
	}
	if(sum==original){
		printf("%d is an armstrong number \n",original);
	}
	else{
		printf("%d is not an armstrong number \n",original);
	}
}
