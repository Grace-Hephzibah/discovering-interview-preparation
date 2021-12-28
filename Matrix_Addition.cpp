/*
Matrix Addition
Write a program to add 2 matrices.

Input consists of multiple test cases. For each case, the first line contains two integers m1, n1 the size of matrix and m1 following rows containing the integers for each row. It is followed by data for matrix B. For each test case output a single line containing all elements of the resultant matrix.



Sample Input:

1

2

3

1

2

3

4

5

6

1

2

3

4

5

6



Sample Output:

2 4 6 8 10 12
*/

#include <iostream>
using namespace std;

int main() 
{
   int m,n,mat1[100][100], mat2[100][100], t;
  cin>>t;
  while(t--)
  {
    cin>>m>>n;
  for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin>>mat1[i][j];
  for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin>>mat2[i][j];
  for(int i=0; i<m; i++) for(int j=0; j<n; j++) 
    cout<<mat1[i][j]+mat2[i][j]<<" ";
  cout<<endl;
  }
}

/*
#include<limits.h>

int main() 
{
   int arr[1000], l=-1, val = INT_MAX;
  cin>>val;
  while(val!=INT_MAX)
  {
    l++; arr[l] = val;
    val = INT_MAX; cin>>val;
  }
  for(int i=0, j=l/2; j<=l; i++,j++)
    cout<<arr[i]+arr[j]<<" ";
  
  return 0;
  
}

*/
