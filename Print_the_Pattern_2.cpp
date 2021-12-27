/*
Print the pattern_2
Write a program to generate the following pattern.

Get input as N, square the N and generate the number from 1 to N2.



Sample Input:

4



Sample Output:

1* 2* 3* 4

9*10*11*12

13*14*15*16

5* 6* 7* 8
*/
#include <iostream>
using namespace std;

int main() 
{
   int n, fac = 1, update = 2, end; 
  cin>>n;
  
  for(int i=1; i<=n; i++)
  {
    end = n*fac; 
    for(int j=n-1; j>=0; j--)
    {
      cout<<end-j;
      if (j!=0) cout<<" * ";
    }
	fac += update;
    if (i == (n+1)/2) 
    { 
      if (n%2 == 1) fac-=2; 
      fac--;
      update = -2;
    }
    cout<<endl;
  }
  
  return 0;
}
