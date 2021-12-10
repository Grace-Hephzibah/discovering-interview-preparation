/*
Right angle triangle pattern
Write a program to print the right angle triangle pattern using * symbol.

Input Format:

Input consist of 1 integer

Output Format:

Refer sample output

Sample Input:

5

Sample Output:

*   

*   *   

*   *   *  

*   *   *   * 

*   *   *   *  *


*/

#include <iostream>
using namespace std;

int main() 
{
   int n; cin>>n;
  
  	for(int i=1; i<=n; i++)
    {
      for(int j=i; j>0; j--) cout<<"* ";
      cout<<endl;
    }
    return 0;
}
