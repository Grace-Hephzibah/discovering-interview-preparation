/*
Symbolic pattern 2
Write a program to print the following pattern.

Input Format:

Input consists of no.of rows to be printed

Output Format:

Refer the sample output

Sample Input:

4

Sample Output:

*******
 ***** 
  ***
   *
  ***
 *****
*******
*/

#include <iostream>
using namespace std;

int main() 
{
   int a; cin>>a;
  int tot = a*2 - 1, gap = 0, star = tot;
  for(int i=1; i<=a; i++)
  {
    for(int j=1; j<=gap; j++) cout<<" ";
    for(int j=1; j<=star; j++) cout<<"*";
    gap++; star-=2;
    cout<<endl;
  }
  gap--; star+=2;
  for(int i=1; i<a; i++)
  {
    gap--; star+=2;
    for(int j=1; j<=gap; j++) cout<<" ";
    for(int j=1; j<=star; j++) cout<<"*";
    cout<<endl;
  }
    return 0;
}
