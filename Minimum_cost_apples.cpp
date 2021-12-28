/*
To calculate the minimum cost to buy exactly N apples.
Josh went to the market to buy N apples. He found two shops, shop A and B, where apples were being sold in lots. He can buy any number of the complete lot(s) but not loose apples. He is confused with the price and wants you to figure out the minimum cost to buy exactly N apples. Write an algorithm for Josh to calculate the minimum cost to buy exactly N apples.

Input Format:

The first line of the input consists of an integer – N, representing the total number of apples that Josh wants to buy.

The second line consists of two space-separated positive integers – M1 and P1, representing the number of apples in a lot and the lot’s price at shop A, respectively.

The third line consists of two space-separated positive integers-M2 and P2, representing the number of apples in a lot’s price at shop B, respectively.

Output Format:

Print a positive integer representing the minimum price at which Josh can buy the apples.

Sample Input:

19

3 10

4 15

Sample Output:

65


*/


// General Thinking 
#include <iostream>
using namespace std;


int main() 
{
   int tot, s1,c1,s2,c2, b1,b2, min_s, max_s, min_c, max_c, c=0;
  // s - set; c - cost; b - buying no.of set
  cin>>tot>>s1>>c1>>s2>>c2;

  if ((float) c1/s1 < (float) c2/s2) 
  { min_c = c1; max_c = c2; b1 = (tot+1)/s1;
    min_s = s1; max_s = s2;
  }
  else 
  { min_c = c2; max_c = c1; b1 = tot/s2; 
    min_s = s2; max_s = s1;
  }
  b2 = 0;
  while(b1 >= 0)
  {
    if (b1*min_s + b2*max_s == tot) 
    { cout<<b1*min_c + b2*max_c; 
     c = 1; break;
    }
    b2++; b1--;
  }
  
  if (c==0) cout<<"Invalid inputs";
  
  return 0;
}

/* 
//Tree Thinking 
#include <iostream>
#include<limits.h>
using namespace std;
int apples, l1, l2, c1, c2;
int solution(int count, int cost)
{
  if (count == apples) return cost;
  if (count > apples) return INT_MAX;
  
  int g1 = solution(count+l1, cost+c1);
  int g2 = solution(count+l2, cost+c2);
  return ( g1<g2? g1 : g2);
}

int main() 
{
   cin>>apples>>l1>>c1>>l2>>c2;
  if (l1<=0 || l2<=0 || c1<=0 || c2<=0) 
  { cout<<"Invalid inputs"; return 0;}
  
   int ans = solution(0,0);
  if (ans!=INT_MAX) cout<<ans;
  else cout<<" ";
    return 0;
}
*/
