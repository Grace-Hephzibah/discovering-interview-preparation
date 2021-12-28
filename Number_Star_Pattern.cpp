/*
Number - Star Pattern
Write a program to print the below Squared Number-Star Pattern.



Input:

4



Output:

1*2*3*4

5*6*7*8

9*10*11*12

13*14*15*16
*/

#include <iostream>
using namespace std;

int main() 
{
   int n; cin>>n;
  
  for(int i=1; i<=n*n; i+=n)
  {
    cout<<i;
    for(int j=i+1; j<=i+n-1; j++)
    {
      cout<<"*"<<j;
    }
    cout<<endl;
  }
}
