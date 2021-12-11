/*
Find Maximum number of zeroes
Write a program to find Maximum number of zeroes in the given matrix.

A n-by-n matrix of 0’s and 1’s is given, where all 1’s in each row come before all 0’s, find a way to return the row with the maximum number of 0’s.



Sample Input:

2

1 1

0 0



Sample Output:

Row =2, count = 2


*/

#include <iostream>
using namespace std;

int main() 
{
   int zero, n, val, max = 0, row=0; cin>>n;
  for(int i=0; i<n; i++)
  {
    zero = 0;
    for(int j=0; j<n; j++)
    {
      cin>>val; 
      zero += val==0 ? 1 : 0;
    }
     if (max < zero) { max = zero; row = i+1;}
  }
  
  cout<<"Row = "<<row<<", count = "<<max;
  return 0;
}
