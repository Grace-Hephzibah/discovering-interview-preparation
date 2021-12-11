
/*
Matrix increment
You are given an initial value as s and dimensions of the increment matrix as m and n. An increment matrix is the matrix whose elements are the incremented values of the initial value s.

Sample Input:

3 3

1

Sample Output:

1 2 3

4 5 6

7 8 9

For example :

If initial value s = 1 and dimensions are m=3,n=3.

Then the Incremented Matrix would be:

1 2 3

4 5 6

7 8 9

*/

#include <iostream>
using namespace std;

int main() 
{
   int m, n, s; cin>>m>>n>>s;
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
      cout<<s++<<" ";
    cout<<endl;
  }
  return 0;
}
