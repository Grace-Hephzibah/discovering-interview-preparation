/*
Print the pattern_1
Write a program to print the following pattern. 

Sample Input:

7

Sample Output:

1

11

101

111
*/

#include <iostream>
using namespace std;

int binary_conversion(int n)
{
  int bin = 0;
  while(n)
  {
    bin = bin*10 + n%2;
    n /= 2;
  }
  return bin;
}
  
int main() 
{
   int n; cin>>n;
  
  for( int i=1; i<=n; i += 2)
    cout<<binary_conversion(i)<<endl;
  
}
