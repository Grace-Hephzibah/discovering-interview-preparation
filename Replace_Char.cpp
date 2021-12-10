/*
Replace the character by its nth term
Write a program to replace all the characters in the given string with the given nth character of the same string .

Input Format:

The first line corresponds to the string.

The second line corresponds to integer which denotes the position of the character present in the string.

Output Format:

Output consist of string.

Sample Input:

abcde

5

Sample Output:

eeeee
*/

#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
   char *input = new char[100], change;
  int n, l;
  cin>>input>>n;
  
  change = input[n-1];
  l = strlen(input);
  
  for(int i=0; i<l; i++)    input[i] = change;
  cout<<input;
  
    return 0;
}
