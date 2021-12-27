/*
Pythagorean Triplet
A Pythagorean triplet is a set of three integers a, b and c such that a2 + b2 = c2. Given a limit, generate all Pythagorean Triples with values smaller than given limit. 


Sample input:

20

Sample output:

3 4 5

5 12 13

6 8 10

8 15 17

9 12 15

12 16 20


*/

#include <iostream>
using namespace std;

int main() 
{
   int x; cin>>x;
  	int a = 3;
  while(a<=x)
  {
    for(int b = a+1; b<=x; b++)
      for(int c = b+1; c<=x; c++)
        if (a*a + b*b == c*c) 
          cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    a++;
  }
    return 0;
}
