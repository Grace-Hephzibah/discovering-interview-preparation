/*
Alphabetic cross pattern
Write a program to print the following pattern.

Input Format:

Input consists of a string.

Output Format:

Refer sample output.

Sample Input:

hello

Sample Output:

h      o

 e   l

    l

 e   l

h      o 


*/

#include <iostream>
using namespace std;

int string_length(char *value)
{ int l=0; while(value[l]!=0) l++; return l;}

int pattern(int gap1, int gap2, char *text)
{
  int rounds=0;
  for(int g1=1; g1<=gap1; g1++, rounds++) cout<<" ";
  cout<<text[rounds];
  for(int g2=1; g2<=gap2; g2++, rounds++) cout<<" ";
  cout<<text[rounds+1];
}

int main() 
{
  char input[100]; cin>>input;
  int l = string_length(input), x = l;
  int gap1 = 0, gap2 = l-2;
  
  if (l%2==0) {x = l; l++;}
  
  for(int i=1; i<=l/2;i++)
  {
    pattern(gap1, gap2, input);
    gap1++; gap2-=2; // Changing for the next round
    cout<<endl;//Next line exceution
  }
  
  if (x%2)
  {
    for(int i=1; i<=l/2; i++) cout<<" ";
    cout<<input[l/2]<<endl;
  }
  
  for(int i=1; i<=l/2;i++)
  {
    gap1--; gap2+=2; // Changing for the current round
    pattern(gap1, gap2, input);
    cout<<endl;//Next line exceution
  }
      return 0;
}
