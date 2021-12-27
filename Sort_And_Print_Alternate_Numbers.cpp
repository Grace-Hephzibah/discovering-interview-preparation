
/*
Sort and Print Alternate Digits
Write a program to sort numbers in a array and print the numbers with alternate digits. 


Sample Input:

5

1

5 

2 

7 

3  

sample Output:

1 3 7


*/

#include <iostream>
using namespace std;

int main() 
{
   int n, arr[100], j, i, val; 
   cin>>n;
 
  for(i=0; i<n; i++)
  {
    cin>>val; 
    for( j=i-1; j>=0; j--)
    {
      if (arr[j] > val)   arr[j+1] = arr[j];
      else break;
    }
    arr[j+1] = val;
  }
  
  for(int i = 0; i<n; i+=2)   cout<<arr[i]<<" ";
 
  return 0;
}
