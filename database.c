#include <stdio.h>
void square(int *);
void main(void)
{
  int num,b;
  printf("Enter number:\n");
  scanf("%d",&num);
  square(&num);
  printf("\nSquare is %d\n",num);
}
void square(int *p) {
  *p=(*p)*(*p);
}
