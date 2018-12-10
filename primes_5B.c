#include <stdio.h>
#include <time.h>
void generate();
void main(void)
{
  double spent = 0.0;
  clock_t begin= clock();
  generate();
  clock_t end = clock();
  spent += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Time elapsed %f seconds\n",spent);
}
int primer(int num)
{
  int i,flag=0;
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
      flag=flag+1;
  }
  if(flag==2)
  return 1;
  else
  return 0;
}
void generate()
{
  int i;
  unsigned int num=4294967295;
  for(i=1;i<=num;i++)
  {
    if(primer(i))
    printf("%d\n",i);
  }
}
