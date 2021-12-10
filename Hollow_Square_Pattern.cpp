/*
Hollow square pattern
Write a program to print the Hollow square pattern.

Input Format:

Input consist of 1 integer.

Output Format:

Refer sample output.

Sample input

3

Sample output

* * *
*   *
* * *
*/

#include <iostream>
using namespace std;

int main() 
{
   int a; cin>>a;
  
  for(int i=1; i<=a; i++)
  {
    for(int j=1; j<=a; j++)
    {
      if (i==1 || i==a || j==1 || j==a) cout<<"* ";
      else cout<<"  ";
    }
   
    cout<<endl;
  }
    return 0;
}
