/*
Data Transmission - I
The company has transmitted its data to the target server successfully. Now, on the new server, the transmitted binary data has to be stored in a user-readable format. As a developer, you have been assigned the task of converting the received binary data to user-readable decimal data.

Write an algorithm to convert the given data to the decimal format.

Input:

The input consists of an integer data, representing the binary form of the data received.

Output:

Print an Integer representing the decimal form of the received data.

Example

Input:

1001111001

Explanation:

On converting the given binary data, the output is 633.
*/

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
