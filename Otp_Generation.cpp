/*
OTP Generation
A company wishes to devise an order confirmation procedure. They plan to require an extra confirmation instead of simply auto-confirming the order at the time it is placed. For this purpose, the system will generate a one-time password to be shared with the customer. The customer who is placing the order has to enter that one-time password to confirm the order. The one-time password is generated for the enqueued orderld, as the product of the digits in the orderiD. Write an algorithm to find the one-time password for the order ID.

Input

The input consists of an integer orderID, representing the order ID of the enqueued order.

Output

Print an integer representing the one-time password generated for the order ID.

Example

Input:

2342

Output:

48

Explanation: On multiplying the digits of the orderID, the one-time password generated is 48 (2*3*4*2).
*/

#include <iostream>
using namespace std;

int main() 
{
   int n,otp=1;
  cin>>n;
  while(n)
  {
    otp *= n%10;
    n/=10;
  }
  cout<<otp;
    return 0;
}
