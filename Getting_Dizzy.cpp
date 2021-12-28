/*
Getting Dizzy
Given an integer matrix of size N x N. Traverse it as shown below:

Input Format

First line contains n representing number of rows and column of a matrix.

Next n line contains n values each representing the values of matrix

Output Format

Single line containing integers with space representing the desired traversal.

Constraints

0<n<500

Refer the sample output for formatting

Sample Input:

3

1 2 3

4 5 6

7 8 9



Sample Output:

1 2 3 6 9 8 7 4 5
*/

#include <iostream>
using namespace std;

int main() 
{
   int n, arr[100][100],i,j; cin>>n;
  int row_max = n, col_max = n, row_min = 1, col_min=1;
  
  for(int i=1; i<=n; i++)
    for(int j=1; j<=n; j++)
      cin>>arr[i][j];
  
 while(row_min <= row_max && col_min <= col_max)
 {
    i = row_min;
      for(j=col_min; j<=col_max; j++)
        cout<<arr[i][j]<<" ";
    
  	j = col_max;
      for(i = row_min+1; i<=row_max; i++)
        cout<<arr[i][j]<<" ";
  	
  	i = row_max;
  	for(j=col_max-1; j>=col_min; j--)
      cout<<arr[i][j]<<" ";
  
  	j = col_min;
  	for(i = row_max-1; i>row_min; i--)
      cout<<arr[i][j]<<" ";
  
   	// reinitializing stuffs
   col_min++; row_min++;
   col_max--; row_max--;
  }
  
}
