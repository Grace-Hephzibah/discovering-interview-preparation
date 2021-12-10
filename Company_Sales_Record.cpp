/*
Company sales record
Problem:

 A company has a sales record of N products for M days. The company wishes to know the maximum revenue received from a given product of the N products each day. Write an algorithm to find the highest revenue received each day.

Input:

 The first line of the input consists of two space-separated integers- days(M) and products(N), representing the days and the products in the sales record. The next M lines consist of N space-separated integers representing the sales revenue received from each product each day.

Output:

 Print M space-separated integers representing the maximum revenue received each day.

Example

Sample Input

 3 4

 100 198 333 323

 122 232 221 111

 223 565 245 764

Sample Output

 333 232 764

Explanation:

 The maximum revenue received on the first day is 333, followed by a maximum of 232 on the second day and a maximum revenue of 764 on the third day.
*/

#include <iostream>
using namespace std;

int main() 
{
    int days, product, maxRev, amt;
    cin>>days>>product;
    while(days--)
    {
      maxRev = 0;
      for(int i=0; i<product; i++)
      {
        cin>>amt;
        if (amt > maxRev) maxRev = amt;
      }
      cout<<maxRev<<" ";
    }
}
