/*
Prime number
A prime number is divisible only by 1 and itself. You are given a positive integer. Write an algorithm to find all the prime numbers from 2 to the given positive number.



Input Format:

The input consists of an integer num, representing the number written on the board.

Output Format:

Print space-separated integers representing the numbers required by the teacher.

Constraints:

1 < num < 109

Sample Input:

11

Sample Output:

2 3 5 7

Explanation:

For the given number the list of special numbers is [2, 3, 5, 7, 11]
*/

#include <iostream>
using namespace std;

void prime_check(int a)
{
  for(int i=2; i<a/2; i++)
    if (a%i==0) return;
  cout<<a<<" ";      
}

int main() 
{
   int n; cin>>n;
   if (n>2) cout<<"2 ";  // T o avoid even numbers 
  	for(int i=3; i<n; i+=2) 
    	prime_check(i); // Checks only odd numbers 
    
  return 0;
}
