/*
GCD of N positive integers
Problem:

 The greatest common divisor (GCD), also called highest common factor (HCF) of N numbers is the largest positive integer that divides all numbers without giving a remainder.

 Write an algorithm to determine the GCD of N positive integers.

Input

 The first line of the input consists of an integer num, representing the number of positive integers (N). The second line consists of N space-separated integers representing the list of positive integers.



Output

 Print an integer representing the GCD of the given positive integers.

Example

Input

 5

 2 4 6 8 10

Output

 2

Explanation

 The largest positive integer that divides all the positive integers 2, 4, 6, 8, 10 without a remainder is 2. So, the output is 2.
*/

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  if (a == b) return a;
  else if (a>b) return gcd(a-b, b);
  else return gcd(a, b-a);
}

int main() 
{
   int n,a,b; cin>>n>>a;
  while(--n)
  {
    cin>>b;
    a = gcd(a,b);
  }
  cout<<a;
}
