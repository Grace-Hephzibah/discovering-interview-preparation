/*
Find the Key
You are provided with 3 numbers: input1, input2 and input3. Each of these are four digit numbers within the range >=1000 and <=9999 i.e.

1000 <= input1 <= 9999

1000 <=input2 <= 9999

1000 <=input3 <= 9999

You are expected to find the Key using the below formula

Key = [SMALLEST digit in the thousands place of all three numbers] 

[LARGEST digit in the hundreds place of all three numbers] [SMALLEST digit in the tens place of all three numbers] [LARGEST digit in the units place of all three numbers]

Given three numbers, write an algorithm to find the key using the above mentioned formula.

Input

The input consist of three space-separated integers - input1, input2 and input3 representing the three four-digit numbers.

Output

Print an integer representing the concatenation of four digits where first digit represents the smallest digit in the thousands place of all three numbers; 

second digit represents the largest digit in the hundreds place of all three numbers; third digit represents the smallest digit in the tens place of all three numbers and fourth digit represents the largest digit in the units place of all three numbers.

Example

Input:

3521 2452 1352

Output:

1522

Explanation:

Key = [smallest digit in the thousands place of all three numbers] [LARGEST digit in the hundreds place of all three numbers] [smallest digit in the tens place of all three numbers] [LARGEST digit in the units place of all three numbers]

If input1 = 3521, input2=2452, input3-1352, then Key = [1][5][2][2] = 1522.
*/

#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
  if (a>b && a>c) return a;
  else if(b>a && b>c) return b;
  else return c;
}

int min(int a, int b, int c)
{
  if (a<b && a<c) return a;
  else if(b<a && b<c) return b;
  else return c;
}
int main() 
{
   int a,b,c, res = 0; // Input
  	cin>>a>>b>>c;
  
  	int x,y,z, power = 1,place = 1; // The digits to be handled
	// Place = odd -> greater value viceversa
  
  	while(a)
    {
      x = a%10;   y = b%10;   z = c%10;
      if (place%2==1) res = res + max(x,y,z)*power;
      else res = res+ min(x,y,z)*power;
      a/=10;    b/=10;  c/=10;
      power*=10;
      place++;
    }
  	cout<<res;
    return 0;
}
