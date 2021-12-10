/*
Bob encrypt code
Bob has to send a secret code S to his boss. He designs a method to encrypt the code using two key values N and M. The formula that he uses to develop the encrypted code is shown below. (((S^N % 10)^M)%1000000007) Write an algorithm to help Bob encrypt the code.

Input Format:

The input consists of three space-separated integers – S, N and M, representing the secret code, the first key value and the second key value, respectively.

Output Format:

Print an integer representing the code encrypted by Bob.

Constraints:

1 < S < 109

O < N, M < 109

Sample Input:

2 3 4

Sample Output:

4096

Explanation:

S = 2, N = 3, M = 4 and the formula of the encrypted code is:

(((S^N % 10)^M)% 1000000007)

(((2^3 % 10)^4)% 1000000007) = 4096

So, the output is 4096.
*/

#include <iostream>
using namespace std;

int power(int base, int exponent)
{
  int mul=1;
  for(int i=0; i<exponent; i++) mul *= base;
  return mul;
}
int main() 
{
    int s,n,m; cin>>s>>n>>m;
  	int res = power( power(s,n)%10, m) % 1000000007;
  	cout<<res;
    return 0;
}
