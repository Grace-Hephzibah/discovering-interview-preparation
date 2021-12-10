/*
Symbolic pattern 1
Write a program to print the following pattern.

Input Format:

Input consists of a both number of rows and columns as a single input.

Output Format:

Refer the sample output.

Sample Input:

5

Sample Output:

  *  
  *  
*****
  *  
  *  
*/

#include <iostream>
using namespace std;

int main() 
{
   int a; cin>>a;
  int mid = a/2+1;
  	for(int i=1; i<=a; i++)
    {
      for(int j=1; j<=a; j++)
      {
        if (i==mid || j==mid) cout<<"*";
        else cout<<" ";
      }
      cout<<endl;
    }
    return 0;
}
