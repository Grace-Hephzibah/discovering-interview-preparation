/*
String palindrome
Write a Program to check whether a string palindrome or not.

Sample input:

wow



Sample output:

wow is a palindrome
*/

#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
   char str[100]; cin>>str;
  int l = strlen(str), c=1;
  for(int i=0; i<l/2; i++)
  {
    if (str[i] != str[l-i-1])
    { cout<<str<<" is not a palindrome"; c=0; break;}
  }
  if (c) cout<<str<<" is a palindrome";
  return 0;
}
