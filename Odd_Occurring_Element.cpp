/*
Odd occurring element
Given an array of integers where every element appears even number of times except one element which appears odd number of times, write a program to find that odd occurring element in O(log n) time.

The equal elements must appear in pairs in the array but there cannot be more than two consecutive occurrences of an element.

For example :

3

2 3 2

It doesn't have equal elements appear in pairs



7

1 1 2 2 2 3 3

It contains three consecutive instances of an element.



5

2 2 3 1 1

It is valid and the odd occurring element present in it is 3.



Enter only valid inputs.



Sample Input:

5

2 2 3 1 1



Sample Output:

3
*/


#include <iostream>
using namespace std;

#define LIM 1000
int main() 
{
   int n, hash[LIM] = {0}, val; cin>>n;
  	
  for(int i=0; i<n; i++)
  {
    cin>>val;
    hash[val]++;
  }
  
  for(int i=0; i<LIM;i++)
    if (hash[i]%2 != 0) cout<<i;
  
  return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
 
int find_odd_occurrence(int arr[], int low, int high)
{
    if(low == high)
    {
        return low;
    }
    
    int mid = (low + high) / 2;
    
    if(mid & 1)
    {
        if(arr[mid] == arr[mid - 1])
        {
            return find_odd_occurrence(arr, mid+1, high);
        }
        else
        {
            return find_odd_occurrence(arr, low, mid);
        }
    }
    else
    {
        if(arr[mid] == arr[mid + 1])
        {
            return find_odd_occurrence(arr, mid+2, high);
        }
        else
        {
            return find_odd_occurrence(arr, low, mid);
        }
    }
}
int main(void)
{
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout<<A[find_odd_occurrence(A, 0, n-1)];
    return 0; 
}
*/




