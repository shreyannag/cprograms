#include<stdio.h>
#include<math.h>
int main()
{
      int decimal_number, remainder=0, hexadecimal_number = 0;
      int count;
      printf("Enter a Decimal Number:\t");
      scanf("%d", &decimal_number);
      for(count = 0; decimal_number > 0; count++)
      {
            remainder = decimal_number % 16;
            hexadecimal_number = hexadecimal_number + remainder * pow(10, count);
            decimal_number = decimal_number / 16;
      }
      printf("\nHexadecimal Equivalent:\t%X\n", hexadecimal_number);
      return 0;
}
