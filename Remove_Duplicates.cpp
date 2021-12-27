/*
Remove Duplicates
Write a program to remove duplicate elements in an array.



Sample Input:

8

1 1 1 2 2 3 3 4



Sample Output:

1 2 3 4
*/

#include <iostream>
using namespace std;

int main() 
{
   int n, val, hash[1000] = {0};
  	cin>>n;
  while(n--)
  {
    cin>>val;
    if (hash[val] == 0) cout<<val<<" ";
    hash[val]++;
  }
}
