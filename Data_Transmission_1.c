#include <stdio.h>
int main()
{
   unsigned long long int test;
   int dec=0, pow=1;
  
  scanf("%llu", &test);
  do
  {
    dec += (test%10) * pow;
    test /= 10;
    pow *= 2;
  } while(test>0);
  
  printf("%d", dec);
   return 0;
}
