/*
Unique Number
Write a program to find the count of numbers that consists of unique digits.

Input:

Input consists of two Integer lower and upper value of a range

Output:

The output consists of a single line, print the count of unique digits in the given range. Else Print "No Unique Number"

Sample Input:

10

15

Output:

5
*/

#include <iostream>
using namespace std;

int unique(int n)
{
  int hash[10] = {0}, unique = 1;
  while(n)
  {
    if (hash[n%10] != 0) unique = 0;
    hash[n%10]++;
    n /= 10;
  }
  return unique;
}
int main() 
{
   int a,b, count = 0;
  cin>>a>>b;
  for(int i=a; i<=b; i++)
    count += unique(i);
  if (count == 0) cout<<"No Unique Number";
  else cout<<count;
}
