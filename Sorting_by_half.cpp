/*
Sorting the first half of the array in ascending order and the second half in descending order
Write a program to sort the first half of an array in ascending order and the second half in descending order.

Input Format:

The first line contains an integer 'N', denoting the size of the array.

The next line contains space-separated integers denoting the elements of the array.



Output Format:

Print sorted array



Sample Input:

6

1 2 3 4 5 6



Sample Output:

1 2 3 6 5 4
*/

#include <iostream>
using namespace std;

int main() 
{
   int n, arr[1000], max = 0, val,i,j; cin>>n;
  
  for(i=0; i<n; i++)
  {
    cin>>val;
    if (i < n/2)
    {
      for(j=i-1; j>=0; j--)
      {
        if(arr[j] > val)  arr[j+1] = arr[j];
        else break;
      }
      arr[j+1] = val;
    }
    else 
    {
      for(j=i-1; j>=n/2; j--)
      {
        if(arr[j] < val)  arr[j+1] = arr[j];
        else break;
      }
      arr[j+1] = val;
    }
  }
  
  for(i=0; i<n; i++)
    cout<<arr[i]<<" ";
    
}
